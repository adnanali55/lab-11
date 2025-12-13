#include <iostream>
using namespace std;

int main() {
   int array[8];
   int Min;
  
   for(int i =0;i<=7;i++){
     cout<<"enter integers";
     cin>>array[i];
   }
  Min=array[0];
  for(int i=1;i<=8;i++){
      if(array[i]<Min){
          Min=array[i];
      }
  }
cout<<"minimum value is"<<Min;
    return 0;
}

