
// Generated from src/grammar/ArrayInit.g4 by ANTLR 4.11.1


#include "ArrayInitListener.h"

#include "ArrayInitParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ArrayInitParserStaticData final {
  ArrayInitParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ArrayInitParserStaticData(const ArrayInitParserStaticData&) = delete;
  ArrayInitParserStaticData(ArrayInitParserStaticData&&) = delete;
  ArrayInitParserStaticData& operator=(const ArrayInitParserStaticData&) = delete;
  ArrayInitParserStaticData& operator=(ArrayInitParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag arrayinitParserOnceFlag;
ArrayInitParserStaticData *arrayinitParserStaticData = nullptr;

void arrayinitParserInitialize() {
  assert(arrayinitParserStaticData == nullptr);
  auto staticData = std::make_unique<ArrayInitParserStaticData>(
    std::vector<std::string>{
      "init", "value"
    },
    std::vector<std::string>{
      "", "'{'", "','", "'}'"
    },
    std::vector<std::string>{
      "", "", "", "", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,5,20,2,0,7,0,2,1,7,1,1,0,1,0,1,0,1,0,5,0,9,8,0,10,0,12,0,12,9,0,1,
  	0,1,0,1,1,1,1,3,1,18,8,1,1,1,0,0,2,0,2,0,0,19,0,4,1,0,0,0,2,17,1,0,0,
  	0,4,5,5,1,0,0,5,10,3,2,1,0,6,7,5,2,0,0,7,9,3,2,1,0,8,6,1,0,0,0,9,12,1,
  	0,0,0,10,8,1,0,0,0,10,11,1,0,0,0,11,13,1,0,0,0,12,10,1,0,0,0,13,14,5,
  	3,0,0,14,1,1,0,0,0,15,18,3,0,0,0,16,18,5,4,0,0,17,15,1,0,0,0,17,16,1,
  	0,0,0,18,3,1,0,0,0,2,10,17
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  arrayinitParserStaticData = staticData.release();
}

}

ArrayInitParser::ArrayInitParser(TokenStream *input) : ArrayInitParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ArrayInitParser::ArrayInitParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ArrayInitParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *arrayinitParserStaticData->atn, arrayinitParserStaticData->decisionToDFA, arrayinitParserStaticData->sharedContextCache, options);
}

ArrayInitParser::~ArrayInitParser() {
  delete _interpreter;
}

const atn::ATN& ArrayInitParser::getATN() const {
  return *arrayinitParserStaticData->atn;
}

std::string ArrayInitParser::getGrammarFileName() const {
  return "ArrayInit.g4";
}

const std::vector<std::string>& ArrayInitParser::getRuleNames() const {
  return arrayinitParserStaticData->ruleNames;
}

const dfa::Vocabulary& ArrayInitParser::getVocabulary() const {
  return arrayinitParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ArrayInitParser::getSerializedATN() const {
  return arrayinitParserStaticData->serializedATN;
}


//----------------- InitContext ------------------------------------------------------------------

ArrayInitParser::InitContext::InitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArrayInitParser::ValueContext *> ArrayInitParser::InitContext::value() {
  return getRuleContexts<ArrayInitParser::ValueContext>();
}

ArrayInitParser::ValueContext* ArrayInitParser::InitContext::value(size_t i) {
  return getRuleContext<ArrayInitParser::ValueContext>(i);
}


size_t ArrayInitParser::InitContext::getRuleIndex() const {
  return ArrayInitParser::RuleInit;
}

void ArrayInitParser::InitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArrayInitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInit(this);
}

void ArrayInitParser::InitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArrayInitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInit(this);
}

ArrayInitParser::InitContext* ArrayInitParser::init() {
  InitContext *_localctx = _tracker.createInstance<InitContext>(_ctx, getState());
  enterRule(_localctx, 0, ArrayInitParser::RuleInit);
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
    setState(4);
    match(ArrayInitParser::T__0);
    setState(5);
    value();
    setState(10);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArrayInitParser::T__1) {
      setState(6);
      match(ArrayInitParser::T__1);
      setState(7);
      value();
      setState(12);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(13);
    match(ArrayInitParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

ArrayInitParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArrayInitParser::InitContext* ArrayInitParser::ValueContext::init() {
  return getRuleContext<ArrayInitParser::InitContext>(0);
}

tree::TerminalNode* ArrayInitParser::ValueContext::INT() {
  return getToken(ArrayInitParser::INT, 0);
}


size_t ArrayInitParser::ValueContext::getRuleIndex() const {
  return ArrayInitParser::RuleValue;
}

void ArrayInitParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArrayInitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void ArrayInitParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArrayInitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

ArrayInitParser::ValueContext* ArrayInitParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 2, ArrayInitParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(17);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ArrayInitParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(15);
        init();
        break;
      }

      case ArrayInitParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(16);
        match(ArrayInitParser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ArrayInitParser::initialize() {
  ::antlr4::internal::call_once(arrayinitParserOnceFlag, arrayinitParserInitialize);
}
