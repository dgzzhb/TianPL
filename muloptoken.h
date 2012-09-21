/*
 * muloptoken.h
 *
 *  Created on: 2012-9-21
 *      Author: Tian
 */

#ifndef MULOPTOKEN_H
#define MULOPTOKEN_H

using namespace std;

#include "token.h"
#include <string>

typedef enum mulop_attr { MULOP_MUL = 500,
						  MULOP_DIV = 501,
						  MULOP_AND = 502,
						  MULOP_NO_ATTR = 599 } mulop_attr_type;

// All token classes are subclasses of Token
class MulopToken : public Token
{
	public:
		// Construct an uninitialized multiplicative operator token.
		MulopToken();

		~MulopToken();

		// Construct a multiplicative operator token with an attribute.
		MulopToken(mulop_attr_type attr);

		// Return the attribute of this token
		mulop_attr_type get_attribute();

		// Set the attribute of this token
		void set_attribute(mulop_attr_type attr);

		// For debugging only.
		string *to_string();

	private:

		// This tokens attribute
		mulop_attr_type attribute;
};

#endif /* MULOPTOKEN_H */
