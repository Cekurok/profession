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

class Triangle{
    public:
       void triangle(){
           cout<<"I am a triangle\n";
       }
};
class Isosceles : public Triangle{
    public:
       void isosceles(){
          cout<<"I am an isosceles triangle\n";
       }
        //Write your code here.
    void description(void) {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
};
int main(){
    Isosceles isc;
    isc.isosceles();
     isc.description();
    isc.triangle();
    return 0;
}
