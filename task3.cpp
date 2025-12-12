#include<iostream>
using namespace std;
int main() {
   int array[3]={1,2,3};
   int temp=array[0];
    array[0]=array[2];
    array[2]=temp;
    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<endl;
        return 0;
}
