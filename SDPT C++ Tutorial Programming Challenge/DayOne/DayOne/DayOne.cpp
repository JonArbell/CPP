#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

using namespace std;
//C++ Week: Day One | Grade Average Program

class student {

private:

	string name = "";
	string section = "";
	string year_level = "";

	float itP = 0;
	float fP = 0;
	float oOP = 0;
	float DSA = 0;
	float DS = 0;
	float iP = 0;
	float eng = 0;
	float sE = 0;
	float average = 0;

public:

	student(string xName, string xSection, string xYear_level) {
		name = xName;
		section = xSection;
		year_level = xYear_level;
	}


	void setGrades() {
		cout << "Introduction to Programming   : ";
		cin >> itP;
		cout << "Fundamentals to Programming   : ";
		cin >> fP;
		cout << "Object Oriented Programming   : ";
		cin >> oOP;
		cout << "Data Structures and Algorithm : ";
		cin >> DSA;
		cout << "Discrete Structures           : ";
		cin >> DS;
		cout << "Intermediate Programming      : ";
		cin >> iP;
		cout << "Purposive communication       : ";
		cin >> eng;
		cout << "Software Engineer             : ";
		cin >> sE;

	}

	float ave() {
		average = (itP + fP + oOP + DSA + DS + iP + eng + sE) / 8;
		return average;

	}

	string merits() {


		if (average >= 100) return "Invalid Grade\n";

		else if (average > 95) return "With Highest Honors\n";

		else if (average > 92) return "With High Honors\n";

		else if (average > 89) return "With Honors\n";

		else if (average > 74) return "Passed\n";

		else return "Failed\n";

	}



	void displayInfo() {
		cout << "======================================\n";
		cout << "Name: " << name << endl;
		cout << "Section: " << section << endl;
		cout << "Year Level: " << year_level << endl;
		cout << "Average: ";
		cout << ave() << endl;;
		cout << "Merits: ";
		cout << merits();

	}

};

int main()
{
	cout << "======= GRADE AVERAGE PROGRAM! =======\n\n";

	string name;
	string section;
	string year_level;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your section: ";
	getline(cin, section);
	cout << "Year Level: ";
	getline(cin, year_level);

	student klase(name, section, year_level);



	cout << "\n==============================================================================\n\n";

	cout << "Enter your grades in all Subject: \n\n";

	klase.setGrades();

	system("CLS");

	klase.displayInfo();


	return 0;
}