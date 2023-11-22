# include<iostream>
#include<string>
using namespace std;

void factorial(int data) {

	int result = data;

	while (data > 1) {
		data--;
		result *= data;
	}
	cout << result;
}

int main() {

	factorial(5);


	return 0;
}