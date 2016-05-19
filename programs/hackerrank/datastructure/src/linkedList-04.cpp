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


Node* InsertNth(Node *head, int data, int position)
{
 // Complete this method only
  // Do not write main function. 
  Node *newNode;
  newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  Node *temp = head;
    
  if(position == 0) {
      newNode->next = head;      
      return newNode;
      
  }
      

  for(int i = 1 ; i < position ; i++)
  {
      head = head->next;

  }

  newNode->next = head->next;
  head->next = newNode;
  return temp; 
 
}


int main (void) {

    return 0;
}
