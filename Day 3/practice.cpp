#include<iostream>
using namespace std;

int main(){

    // Even number program

      // for(int i=2;i<=10;i+=2){

      //     cout<<i<<" ";
      // }



    // odd number

    //   for(int i=1; i<=10; i++){

    //      if(i%2==1){

    //          cout<<i<<" ";

    //      }

    //  }

      
      // print a to z

        // for(char c='a'; c<='z';c++){

        //     cout<<c<<" ";
        // }

       

     // sum of first 10 numbers

        //    int sum=0;

        //    for(int i=1; i<=10; i++){

        //          sum=sum+i;
                 
        //    }

        //    cout<<sum;


     // square

       // for(int i=1; i<=10; i++){

       //   cout<<i*i<<" ";

       //    }


     // Sum of square
     
        //  int sum = 0;

        //  for(int i=0; i<=10; i++){
           
        //      sum=sum+(i*i);

        //  }

        //      cout<<sum<<" ";


     // print 1 2 3 4 5
            //1 2 3 4 5
            //1 2 3 4 5
            //1 2 3 4 5
            //1 2 3 4 5

           
            
     // * * * * *
        // * * * * *
        // * * * * *
        // * * * * *
        // * * * * *

        //   for(int i=1; i<=5; i++){

        //     for(int j=1; j<=5; j++){

        //         cout<<"*"<<" ";
        //     }
             
        //      cout<<endl;
        //   }


    //  a b c d e 
    //  a b c d e
    //  a b c d e
    //  a b c d e

        //  for(char c='a'; c<='d'; c++){

        //     for(char z='a'; z<='e'; z++){

        //         cout<<z<<" ";
        //     }

        //     cout<<endl;
        //  }

          
        // *
        // **
        // ***
        // ****
        // *****
           
        //    for(int i=1; i<=5; i++){

        //     for(int j=1; j<=i; j++){

        //         cout<<"*"<<" ";
        //     }

        //     cout<<endl;

        //    }



      //  *****
      //  ****
      //  ***
      //  **
      //  * 
      
          // for(int i=5; i>=1; i--){
 
          //   for(int j=1; j<=i; j++){
 
          //     cout<<"*"<<" ";

          //   }

          //   cout<<endl;

          // }

      
  //      *
  //     **
  //    ***
  //   ****
  //  *****

      //  for(int i=1; i<=5; i++){

      //     // print space

      //     for(int j=1; j<=5-i; j++){

      //          cout<<" ";
      //     }

      //     // print star
          
      //     for(int j=1; j<=i; j++){
                       
      //       cout<<"*";

      //     }
      //      cout<<endl;
      //  }



  //      *
  //     ***
  //    *****
  //   *******
  //  *********

      // for(int i=1; i<=5; i++){

      //   // print space 

      //   for(int j=1; j<=5-i; j++){
            
      //     cout<<" ";

      //   }

          //  print star
           
      //   for(int j=1; j<=2*i-1; j++){  // j<=2*i-1 because star is printed in even formate like
      //                                 //  in first row 1 star and then in second row 3 star and then 5..like wise

      //     cout<<"*";
      //   }

      //   cout<<endl;
      // }


      // *********
      //  *******
      //   *****
      //    ***
      //     *

        //  for(int i=5; i>=1; i--){

        //       // print space

        //       for(int j=1; j<=5-i; j++){

        //         cout<<" ";
        //       }
                  
        //       // print star
        //       for(int j=1; j<=2*i-1; j++){

        //             cout<<"*";
        //       }

        //       cout<<endl;
        //  }


     //     *
     //    ***
     //   *****
     //  *******
     // *********
     //  *******
     //   *****
     //    ***
     //     *
 

          // the logic is to first print fist upper hafl and then lower half

          //upper half means till first 5 rows 

          // for(int i=1; i<=5; i++){

          //   //print space

          //   for(int j=1; j<=5-i; j++){

          //     cout<<" ";
          //   }
          //   // print star
          //   for(int j=1; j<=2*i-1; j++){

          //     cout<<"*";
          //   }
          //   cout<<endl;

            
          // }

          // // lower half means last 4 rows

          // for(int i=4; i>=1; i--){

          //   for(int j=1; j<=5-i; j++){

          //     cout<<" ";
          //   }

          //   for(int j=1; j<=2*i-1; j++){

          //     cout<< "*";
          //   }

          //   cout<<endl;
          // }


        // 1 2 3 4 5
        // 6 7 8 9 10
        // 11 12 13 14 15
        // 16 17 18 19 20
        // 21 22 23 24 25

          // for(int i=1; i<=5; i++){                 // 2nd approach 

          //                                               //  for(int i=1; i<=21; i+=5){
                                                          
          //                                               //   for(int j=i; j<=i+4; j++){
          //                                               //     cout<<j<<" ";
          //                                               //   }
          //                                               //   cout<<endl;
          //                                              //  }
          //   for(int j=5*i-4; j<=5*i; j++){
                   
          //     cout<<j<<" ";

          //   }
          //   cout<<endl;
          // }


      //  1
      //  12
      //  123
      //  1234
      //  12345

      // for(int i=1; i<=5; i++){

      //   for(int j=1; j<=i; j++){

      //     cout<<j<<" ";
      //   }
      //   cout<<endl;
      // }


// 1
// 22
// 333
// 4444
// 55555

    // for(int i=1; i<=5; i++){

    //   for(int j=1; j<=i; j++){
    //     cout<<i<<" ";
    //   }
    //   cout<<endl;
    // }



// 1 
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

    // for(int i=1; i<=5; i++){
    //   for(int j=i; j<=2*i-1; j++){
    //     cout<<j<<" ";
    //   }
    //   cout<<endl;
    // }

       

    // A 
    // A B
    // A B C
    // A B C D
    // A B C D E

    // for(char i='A'; i<='E'; i++){
    //   for(char j='A'; j<=i; j++){

    //     cout<<j<<" ";
    //   }
    //   cout<<endl;
    // }



    // 1   Binary triangle
    // 01
    // 101
    // 0101
    // 10101

    //  for(int i=1; i<=5; i++) {
    //   for(int j=1; j<=i; j++){
    //     if((i+j) % 2==0){
    //       cout<<"1";
    //     }
    //     else{
    //     cout<<"0";
    //   }
    // }

    //   cout<<endl;
    //  }


      //  A
      //  BB
      //  CCC 
      //  DDDD
      //  EEEEE 

    // for(char i='A'; i<='E'; i++){

    //   for(char j='A'; j<=i; j++){
    //     cout<<i<<" ";
    //   }
    //   cout<<endl;
    // }

    
      
//     1    IMP
//    121
//   12321
//  1234321
// 123454321

    // for(int i=1; i<=5; i++){
    //   // print space
    //   for(int j=1; j<=5-i; j++){
    //     cout<<" ";
    //   }
    //   for(int j=1; j<=i; j++){
    //     cout<<j;
    //   }
    //   for(int j=i-1;j>=1; j--){
    //     cout<<j;
    //   }
    //   cout<<endl;
    // }




// *        *   Most IMP
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *


    //  upper half 
    // for(int i=1; i<=5; i++){
    //   // left star
    //   for(int j=1; j<=i; j++){
    //     cout<<"*";
    //   }
    //   // space
    //   for(int j=1; j<=2*(5-i); j++){
    //     cout<<" ";
    //   }
    //   // right star
    //   for(int j=1; j<=i; j++){
    //     cout<<"*";
    //   }
    //   cout<<endl;
    // }
         
    // //lower half

    // for(int i=5; i>=1; i--){
    //   // left star
    //   for(int j=1; j<=i; j++){
    //     cout<<"*";
    //   }
    //   // space
    //   for(int j=1; j<=2*(5-i); j++){
    //     cout<<" ";
    //   }
    //   // right star
    //   for(int j=1; j<=i; j++){
    //     cout<<"*";
    //   }
    //   cout<<endl;
    // }

    return 0;
}