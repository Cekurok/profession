#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
long n = 0;
long count = 0;
long div = 0;
long input = 0;
cin >> n >> div;
for (long i =0; i < n; i++){
cin >> input;
if((input % div) == 0)
count++;
}
cout << count;
return 0;
}
