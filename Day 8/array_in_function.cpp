#include<iostream>
using namespace std;

//---- array is passed with it's name , size in function ----

void printArray(int arr[], int n){

      for(int i=0; i<n; i++){

        cout<<arr[i];
      }

    }

int main(){


   int arr[5]={1,3,4,2,5};

   printArray(arr,5);


    return 0;
}