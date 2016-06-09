#include <iostream>
#include <math.h>

bool isSquare(int num){
	
}

int main(){

	int n;
	std::cin >> n;

	for(int i = 0; i < n; i++){
		int a, b;
		std::cin >> a;
		std::cin >> b;

		int count = 0;
		for(int i = a; i < b; i++){
			count += isSquare(i);
		}

		std::cout << count << std::endl;
	}

	return 0;
}