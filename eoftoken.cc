/*
 * eoftoken.cc
 *
 *  Created on: 2012-9-21
 *      Author: Tian
 */

#include "eoftoken.h"

EofToken::EofToken()
{
	set_token_type (TOKEN_EOF);
	attribute = NULL;
}

EofToken::EofToken(string *attr)
{
	set_token_type (TOKEN_EOF);
	attribute = new string (*attr);
}

EofToken::~EofToken()
{
}

string *EofToken::get_attribute()
{
	return new string (*attribute);
}

void EofToken::set_attribute(string *attr)
{
	attribute = new string (*attr);
}

string *EofToken::to_string()
{
	return new string ("EOFTOKEN:" + *attribute);
}



