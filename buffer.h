#ifndef BUFFER_H
#define BUFFER_H

#include <fstream>
#include <iostream>
#include <list>

// To get exit()
#include <stdlib.h>

// This is the maximum number of characters from the source file
// that we will read into memory at once.
#define MAX_BUFFER_SIZE 1024

// We use the NULL character to mark the end of the source file in
// the buffer.
#define EOF_MARKER '\0'
  
#define COMMENT_MARKER '#'
#define SPACE ' '

using namespace std;

class Buffer
{
 public:

  // Open the program file and initialize the scanner buffer.
  Buffer(char *filename);
  
  // Close the file and cleanup.
  ~Buffer();
  
  // Remove the next character from the buffer and
  // return it.
  char next_char();
  
  // Put a character back at the front of the buffer.
  void unread_char (char c);
  
  
 private:
  // Storage for the buffer
  list<char> *b;
  
  ifstream *source_file;
  
  // Print an error message and die.
  void buffer_fatal_error();
  
  /* Fill the buffer from the file.  The buffer filling code is
     where all the action happens in this calss.  This function
     is responsible for filling the buffer until it is full with
     characters from the file.  Comments should be omitted,
     whitespace should be compressed to a single space character,
     and a '$' should be inserted at the end of the program to
     mark the end of the source file.
  */
  void fill_buf();
  
  // Is c a whitespace char?
  inline bool is_whitespace (char c)
  {
    return (c == SPACE || c == '\t' || c == '\n');
  }
  
  // For debugging
  void dump_b();
  
  
};

#endif
