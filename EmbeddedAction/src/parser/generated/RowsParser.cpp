
// Generated from src/grammar/Rows.g4 by ANTLR 4.11.1


#include "RowsListener.h"

#include "RowsParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RowsParserStaticData final {
  RowsParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RowsParserStaticData(const RowsParserStaticData&) = delete;
  RowsParserStaticData(RowsParserStaticData&&) = delete;
  RowsParserStaticData& operator=(const RowsParserStaticData&) = delete;
  RowsParserStaticData& operator=(RowsParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rowsParserOnceFlag;
RowsParserStaticData *rowsParserStaticData = nullptr;

void rowsParserInitialize() {
  assert(rowsParserStaticData == nullptr);
  auto staticData = std::make_unique<RowsParserStaticData>(
    std::vector<std::string>{
      "file", "row"
    },
    std::vector<std::string>{
      "", "'\\t'"
    },
    std::vector<std::string>{
      "", "TAB", "NL", "STUFF"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,3,18,2,0,7,0,2,1,7,1,1,0,1,0,1,0,4,0,8,8,0,11,0,12,0,9,1,1,1,1,4,
  	1,14,8,1,11,1,12,1,15,1,1,0,0,2,0,2,0,0,17,0,7,1,0,0,0,2,13,1,0,0,0,4,
  	5,3,2,1,0,5,6,5,2,0,0,6,8,1,0,0,0,7,4,1,0,0,0,8,9,1,0,0,0,9,7,1,0,0,0,
  	9,10,1,0,0,0,10,1,1,0,0,0,11,12,5,3,0,0,12,14,6,1,-1,0,13,11,1,0,0,0,
  	14,15,1,0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,3,1,0,0,0,2,9,15
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rowsParserStaticData = staticData.release();
}

}

RowsParser::RowsParser(TokenStream *input) : RowsParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

RowsParser::RowsParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  RowsParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *rowsParserStaticData->atn, rowsParserStaticData->decisionToDFA, rowsParserStaticData->sharedContextCache, options);
}

RowsParser::~RowsParser() {
  delete _interpreter;
}

const atn::ATN& RowsParser::getATN() const {
  return *rowsParserStaticData->atn;
}

std::string RowsParser::getGrammarFileName() const {
  return "Rows.g4";
}

const std::vector<std::string>& RowsParser::getRuleNames() const {
  return rowsParserStaticData->ruleNames;
}

const dfa::Vocabulary& RowsParser::getVocabulary() const {
  return rowsParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RowsParser::getSerializedATN() const {
  return rowsParserStaticData->serializedATN;
}


//----------------- FileContext ------------------------------------------------------------------

RowsParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RowsParser::RowContext *> RowsParser::FileContext::row() {
  return getRuleContexts<RowsParser::RowContext>();
}

RowsParser::RowContext* RowsParser::FileContext::row(size_t i) {
  return getRuleContext<RowsParser::RowContext>(i);
}

std::vector<tree::TerminalNode *> RowsParser::FileContext::NL() {
  return getTokens(RowsParser::NL);
}

tree::TerminalNode* RowsParser::FileContext::NL(size_t i) {
  return getToken(RowsParser::NL, i);
}


size_t RowsParser::FileContext::getRuleIndex() const {
  return RowsParser::RuleFile;
}

void RowsParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RowsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void RowsParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RowsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}

RowsParser::FileContext* RowsParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, RowsParser::RuleFile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(4);
      row();
      setState(5);
      match(RowsParser::NL);
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == RowsParser::STUFF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RowContext ------------------------------------------------------------------

RowsParser::RowContext::RowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RowsParser::RowContext::STUFF() {
  return getTokens(RowsParser::STUFF);
}

tree::TerminalNode* RowsParser::RowContext::STUFF(size_t i) {
  return getToken(RowsParser::STUFF, i);
}


size_t RowsParser::RowContext::getRuleIndex() const {
  return RowsParser::RuleRow;
}

void RowsParser::RowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RowsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRow(this);
}

void RowsParser::RowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RowsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRow(this);
}

RowsParser::RowContext* RowsParser::row() {
  RowContext *_localctx = _tracker.createInstance<RowContext>(_ctx, getState());
  enterRule(_localctx, 2, RowsParser::RuleRow);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(11);
      antlrcpp::downCast<RowContext *>(_localctx)->stuffToken = match(RowsParser::STUFF);

      	   _localctx->i++;
      	   if (_localctx->i == col) std::cout<<(antlrcpp::downCast<RowContext *>(_localctx)->stuffToken != nullptr ? antlrcpp::downCast<RowContext *>(_localctx)->stuffToken->getText() : "")<<std::endl;
      	   
      setState(15); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == RowsParser::STUFF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void RowsParser::initialize() {
  ::antlr4::internal::call_once(rowsParserOnceFlag, rowsParserInitialize);
}
