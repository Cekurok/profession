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
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as  
*/  
  struct Node
  {
     int data;
     struct Node *next;
  };

void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 

  while(head !=NULL) {
      cout << head->data << endl;
      head = head->next;
  }
}


int main (void) {



    return 0;
}
