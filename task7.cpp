#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];
   
    for (int i = 0; i < n; i++) {
         cout << "Enter marks: ";
        cin >> marks[i];
    }

    int pass = 0;
    for (int i = 0; i < n; i++) {
        if (marks[i] >= 50) {
            pass++;
        }
    }

    cout << "Number of passed students: " << pass << endl;
    return 0;
}

