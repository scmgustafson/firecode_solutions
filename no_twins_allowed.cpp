#include <iostream>

using namespace std;

// Solution for the "No Twins Allowed!" problem on Firecode.io

/* Write a function that takes an input string - str - 
that returns true if all characters in the string are unique
or false if there even a single repeated character.
For an empty string, return true. */

bool are_all_characters_unique(string str)
{
    // Add your code below this line. Do not modify any other code.                   
    bool unique = true; //Assuming all characters are unique to begin with
    
    for (int i = 0; i < str.size(); i += 1) {
        for (int j = 1; j < str.size(); j += 1) {
            if (str[i] == str[i + j]) {
                unique = false;
            }
        }
    }
    
    return unique;
    
    // Add your code above this line. Do not modify any other code.
}