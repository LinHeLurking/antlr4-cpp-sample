
// Generated from src/grammar/Rows.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  RowsParser : public antlr4::Parser {
public:
  enum {
    TAB = 1, NL = 2, STUFF = 3
  };

  enum {
    RuleFile = 0, RuleRow = 1
  };

  explicit RowsParser(antlr4::TokenStream *input);

  RowsParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~RowsParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


      size_t col;
      // custom constructor
      RowsParser(antlr4::TokenStream *input, size_t col):  RowsParser(input) {
          this->col = col;
      }


  class FileContext;
  class RowContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RowContext *> row();
    RowContext* row(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileContext* file();

  class  RowContext : public antlr4::ParserRuleContext {
  public:
    int i = 0;
    antlr4::Token *stuffToken = nullptr;
    RowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STUFF();
    antlr4::tree::TerminalNode* STUFF(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RowContext* row();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

