#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


class bscs {

private:
    string name;
    int age;
    float ave;
    int id;

public:

    void setInfo(string xName, int xAge, float xAve, int xId) {

        name = xName;
        age = xAge;
        ave = xAve;
        id = xId;

    }


    void displayInfo() {

        cout << "===== " << "ID # " << id << " =====" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "General Average: " << ave << endl;
        cout << getHonors() << endl;

        cout << endl;

    }

    string getHonors() {

        if (ave > 97) return "With Highest Honors!";
        else if (ave > 93) return "With High Honors!";
        else if (ave > 90) return "With Honors!";
        else if (ave > 85) return "Great!";
        else if (ave > 80) return "Good!";
        else if (ave >= 75) return "Passed!";
        else return "Failed";
    }


};

int main()
{
    bscs students[3];

    for (int i = 0; i < 3; i++) {

        string name;
        int age;
        float a, b, c, d;
        float ave;

        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your age: ";
        cin >> age;
        cin.ignore();


        cout << "Enter grade for Data Structures and Algorithm: ";
        cin >> a;
        cin.ignore();


        cout << "Enter grade for Discrete Structures: ";
        cin >> b;
        cin.ignore();


        cout << "Enter grade for Object Oriented Programming (Java): ";
        cin >> c;
        cin.ignore();


        cout << "Enter grade for Software Engineer: ";
        cin >> d;
        cin.ignore();
        cout << endl;


        ave = (a + b + c + d) / 4;

        students[i].setInfo(name, age, ave, i);

    }

    system("CLS");

    for (int i = 0; i < 3; i++) {

        students[i].displayInfo();

    }


    return 0;
}
