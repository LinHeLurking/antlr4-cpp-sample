
// Generated from src/grammar/Rows.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "RowsParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RowsParser.
 */
class  RowsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(RowsParser::FileContext *ctx) = 0;
  virtual void exitFile(RowsParser::FileContext *ctx) = 0;

  virtual void enterRow(RowsParser::RowContext *ctx) = 0;
  virtual void exitRow(RowsParser::RowContext *ctx) = 0;


};

