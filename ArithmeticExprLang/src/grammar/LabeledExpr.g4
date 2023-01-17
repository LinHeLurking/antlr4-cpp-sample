grammar LabeledExpr;     // Rename to distinguish from original
import CommonLexerRules; // includes all rules from CommonLexerRules.g4

/** The start rule; begin parse here. */
prog:    stat+ ;

stat:    expr NEWLINE               # PrintExpr
    |    ID '=' expr NEWLINE        # assign
    |    NEWLINE                    # blank
    ;

expr:    expr ('*'|'/') expr        # MulDiv
    |    expr ('+'|'-') expr        # AddSub
    |    INT                        # int
    |    ID                         # id
    |    '(' expr ')'               # parens
    ;

MUL :    '*' ; // assigns token name to '*' used above in grammar
DIV :    '/' ;
ADD :    '+' ;
SUB :    '-' ;
