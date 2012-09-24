/*
 * buffer.cc
 *
 *  Created on: 2012-9-21
 *      Author: Tian
 */

#include "buffer.h"

Buffer::Buffer(char* filename)
{
    source_file.open(filename, ifstream::in); 
    if (!source_file) {
        cerr<<"Unable to open source file: "<<filename<<endl;
        exit(-1);
    }
    fill_buf();

}

Buffer::~Buffer()
{
    source_file.close();
}

char Buffer::next_char()
{
    
}

void Buffer::unread_char(char c)
{
    
}

void Buffer::buffer_fatal_error()
{
    cerr<<"A fatal error occurs in the buffer. Exit."<<endl;
    exit(-1);
}

void Buffer::fill_buf()
{
    char c;
    while(!source_file.eof())
    {
        c = source_file.get();
        
        if (is_whitespace(c))
        {
            while (is_whitespace(c))
            {
                c = source_file.get();
            } 
            b.push_back(SPACE);
        }
        
        if (c == '#')
        {
            while (c != '\n')
            {
                c = source_file.get(); 
            }
            c = source_file.get(); 
        }


        //else
        //{
            b.push_back(c);
        //}
        

    }

    for (list <char>::iterator it = b.begin (); it != b.end (); it ++)
    {
        cout<<*it;
    }
}

void dump_b()
{
    
}