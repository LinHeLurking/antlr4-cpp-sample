#include "ShortToUnicodeString.hpp"

#include <iomanip>

using InitContext = ArrayInitParser::InitContext;
using ValueContext = ArrayInitParser::ValueContext;

void ShortToUnicodeString::enterInit(InitContext *ctx) { std::cout << '"'; }

void ShortToUnicodeString::exitInit(InitContext *ctx) { std::cout << '"'; }

void ShortToUnicodeString::enterValue(ValueContext *ctx) {
  // Assumes no nested array initializers
  int value = std::stoi(ctx->INT()->getText());
  std::cout << "\\u" << std::setfill('0') << std::setw(4) << std::hex << value;
}
