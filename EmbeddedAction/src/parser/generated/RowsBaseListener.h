
// Generated from src/grammar/Rows.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "RowsListener.h"


/**
 * This class provides an empty implementation of RowsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RowsBaseListener : public RowsListener {
public:

  virtual void enterFile(RowsParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(RowsParser::FileContext * /*ctx*/) override { }

  virtual void enterRow(RowsParser::RowContext * /*ctx*/) override { }
  virtual void exitRow(RowsParser::RowContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

