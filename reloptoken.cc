/*
 * reloptoken.cc
 *
 *  Created on: 2012-9-21
 *      Author: Tian
 */

#include "reloptoken.h"

/* Create a new token with no attributes. */
RelopToken::RelopToken ()
{
  // Set the token type and init the attribute to undefined.
  set_token_type (TOKEN_RELOP);
  attribute = RELOP_NO_ATTR;
}


/* Create a new token with an attribute. */
RelopToken::RelopToken (relop_attr_type attr)
{
  // Set the token type and init the attribute.
  set_token_type (TOKEN_RELOP);
  attribute = attr;
}

/* Nothing to do here. */
RelopToken::~RelopToken ()
{
}

/* Return the token's attribute. */
relop_attr_type RelopToken::get_attribute()
{
  return attribute;
}

/* Set the tokens attribute. */
void RelopToken::set_attribute(relop_attr_type attr)
{
  attribute = attr;
}

/* Extract the token type and attribute, and return a string*
   containing the information. Used for debugging only.
*/
string *RelopToken::to_string()
{
  string *attribute_name;

  switch (attribute) {
  case RELOP_EQ:
    attribute_name = new string ("=");
    break;
  case RELOP_NEQ:
    attribute_name = new string ("<>");
    break;
  case RELOP_GT:
    attribute_name = new string (">");
    break;
  case RELOP_GE:
    attribute_name = new string (">=");
    break;
  case RELOP_LT:
    attribute_name = new string ("<");
    break;
  case RELOP_LE:
    attribute_name = new string ("<=");
    break;
  case PUNC_NO_ATTR:
    attribute_name = new string ("NO ATTRIBUTE");
    break;
  default:
    attribute_name = new string ("GARBAGE ATTRIBUTE VALUE");
    break;
  }

  string *result = new string("RELATIONAL OPERATION:" + *attribute_name);
  delete attribute_name;
  return result;
}



