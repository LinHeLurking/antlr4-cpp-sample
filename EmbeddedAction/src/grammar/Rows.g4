grammar Rows;

@parser::members {
    size_t col;
    // custom constructor
    RowsParser(antlr4::TokenStream *input, size_t col):  RowsParser(input) {
        this->col = col;
    }
}

file : (row NL)+ ; // NL is newline token: '\r'? '\n'

row 
locals [int i=0]
     : (   STUFF
           {
	   $i++;
	   if ($i == col) std::cout<<$STUFF.text<<std::endl;
	   }
     )+
     ;

TAB  :  '\t' -> skip ; // match but don't pass to the parser 
NL   :  '\r'? '\n' ;   // match and pass to the parser 
STUFF:  ~[\t\r\n]+ ;   // match any chars except tab, newline
