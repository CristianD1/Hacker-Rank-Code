#include <iostream>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }

        bool isCancelled = true;
        int sc = 0;
        for(int i = 0; i < a.size(); i++){
          if(a[i] <= 0){
            sc++;
          }
          if(sc >= k){
            isCancelled = false;
            break;
          }
        }

        if(isCancelled){
          cout << "YES" << endl;
        }else{
          cout << "NO" << endl;
        }
    }



    return 0;
}