#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <vector>
using namespace std;

int main()
{

	int counter;
	cout << "Enter number of elements: ";
	cin >> counter;
	vector<string> name(counter);

	for (int i = 0; i < counter;i++) {
		cout << "Name " << i + 1 <<": ";
		cin >> name[i];
	}

	string search;
	cout << "Search name: ";
	cin >> search;
	bool exist = false;
	for (int j = 0; j < counter; j++) {
		if (search == name[j]) {
			cout << search << " is existed in index " << j;
			exist = true;
			break;
		}
	}
	if (!exist) {
		cout << search << " is not exist in array";
	}

	return 0;
}


