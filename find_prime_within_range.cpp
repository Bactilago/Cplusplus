

/* Write a c++ program in which user will enter start and end of range in integer
Program should display every prime number between range and at the end
total number of prime numbers found in range.
Do the same program with separate function which receives two parameters
 for range calculate result and display output like first code
Use any C++ compiler codeBlocks Recommended
Cpp Tutorial covers the following concepts
Nested for loop
if statement
functions in C++
sqrt() math.h header file */


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int startNum,endNum;
    int found=0,count=0;
    cout<<"Enter Number START of Range:  ";
    cin>>startNum;
    cout<<"Enter Number END of Range:  ";
    cin>>endNum;
    for(int i=startNum;i<=endNum;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  count++;
               }
               if(count==0&&i!=1)
               { found++;
                 cout<<"Prime Number -> "<<i<<endl;
                 count=0;
               }
               count=0;
       }

 cout<<"Total Prime Number Between Range "<<startNum<<" to
 "<<endNum<<" = "<<found<<endl;
 return 1;
}
