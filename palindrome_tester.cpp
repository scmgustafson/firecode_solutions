#include <iostream>

using namespace std;

// Add any helper functions(if needed) above.
bool is_string_palindrome(string str)
{
    // Add your code below this line. Do not modify any other code.     
    bool is_palindrome = false; //Assume not a palindrome
    int low = 0;
   int high = str.size() - 1;
    
    if (str == "") {
        is_palindrome = true;
    }
    
    for (int i = 0; i < str.size(); i += 1) {
        if (str[low + i] != str[high - i]) {
            is_palindrome = false;
        }
        else {
            is_palindrome = true;
        }
    }
    
    return is_palindrome;
    // Add your code above this line. Do not modify any other code.
}