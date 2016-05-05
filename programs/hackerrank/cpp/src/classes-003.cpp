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

class Student {
    vector <int> score;
    int total;
    public :
    void input(void);
    int calculateTotalScore(void);
    Student() { total =0;}

};

void Student::input(void) {
    int temp;
    for (int i =0;i<5;i++) {
        cin >>temp;
        score.push_back(temp);
    }
}

int Student::calculateTotalScore(void) {
    vector <int>::iterator v ;

    for(v = score.begin(); v!= score.end(); v++)
    {
       total += *v;
    }

    return total;

}
int main (void) {

  int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
