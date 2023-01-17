#ifndef ANTLR_SAMPLE_ARITHMETIC_EXPR_LANG_CALC_HPP
#define ANTLR_SAMPLE_ARITHMETIC_EXPR_LANG_CALC_HPP

#include <any>
#include <cstdint>
#include <map>

#include "../generated/labeled_expr/LabeledExprBaseVisitor.h"

class EvalVisitor : public LabeledExprBaseVisitor {
 public:
  // ID '=' expr NEWLINE
  std::any visitAssign(LabeledExprParser::AssignContext *ctx) override {
    auto id = ctx->ID()->getText();   // id is left-hand side of '='
    auto value = visit(ctx->expr());  // compute value of expr on right-side
    memory_[id] = value;              // store it in mem
    return value;
  }

  // expr NEWLINE
  std::any visitPrintExpr(LabeledExprParser::PrintExprContext *ctx) override {
    auto expr = visit(ctx->expr());
    auto value = std::any_cast<int64_t>(expr);  // evaluate the expr child
    std::cout << value << std::endl;
    return std::any{0};
  }

  // INT
  std::any visitInt(LabeledExprParser::IntContext *ctx) override {
    auto value_str = ctx->INT()->getText();
    auto value = std::stoll(value_str);
    // note that `int64_t` may not by `long long` exactly.
    // `std::any` precisely track type information. 
    // So cast it.
    return std::any{int64_t(value)};
  }

  // ID
  std::any visitId(LabeledExprParser::IdContext *ctx) override {
    auto id = ctx->ID()->getText();
    if (memory_.count(id)) {
      return memory_[id];
    }
    return 0;
  }

  // expr op=('*'|'/') expr
  std::any visitMulDiv(LabeledExprParser::MulDivContext *ctx) override {
    auto left = visit(ctx->expr(0)), right = visit(ctx->expr(1));
    auto left_val = std::any_cast<int64_t>(left),
         right_val = std::any_cast<int64_t>(right);
    if (ctx->MUL()) {
      return std::any{left_val * right_val};
    }
    return std::any{left_val / right_val};
  }

  // expr op=('+'|'-') expr
  std::any visitAddSub(LabeledExprParser::AddSubContext *ctx) override {
    auto left = visit(ctx->expr(0)), right = visit(ctx->expr(1));
    auto left_val = std::any_cast<int64_t>(left),
         right_val = std::any_cast<int64_t>(right);
    if (ctx->ADD()) {
      return std::any{left_val + right_val};
    }
    return std::any{left_val - right_val};
  }

  std::any visitParens(LabeledExprParser::ParensContext *ctx) override {
    return visit(ctx->expr());
  }

 private:
  // "memory" for our calculator; vairbale/value pairs go here.
  std::map<std::string, std::any> memory_;
};

#endif
