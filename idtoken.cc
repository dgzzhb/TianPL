/*
 * idtoken.cc
 *
 *  Created on: 2012-9-21
 *      Author: Tian
 */

#include "idtoken.h"

IdToken::IdToken()
{
	set_token_type (TOKEN_ID);
	attribute = NULL;
}

IdToken::IdToken(string *attr)
{
	set_token_type (TOKEN_ID);
	attribute = new string (*attr);
}

IdToken::~IdToken()
{
}

string *IdToken::get_attribute()
{
	return new string (*attribute);
}

void IdToken::set_attribute(string *attr)
{
	attribute = new string (*attr);
}

string *IdToken::to_string()
{
	return new string ("IDTOKEN:" + *attribute);
}
