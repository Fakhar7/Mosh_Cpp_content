// The header file that are used for strings
// is <cstring> header file
// But <iostream> already have this header file 
// declared in it

// We should avoid from C style strings
// rather we should use C++ string style
// But, we learn c style string also
// because of two reasons
//  (1)  We should face the old legacy code that
//       contains c style strings
//  (2)  The other reason is that most of universities
//       first prefer to teach c style strings 

#include <iostream>
using namespace std;


int main()
{

  // One way to declare c strings is using a array
  // of characters literals
  // While, the end character should be a null terminator
  // If don't add, then we declare only an array of characters
  // not a strings
  char name[5] = {'M', 'o', 's', 'h', '\0'};
    
  // The other way is by using a string literal
  // and in this case, we don't worry about null terminator
  // and the size of char array
  // it's will automatically added by a compiler during compilation
  // Strings literals
   char names[] = "Fakhar";

  // As work with array of characters, we can access the characters
  // using an index number

  // Character literal
  // Literal is fancy computer science term for value
  names[1] = 'k';

  cout << name << ", " << names;

  return 0;
}