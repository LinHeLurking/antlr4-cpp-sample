#include <ANTLRInputStream.h>
#include <CommonTokenStream.h>
#include <antlr4-runtime.h>
#include <tree/ParseTree.h>

#include <fstream>
#include <iostream>

#include "parser/calc/eval_visitor.hpp"
#include "parser/generated/labeled_expr/LabeledExprLexer.h"
#include "parser/generated/labeled_expr/LabeledExprParser.h"

class Calc {
 public:
  static void main(int argc, char **argv) {
    using namespace antlr4;
    std::fstream fis;
    if (argc > 1) {
      // If there's command line arguments, use it as input file name.
      // Otherwise use stdin.
      fis = std::fstream(std::string(argv[1]), std::ios::in);
    }
    // operator= is deleted in std::istream.
    // Directly use its CTOR.
    std::istream &is = argc == 1 ? std::cin : fis;

    // Maybe there's no need to malloc these variables in heap.
    // I see they use STL container in member variables.
    // So don't worry about stack overflow. :)

    ANTLRInputStream input(is);
    LabeledExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    LabeledExprParser parser(&tokens);
    tree::ParseTree *tree = parser.prog();

    EvalVisitor eval;
    eval.visit(tree);
  }
};

int main(int argc, char **argv) {
  Calc::main(argc, argv);
  return 0;
}
