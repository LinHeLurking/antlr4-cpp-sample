
// Generated from src/grammar/ArrayInit.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ArrayInitListener.h"


/**
 * This class provides an empty implementation of ArrayInitListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ArrayInitBaseListener : public ArrayInitListener {
public:

  virtual void enterInit(ArrayInitParser::InitContext * /*ctx*/) override { }
  virtual void exitInit(ArrayInitParser::InitContext * /*ctx*/) override { }

  virtual void enterValue(ArrayInitParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(ArrayInitParser::ValueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

