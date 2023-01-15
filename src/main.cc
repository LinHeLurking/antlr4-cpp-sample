#include <ANTLRInputStream.h>
#include <CommonTokenStream.h>
#include <antlr4-common.h>
#include <antlr4-runtime.h>
#include <support/Declarations.h>
#include <tree/ParseTree.h>
#include <tree/ParseTreeWalker.h>

#include <iostream>
#include <memory>

#include "parser/generated/ArrayInitLexer.h"
#include "parser/generated/ArrayInitParser.h"
#include "parser/util/ShortToUnicodeString.hpp"

class Tester {
 public:
  void test() {
    using namespace antlr4;
    auto input = std::make_unique<ANTLRInputStream>(std::cin);
    auto lexer = std::make_unique<ArrayInitLexer>(input.get());
    auto tokens = std::make_unique<CommonTokenStream>(lexer.get());
    auto parser = std::make_unique<ArrayInitParser>(tokens.get());
    tree::ParseTree *tree = parser->init();

    // Create a generic parse tree walker that can trigger callbacks.
    auto walker = std::make_unique<tree::ParseTreeWalker>();
    auto callback = std::make_unique<ShortToUnicodeString>();
    // Walk the tree created during the parse, trigger callbacks.
    walker->walk(callback.get(), tree);
    std::cout << std::endl;
  }
};

int main() {
  std::cout << "Hello ANTLR4" << std::endl;
  std::cout << "Input codes here:" << std::endl;
  Tester().test();
  return 0;
}
