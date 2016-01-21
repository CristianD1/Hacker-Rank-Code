#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

// digits must be 3's or 5's
// number of 3's must be divisible by 5
// number of 5's must be divisible by 3

string createInt(int n, int threes, int fives){
  string val = "";
  // number gets set from right to left due to how append works
  for(int i = 0; i < fives; i++){
    val.append("5");
  }
  for(int i = 0; i < threes; i++){
    val.append("3");
  }
  return val;
}

void findDecent(int n){
    // we currently have the maximum number possible (n 5 digits)
    int fiveCnt = n;
    int threeCnt = 0;
    // keep replacing 5's by 3 until
    //  a. we found the correct one
    //  b. out of options (no more to replace)
    string found = "-1";

    while(threeCnt != n+1){
      if(threeCnt % 5 == 0 && fiveCnt % 3 == 0){
        found = createInt(n, threeCnt, fiveCnt);
        break;
      }
      threeCnt ++;
      fiveCnt --;
    }

    cout << found << endl;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        findDecent(n);
    }
    return 0;
}
