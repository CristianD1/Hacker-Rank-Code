#include <iostream>

using namespace std;

void cntTotal(vector<int> arr){
    double neg = 0;
    double pos = 0;
    double zero = 0;
    double total = 0;
    for(int a = 0; a < arr.size(); a++){
        int val = arr[a];
        if(val < 0){
           neg ++;
        }else if(val > 0){
            pos ++;
        }else{
            zero ++;
        }
        total ++;
    }
    
    double posV = pos/total;
    double negV = neg/total;
    double zeroV = zero/total;
    
    cout << posV << endl << negV << endl << zeroV;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    cntTotal(arr);
    
    return 0;
}