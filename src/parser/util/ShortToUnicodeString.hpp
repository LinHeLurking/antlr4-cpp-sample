#ifndef ANTLR_SAMPLE_SHORT_TO_UNICODE_STRING_HPP_
#define ANTLR_SAMPLE_SHORT_TO_UNICODE_STRING_HPP_

#include "../generated/ArrayInitBaseListener.h"
#include "../generated/ArrayInitParser.h"

class ShortToUnicodeString : public ArrayInitBaseListener {
 public:
  // @brief Translate '{' to '"'
  void enterInit(ArrayInitParser::InitContext *ctx) override;

  // @brief Translate '}' to '"'
  void exitInit(ArrayInitParser::InitContext *ctx) override;

  // @brief Translate integers to 4-digit hexadecimal strings
  //        prefixed with "\\u"
  void enterValue(ArrayInitParser::ValueContext *ctx) override;
};

#endif
