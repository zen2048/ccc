#ifndef _TOKEN_H_
#define _TOKEN_H_


#include "../external/external.h"
#include "../lib/lib.h"

// Token types
enum
{
  T_EOF,

  // Binary operators
  T_ASSIGN,
  T_ASPLUS,
  T_ASMINUS,
  T_ASSTAR,
  T_ASSLASH,
  T_ASMOD,
  T_QUESTION,
  T_LOGOR,
  T_LOGAND,
  T_OR,
  T_XOR,
  T_AMPER,
  T_EQ,
  T_NE,
  T_LT,
  T_GT,
  T_LE,
  T_GE,
  T_LSHIFT,
  T_RSHIFT,
  T_PLUS,
  T_MINUS,
  T_STAR,
  T_SLASH,
  T_MOD,

  // Other operators
  T_INC,
  T_DEC,
  T_INVERT,
  T_LOGNOT,

  // Type keywords
  T_VOID,
  T_CHAR,
  T_INT,
  T_LONG,

  // Other keywords
  T_IF,
  T_ELSE,
  T_WHILE,
  T_FOR,
  T_RETURN,
  T_STRUCT,
  T_UNION,
  T_ENUM,
  T_TYPEDEF,
  T_EXTERN,
  T_BREAK,
  T_CONTINUE,
  T_SWITCH,
  T_CASE,
  T_DEFAULT,
  T_SIZEOF,
  T_STATIC,

  // Structural tokens
  T_INTLIT,
  T_STRLIT,
  T_SEMI,
  T_IDENT,
  T_LBRACE,
  T_RBRACE,
  T_LPAREN,
  T_RPAREN,
  T_LBRACKET,
  T_RBRACKET,
  T_COMMA,
  T_DOT,
  T_ARROW,
  T_COLON,

  T_DOTDOTDOT
};

// Token structure
struct token
{
  int token;    // Token type, from the enum list above
  char *tokstr; // String version of the token
  int intvalue; // For T_INTLIT, the integer value
};

extern struct token Token;	
extern struct token Peektoken;	
extern char *TokenString[];

int tokenRightAssociate(int tokentype);
int tokenBinaryAstOperation(int tokentype);
int tokenOperatorPrecedence(int tokentype);

#endif