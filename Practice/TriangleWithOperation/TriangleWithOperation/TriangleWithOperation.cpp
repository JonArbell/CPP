# include<iostream>
#include<string>
using namespace std;


int main() {
	string one = "1";
	for (int i = 0; i < 9;i++, one += "1") {
		long long convert = stol(one);
		for (int j = 0; j < 9 - i;j++) {
			cout << "  ";
		}
		long long result = convert * convert;
		cout << one << "x" << one << "=" << result << endl;
	}
	return 0;
}