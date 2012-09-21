#include "numtoken.h"

NumToken::NumToken()
{
  set_token_type (TOKEN_NUM);
  attribute = NULL;
}

NumToken::NumToken (string *attr)
{
  set_token_type (TOKEN_NUM);
  attribute = new string (*attr);
}


NumToken::~NumToken()
{
}

string *NumToken::get_attribute()
{
  return new string (*attribute);
}

void NumToken::set_attribute(string *attr)
{
  attribute = new string (*attr);
}

string *NumToken::to_string()
{
  return new string ("NUMTOKEN:" + *attribute);
}
