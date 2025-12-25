#include<iostream>
using namespace std;

void add(int a, int b){

    cout<<a+b<<endl;
}
void add(int a, int b, int c){
    cout<<a+b+c<<endl;
}
void add(float a, float b){
    cout<<a+b<<endl;
}

int main(){

 float a=1.2,b=3.5;
  
 add(3,4);
 add(3,2,1);
 add(a,b);

    return 0;
}