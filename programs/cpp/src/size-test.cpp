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
#include "../inc/size-test.h"

using namespace std;

int main (void) {

    int *ptr;
    cout << "size of base class : " << sizeof(base) << endl;
    cout <<"sizeof(class A) : " << sizeof(A) << endl ;
cout <<"sizeof(class B) adding the member int i : " << sizeof(B) << endl ;
cout <<"sizeof(class C) adding the member void foo() : " << sizeof(C) << endl ;
cout <<"sizeof(class D) after making foo virtual : " << sizeof(D) << endl ;
cout <<"sizeof(class E) after adding foo virtual , int : " << sizeof(E) << endl ;
cout <<"sizeof(class F) after adding foo  , int : " << sizeof(F) << endl ;
cout <<"sizeof(class G) after adding foo  , int : " << sizeof(G) << endl ;
G g;
cout <<"sizeof(class G) after adding foo  , int : " << sizeof(g) << endl ;
cout <<"sizeof(class H) after adding int 2 virtual " << sizeof(H) << endl ;
    cout << "size of int pointer : " << sizeof(ptr) << endl;

    return 0;
}
