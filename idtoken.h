/*
 * idtoken.h
 *
 *  Created on: 2012-9-21
 *      Author: Tian
 */

#ifndef IDTOKEN_H
#define IDTOKEN_H

using namespace std;

#include "token.h"
#include <string>

class IdToken : public Token
{
	public:
		IdToken();
		IdToken(string *attr);
		~IdToken();

		string *get_attribute();
		void set_attribute(string *attr);

		string *to_string();

	private:
		string *attribute;
};

#endif /* IDTOKEN_H */
