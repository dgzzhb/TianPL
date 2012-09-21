#ifndef NUMTOKEN_H
#define NUMTOKEN_H

using namespace std;

#include "token.h"
#include <string>

class NumToken : public Token
{
 public:
  NumToken();
  NumToken(string *attr);
  ~NumToken();

  string *get_attribute();
  void set_attribute(string *attr);

  string *to_string();

 private:
  string *attribute;
};

#endif
