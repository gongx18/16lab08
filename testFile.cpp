#include "tddFuncs.h"
#include "recLinkedListFuncs.h"
#include "strFuncs.h"

int main() {
	ASSERT_EQUALS(true, isPalindrome("LOL")); 
	ASSERT_EQUALS(false,isPalindrome("WLOG"));
	ASSERT_EQUALS(true, isAnagram("wlog", "logw")); 
	ASSERT_EQUALS(true, isAnagram("aBc", "baC")); 
}
