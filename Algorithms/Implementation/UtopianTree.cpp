#include <iostream>

using namespace std;

// spring: double height
// summer: 1m increase
// start: 1m at onset of spring

void calcHeight(int n){

  int height = 1;

  int flip = 2;

  for(int i = 0; i < n; i++){
    if(flip == 1){
      height ++;
      flip = 2;
    }else{
      height *= 2;
      flip = 1;
    }
  }

  cout << height << endl;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;

        calcHeight(n);
    }
    return 0;
}
