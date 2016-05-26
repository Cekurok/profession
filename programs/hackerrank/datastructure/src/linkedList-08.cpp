#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <map>
#include <set>
#include <list>
#include <ctime>
#include <deque>
#include <stack>
#include <string>
#include <bitset>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <cassert>

using namespace std;

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
*/  
  struct Node
  {
     int data;
     struct Node *next;
  };


int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    
    if ((headA == NULL) && (headB == NULL))
        return 1;
    
    while(((headA != NULL) || (headB != NULL))) {
        if((headA ==  NULL ) || (headA->data != headB->data) || (headB == NULL))
            return 0;
        headA = headA->next;
        headB = headB->next;
    }
    
    return 1; 
    
}


int main (void) {

    return 0;
}
