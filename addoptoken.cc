/*
 * addoptoken.cc
 *
 *  Created on: 2012-9-21
 *      Author: Tian
 */

#include "addoptoken.h"

/* Create a new token with no attributes. */
AddopToken::AddopToken ()
{
  // Set the token type and init the attribute to undefined.
  set_token_type (TOKEN_ADDOP);
  attribute = ADDOP_NO_ATTR;
}


/* Create a new token with an attribute. */
AddopToken::AddopToken (addop_attr_type attr)
{
  // Set the token type and init the attribute.
  set_token_type (TOKEN_ADDOP);
  attribute = attr;
}

/* Nothing to do here. */
AddopToken::~AddopToken ()
{
}

/* Return the token's attribute. */
addop_attr_type AddopToken::get_attribute()
{
  return attribute;
}

/* Set the tokens attribute. */
void AddopToken::set_attribute(addop_attr_type attr)
{
  attribute = attr;
}

/* Extract the token type and attribute, and return a string*
   containing the information. Used for debugging only.
*/
string *AddopToken::to_string()
{
  string *attribute_name;

  switch (attribute) {
  case ADDOP_ADD:
    attribute_name = new string ("+");
    break;
  case ADDOP_SUB:
    attribute_name = new string ("-");
    break;
  case ADDOP_OR:
    attribute_name = new string ("OR");
    break;
  case ADDOP_NO_ATTR:
    attribute_name = new string ("NO ATTRIBUTE");
    break;
  default:
    attribute_name = new string ("GARBAGE ATTRIBUTE VALUE");
    break;
  }

  string *result = new string("ADDITIVE OPERATOR:" + *attribute_name);
  delete attribute_name;
  return result;
}



