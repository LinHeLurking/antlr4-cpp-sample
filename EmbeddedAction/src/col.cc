#include <ANTLRInputStream.h>
#include <CommonTokenStream.h>

#include <iostream>

#include "parser/generated/RowsLexer.h"
#include "parser/generated/RowsParser.h"

class Col {
 public:
  static void main(int argc, char **argv) {
    assert(argc > 1);
    using namespace antlr4;
    ANTLRInputStream input(std::cin);
    RowsLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    size_t col = std::stoul(argv[1]);
    RowsParser parser(&tokens, col);
    parser.setBuildParseTree(false);  // don't waste time buildding a tree
    parser.file();
  }
};

int main(int argc, char **argv) {
  Col::main(argc, argv);
  return 0;
}
