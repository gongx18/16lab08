#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
	if(s1.size() != s2.size()) return false;
	int a[26] = {0};
	int b[26] = {0};

	for(int i = 0; i< s1.size(); i++){
		a[a[i]-'a'] ++;
		b[b[i]-'a'] ++;
	}

	for(int i = 0; i < 26; i++){
		if(a[i] != b[i]){
			return false; 
		}
	}
	return true; 
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 * You should provide a recursive solution
 */
bool isPalindrome(const string s1){
	//end case
        if(s1.size() == 0 || s1.size() == 1){
		    return true; 
	    }
	//execucation step
	    if(s1[0] != s1[s1.size()-1]){
		    return false;
	    }
	//recursive step 
	    return isPalindrome(s1.substr(1, s1.size()-2)); 
}




