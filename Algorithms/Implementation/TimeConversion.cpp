#include <iostream>

using namespace std;

string newTime(string time){
    string period = time.substr(time.length()-2, time.length());
    time = time.substr(0, time.length() - 2);
    int hr = atoi(time.substr(0, 2).c_str());
    if(period == "PM" && hr < 12){
         hr = hr + 12;
    }
    if(period == "AM" && hr == 12){
        hr = hr - 12;
    }
    string newHR = "";
    if(hr == 24){
        hr = 0;
    }
    
    if(hr < 10){
        newHR = "0"+to_string(hr);
    }else{
        newHR = to_string(hr);
    }
    time = newHR + time.substr(2, time.length());
    return time;
}

int main(){
    string time;
    cin >> time;
    
    time = newTime(time);
    cout << time;
    
    return 0;
}