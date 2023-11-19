#include <iostream>

using namespace std;

int main()
{
    int aray[] = {2,4,5,1,3};
    bool swapped;
    for (int i = 0; i < size(aray);i++) {
        swapped = false;
        for (int j = 0; j < size(aray)-1-i;j++) {
            int currentVal = aray[j];
            int nextVal = aray[j + 1];
            if (currentVal > nextVal) {
                swapped = true;
                aray[j] = nextVal;
                aray[j + 1] = currentVal;
            }
        }
        if (!swapped) {
            break;
        }
    }
    for (int i = 0; i < size(aray);i++) {
        cout << aray[i] << " ";
    }

}

