#include <iostream>
using namespace std;

int main() {
    int array1[5]; 
    int array2[5];
    int num = 5;

   
    for (int i = 0; i < num; i++) {
         cout << "Enter 5 integers:" << endl;
        cin >> array1[i];
    }


    for (int i = 0; i < num; i++) {
        array2[i] = array1[num - 1 - i];
    }


    cout << "Original array: ";
    for (int i = 0; i < num; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;


    cout << "Reversed arraY: ";
    for (int i = 0; i < num; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    return 0;
}


