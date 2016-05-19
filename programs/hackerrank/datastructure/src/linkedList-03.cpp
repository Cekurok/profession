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


Node* Insert(Node *head,int data)
{
  // Complete this method
  Node *newNode;
  newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  if(head != NULL)
  {
     newNode->next = head;

  }

  return newNode;

}


int main (void) {

    return 0;
}
