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
#include <cassert>

using namespace std;

int main (void) {
    string a,b;
    char c;
    cin >> a >> b;

    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    c = a[0];
    a[0] = b[0];
    b[0] = c;
    cout << a << " " << b;

    return 0;
}
