
// Generated from src/grammar/Rows.g4 by ANTLR 4.11.1


#include "RowsLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct RowsLexerStaticData final {
  RowsLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RowsLexerStaticData(const RowsLexerStaticData&) = delete;
  RowsLexerStaticData(RowsLexerStaticData&&) = delete;
  RowsLexerStaticData& operator=(const RowsLexerStaticData&) = delete;
  RowsLexerStaticData& operator=(RowsLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rowslexerLexerOnceFlag;
RowsLexerStaticData *rowslexerLexerStaticData = nullptr;

void rowslexerLexerInitialize() {
  assert(rowslexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<RowsLexerStaticData>(
    std::vector<std::string>{
      "TAB", "NL", "STUFF"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'\\t'"
    },
    std::vector<std::string>{
      "", "TAB", "NL", "STUFF"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,3,21,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,1,0,1,0,1,0,1,0,1,1,3,1,13,8,1,
  	1,1,1,1,1,2,4,2,18,8,2,11,2,12,2,19,0,0,3,1,1,3,2,5,3,1,0,1,2,0,9,10,
  	13,13,22,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,1,7,1,0,0,0,3,12,1,0,0,0,
  	5,17,1,0,0,0,7,8,5,9,0,0,8,9,1,0,0,0,9,10,6,0,0,0,10,2,1,0,0,0,11,13,
  	5,13,0,0,12,11,1,0,0,0,12,13,1,0,0,0,13,14,1,0,0,0,14,15,5,10,0,0,15,
  	4,1,0,0,0,16,18,8,0,0,0,17,16,1,0,0,0,18,19,1,0,0,0,19,17,1,0,0,0,19,
  	20,1,0,0,0,20,6,1,0,0,0,3,0,12,19,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rowslexerLexerStaticData = staticData.release();
}

}

RowsLexer::RowsLexer(CharStream *input) : Lexer(input) {
  RowsLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *rowslexerLexerStaticData->atn, rowslexerLexerStaticData->decisionToDFA, rowslexerLexerStaticData->sharedContextCache);
}

RowsLexer::~RowsLexer() {
  delete _interpreter;
}

std::string RowsLexer::getGrammarFileName() const {
  return "Rows.g4";
}

const std::vector<std::string>& RowsLexer::getRuleNames() const {
  return rowslexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& RowsLexer::getChannelNames() const {
  return rowslexerLexerStaticData->channelNames;
}

const std::vector<std::string>& RowsLexer::getModeNames() const {
  return rowslexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& RowsLexer::getVocabulary() const {
  return rowslexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RowsLexer::getSerializedATN() const {
  return rowslexerLexerStaticData->serializedATN;
}

const atn::ATN& RowsLexer::getATN() const {
  return *rowslexerLexerStaticData->atn;
}




void RowsLexer::initialize() {
  ::antlr4::internal::call_once(rowslexerLexerOnceFlag, rowslexerLexerInitialize);
}
