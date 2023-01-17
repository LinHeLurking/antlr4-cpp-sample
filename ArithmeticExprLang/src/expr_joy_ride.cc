#include <ANTLRInputStream.h>
#include <CommonTokenStream.h>
#include <antlr4-runtime.h>
#include <tree/ParseTree.h>

#include <fstream>
#include <iostream>

#include "parser/generated/expr/ExprLexer.h"
#include "parser/generated/expr/ExprParser.h"

class ExprJoyRide {
 public:
  static void main(int argc, char **argv) {
    using namespace antlr4;
    std::fstream fis;
    if (argc > 1) {
      // If there's command line arguments, use it as input file name.
      // Otherwise use stdin.
      fis = std::fstream(std::string(argv[1]), std::ios::in);
    }
    // operator= is deleted in std::istream.
    // Directly use its CTOR.
    std::istream &is = argc == 1 ? std::cin : fis;

    // Maybe there's no need to malloc these variables in heap.
    // I see they use STL container in member variables.
    // So don't worry about stack overflow. :)

    ANTLRInputStream input(is);
    ExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);
    tree::ParseTree *tree = parser.prog();

    std::cout << tree->toStringTree(&parser) << std::endl;
  }
};

int main(int argc, char **argv) {
  ExprJoyRide::main(argc, argv);
  return 0;
}
