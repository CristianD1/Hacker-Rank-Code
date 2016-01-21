#include <iostream>

using namespace std;

int findDiag(vector< vector<int> > a, int n){
    int leftDiag = 0;
    int rightDiag = 0;
    int cntL = 0;
    int cntR = n - 1;
    int row = 0;
    do{
        leftDiag += a[row][cntL];
        rightDiag += a[row][cntR];
        //cout << a[row][cntL] << " " << a[row][cntR] << endl;
        cntL ++;
        cntR --;
        row ++;
    }while(row != n);
    int total = leftDiag - rightDiag;
    if(total < 0){total *= -1;}
    return total;
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    cout << findDiag(a, n);
    return 0;
}