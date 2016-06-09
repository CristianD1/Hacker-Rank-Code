#include <iostream>

int findDivisors(int in){
	int tempIn = in;
	int resCount = 0;

	while(tempIn > 0){
		int digit = tempIn % 10;
		tempIn = tempIn / 10;
		if(digit != 0 && in % digit == 0){
			resCount ++;
		}
	}

	return resCount;
}

int main(){

	int t;
	std::cin >> t;

	for(int i = 0; i < t; i++){
		int in;
		std::cin >> in;

		int divisors = findDivisors(in);
		std::cout << divisors << std::endl;
	}

	return 0;
}