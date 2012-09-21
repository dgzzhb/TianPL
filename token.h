#ifndef TOKEN_H
#define TOKEN_H

using namespace std;

#include <string>

// An enum is like a series of int constant defintions,
// except the enum provides some rudimentary type checking.
typedef enum token_type { TOKEN_KEYWORD =  0,
			  TOKEN_PUNC    =  1,
			  TOKEN_RELOP   =  2,
			  TOKEN_ADDOP   =  3,
			  TOKEN_MULOP   =  4,
			  TOKEN_ID      =  5,
			  TOKEN_NUM     =  6,
			  TOKEN_EOF     =  7,
			  TOKEN_NO_TYPE = 99 } token_type_type;

class Token
{

 public:
  Token();

  ~Token();

  // Print the token type and it's attributes.  Must be overwritten
  // in subclass.
  virtual string *to_string() = 0;

  // Set the token type.  Called from subclass.
  void set_token_type (token_type_type type);

  // Return the type of this token.
  token_type_type get_token_type();

 private:
  // The type of the token
  token_type_type type;
  
};

#endif
