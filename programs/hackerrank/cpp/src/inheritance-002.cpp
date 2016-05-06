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
class Rectangle {
    public :
    int width;
    int height;
    void Display(void) {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle {
    public:
    void Display(void) {
        cout << width * height;
    }
    void Input(void) {
        cin >> width >> height;
    }
};

int main() {
      RectangleArea r_area;
      r_area.Input();
        Rectangle *r;
        r=&r_area;
        r->Display();
        r_area.Display();
    return 0;
}

