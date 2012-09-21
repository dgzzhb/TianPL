/*
 * punctoken.h
 *
 *  Created on: 2012-9-21
 *      Author: Tian
 */

#ifndef PUNCTOKEN_H
#define PUNCTOKEN_H

using namespace std;

#include "token.h"
#include <string>

typedef enum punc_attr { PUNC_SEMI = 200,
						 PUNC_COLEN = 201,
						 PUNC_COMMA = 202,
						 PUNC_ASSIGN = 203,
						 PUNC_OPEN = 204,
						 PUNC_CLOSE = 205,
						 PUNK_NO_ATTR = 206 } punc_attr_type;

// All token classes are subclasses of Token
class PuncToken : public Token
{
	public:
		// Construct an uninitialized punctuation token.
		PuncToken();

		~PuncToken();

		// Construct a punctuation with an attribute.
		PuncToken(punc_attr_type attr);

		// Return the attribute of this token
		punc_attr_type get_attribute();

		// Set the attribute of this token
		void set_attribute(punc_attr_type attr);

		// For debugging only.
		string *to_string();

	private:

		// This tokens attribute
		punc_attr_type attribute;
};

#endif /* PUNCTOKEN_H_ */