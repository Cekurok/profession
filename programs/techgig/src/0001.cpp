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

int main (void) {
    int n = 4;
    char *array;
//    char *array[] = {12#45#33#27,94#54#23#53,98#59#27#62#,11#51#63#13};
    
    cout << "Enter the array size : ";
    cin >> n;
    
    // for n = 3, array size will be 3 * 3 + 3 for # and 2 for brackets 
    array = new char[n*n + n + 4];

    cin >> array;

    cout << "Entered n : " << n << endl;
    cout << "array     : " << array << endl;

    // delete the memory
    delete array;

    return 0;
}
