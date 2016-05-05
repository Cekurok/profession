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

int max_of_four(int a, int b, int c, int d) {

    int max = a;

    if(a < b)
	max = b;

    if(max < c)
	max = c;

    if (max < d)
	max = d;

    return max;
}

int main (void) {
    int a,b,c,d;

    cin >> d >> c >> b >> a;
    cout << max_of_four(a,b,c,d);

    return 0;
}
