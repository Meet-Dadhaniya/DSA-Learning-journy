#include<iostream>
using namespace std;


//------ Pass By value -------

void increment(int n){
    n++;
}

int main(){

 int a=10;
  
 increment(a);
 cout<<a;

    return 0;
}


//----- Pass by reference ------


void increment(int &n){
    n++;
}

int main(){

 int a=10;
  
 increment(a);
 cout<<a;

    return 0;
}


