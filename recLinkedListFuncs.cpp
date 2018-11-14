 #include "linkedList.h"
 #include "linkedListFuncs.h"
 #include <cmath> 
 #include <algorithm>

 //head: ptr to a Node * which is the head of a linked list
 //return sum of all values in linked list using a recursive approach
 //if head is null return 0
int recursiveSum(Node* head) {
	if(head == NULL) return 0; 
	return head->data + recursiveSum(head->next);  
}


 //head: ptr to a Node* which is the head of a linked list
 //return the largest value in the linked list using a recursive approach
 //you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
	if(head == NULL) return -9999999; 						//something like java?
	return std::max(head->data, recursiveLargestValue(head->next)); 
}

 
