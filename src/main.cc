#include <ANTLRInputStream.h>
#include <CommonTokenStream.h>
#include <antlr4-common.h>
#include <antlr4-runtime.h>
#include <support/Declarations.h>
#include <tree/ParseTree.h>

#include <iostream>
#include <memory>

#include "src/parser/ArrayInitLexer.h"
#include "src/parser/ArrayInitParser.h"

class Tester {
 public:
  void test() {
    using namespace antlr4;
    auto input = std::make_unique<ANTLRInputStream>(std::cin);
    auto lexer = std::make_unique<ArrayInitLexer>(input.get());
    auto tokens = std::make_unique<CommonTokenStream>(lexer.get());
    auto parser = std::make_unique<ArrayInitParser>(tokens.get());
    tree::ParseTree *tree = parser->init();
    std::cout << tree->toStringTree(parser.get()) << std::endl;
  }
};

int main() {
  std::cout << "Hello ANTLR4" << std::endl;
  std::cout << "Input codes here:" << std::endl;
  Tester().test();
  return 0;
}
