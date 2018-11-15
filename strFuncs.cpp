#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"       // std::string
#include <locale>  
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
	for(int i = 0; i < s1.length(); i++){
	    s1[i] = tolower(s1[i]);
	}
 	for(int i = 0; i < s2.length(); i++){
	    s2[i] = tolower(s2[i]); 
	}
	if(s1.size() != s2.size()) return false; 
	int a[26] = {0};
	int b[26] = {0};

	for(int i = 0; i < s1.length(); i ++){
		a[a[i] - 'a'] ++;
		b[b[i] - 'a'] ++;
	}

    for (int i=0;i<26;i++){
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
	
        if(s1.size() == 0 || s1.size() == 1){
		    return true; 
	    }
	
	    if(tolower(s1[0]) != tolower(s1[s1.size()-1])){
		    return false;
	    }

	    return isPalindrome(s1.substr(1, s1.size()-2)); 
}




