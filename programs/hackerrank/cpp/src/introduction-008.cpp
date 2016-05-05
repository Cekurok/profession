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
#include <unordered_map>

using namespace std;

int main (void) {

    int n;
    cin >> n;
    vector <int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int half = n/2;
    int temp;
   
    for(int i = 0; i < half; i++) {
        // swap the element 
        // iterate only half of array size since we are swapping
        temp       = arr[i];
        arr[i]     = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    for(int i = 0; i < n; i++) 
    cout << arr[i] << " ";
  
    return 0;
}
