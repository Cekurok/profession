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

class Matrix {
    public :
        vector < vector <int> > a;
        Matrix operator + (const Matrix& b);
};

Matrix Matrix::operator +(const Matrix& other) {
    int row = other.a.size();
    int col = other.a[0].size();
    Matrix sum;
    for (int i =0;i<row;i++) {
        vector<int> b;
        int temp;
        for (int j =0;j < col;j++) {
            temp = a[i][j] + other.a[i][j];
            b.push_back(temp);   
        }
        sum.a.push_back(b);

    }
    return sum;
}


int main (void) {

    int cases,k;
    cin >> cases;
    for(k=0;k<cases;k++) {
        Matrix x;
        Matrix y;
        Matrix result;
        int n,m,i,j;
        cin >> n >> m;
        for(i=0;i<n;i++) {
            vector<int> b;
            int num;
            for(j=0;j<m;j++) {
                cin >> num;
                b.push_back(num);
            }
            x.a.push_back(b);
        }
        for(i=0;i<n;i++) {
            vector<int> b;
            int num;
            for(j=0;j<m;j++) {
                cin >> num;
                b.push_back(num);
            }
            y.a.push_back(b);
        }
        result = x+y;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                cout << result.a[i][j] << " ";
            }
            cout << endl;
        }
    }  

    return 0;
}
