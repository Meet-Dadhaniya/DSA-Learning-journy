#include<iostream>
using namespace std;

//---- prime number using function ----

// void isPrime(int n){

//     if(n<=1){
//         cout<<"not prime";
//     }

//     for(int i=2; i<=n-1; i++){

//         if(n%i==0){
//             cout<<"Not Prime"<<endl;
//             return; // most imp to write return it use for stopping function immediatly
//                     //if we not write return then if num is not prime it will print not prime but continue function and print no prime prime that is wrong. 
//         }
        
//     }
    
//     cout<<"Prime"<<endl;
// }

// int main(){

//     int num = 5;

//     isPrime(num);
//     isPrime(4);

//    // cout<<is<<endl;
// }


// ----- Armstrong number using function ----

// void isArmstrong(int n){
    
//     int sum=0;
//     int temp=n;

//     while(n>0){

//         int rem=n%10;
//         sum=sum+(rem*rem*rem);
//         n=n/10;
//     }

//     if(sum==temp){
//         cout<<"Armstrong"<<endl;
//     }
//     else{
//         cout<<"Not Armstrong"<<endl;
//     }
// }

// int main(){

//     isArmstrong(153);
//     isArmstrong(123);

//     return 0;
// }