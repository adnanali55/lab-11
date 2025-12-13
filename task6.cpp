#include <iostream>
using namespace std;

int main() {
    int array[10];

  
    for (int i = 0; i < 10; i++) {
          cout << "Enter 10 integers"<<endl;
        cin >> array[i];
    }
    int even=0,sum1=0,odd=0,sum2=0;

    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0) { 
            even++;
            sum1 =sum1+ array[i];
        } else { 
    odd++;
            sum2 =sum2+ array[i];
        }
    }


    cout << "Even numbers count: " << even << endl;
    cout << "Odd numbers count: " << odd << endl;
    cout << "Sum of even numbers: " << sum1 << endl;
    cout << "Sum of odd numbers: " << sum2 << endl;

    return 0;
}

