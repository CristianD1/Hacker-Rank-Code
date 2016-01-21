#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    
    int foreCnt = n - 1;
    int currCnt = 0;
    for(int t = 0; t < n; t++){
        currCnt = 0;
        for(int i = 0; i < n; i++){
            if(currCnt < foreCnt){
                cout << ' ';
            }else{
                cout << '#';
            }
            currCnt ++;
        }
        foreCnt --;
        cout << endl;
    }
    
    return 0;
}
