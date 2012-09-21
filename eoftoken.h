/*
 * eoftoken.h
 *
 *  Created on: 2012-9-21
 *      Author: Tian
 */

#ifndef EOFTOKEN_H
#define EOFTOKEN_H

using namespace std;

#include "token.h"
#include <string>

class EofToken : public Token
{
	public:
		EofToken();
		EofToken(string *attr);
		~EofToken();

		string *get_attribute();
		void set_attribute(string *attr);

		string *to_string();

	private:
		string *attribute;
};

#endif /* EOFTOKEN_H */
