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


Node* Delete(Node *head, int data, int position)
{
 // Complete this method
    Node *temp = head;
    

  if(position == 0) {
      return head->next;

  }
    
  for(int i = 0 ; i < position - 1 ; i++)
  {
      head = head->next;

  }

  
  head->next = head->next->next;
  return temp;

}


int main (void) {

    return 0;
}
