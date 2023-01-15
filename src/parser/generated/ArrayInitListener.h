
// Generated from src/grammar/ArrayInit.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ArrayInitParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ArrayInitParser.
 */
class  ArrayInitListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInit(ArrayInitParser::InitContext *ctx) = 0;
  virtual void exitInit(ArrayInitParser::InitContext *ctx) = 0;

  virtual void enterValue(ArrayInitParser::ValueContext *ctx) = 0;
  virtual void exitValue(ArrayInitParser::ValueContext *ctx) = 0;


};

