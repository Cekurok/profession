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


int sumMatrix() {
}

int main (void) {

   vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    /* 
      take a 3 X 3 matrix at a time from 6 X 6 matrix and calculate the sum      
               
               1 2 3
      matrix = 4 5 6 
               7 8 9

      while calculating sum skip the 4 and 6 element               
    */

    int sum = 0, largest = 0, flag = 0;

      
    for(int arr_i = 0;arr_i < 4;arr_i++){
       for(int arr_j = 0;arr_j < 4;arr_j++){
           sum = 0;
          sum += arr[arr_i][arr_j];
          sum += arr[arr_i + 1][arr_j];
          sum += arr[arr_i + 2][arr_j];
          sum += arr[arr_i + 1][arr_j + 1];
          sum += arr[arr_i][arr_j + 2];
          sum += arr[arr_i + 1][arr_j + 2];
          sum += arr[arr_i + 2][arr_j + 2];
          if (flag == 0){
            // initially set the value for first time
               largest = sum;
               flag = 1;
           }
           
         if((sum >= 0) && (largest >= 0))
          {
              //both are postive numbers 
             if(largest < sum)
                  largest = sum;

          }
          else if ((sum < 0) && (largest >= 0))
          {   
            

          }
           else if ((sum >= 0) && (largest < 0))
          {   
            // sum is postive and largest is negative
            largest = sum;

          }
           else if ((sum < 0) && (largest < 0))
          {   // both are negative values
                   if(abs(sum) < abs(largest))
                       largest = sum;

          }
       }
    }

    cout << abs(largest);

    return 0;
}
