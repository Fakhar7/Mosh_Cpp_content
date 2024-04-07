#include <iostream>
using namespace std;

int main()
{

  string name = "Fakhar Sultan";
  cout << name.find('a') << endl;    // It will return the first occurrence of this character

  // We optionally pass a starting index for searching a character
  cout << name.find('a', 10) << endl;

  // If the characters is not found we get a really large value like this
  // 18446744073709551615
  // Which is equivalent to the negative one -1

  // let understand this, as we now that size_t is unsigned long long
  // It can not hold the negative value, so when the -1 is return
  // this will underflow to the largest value that can hold size_t

  size_t t = -1;
  cout << name.find("H") << endl;
  cout << t << endl;

  // We can find the part of string also
  cout << name.find("Sul") << endl;

  // There is another function called .rfind()
  // It works same as find, the difference is that instead of
  // searching from start it search from end

  cout << name.rfind("l");
  
  // The other functions that are used is
  // (1) find_first_of(): find the first occurrences of an any character
  //     present in the brackets
  // (2) find_last_of: works same as rfind()
  // (3) first_find_not_of(): character that does'nt exists

  return 0;
}