
//CODE FOR PERFECT NUMBER IN C++
//What is a perfect number?
/*"Perfect number is a positive number which sum of all positive divisors excluding that number."
For example 6 is Perfect Number since divisor of 6 are 1, 2 and 3. Sum of its divisor is
1 + 2+ 3 =6
and  28 is also a Perfect Number
 since 1+ 2 + 4 + 7 + 14= 28
Other perfect numbers: 496, 8128*/


#include<iostream.h>
#include<conio.h>
void main()                 //Start of main
{
  clrscr();
   int i=1, u=1, sum=0;
   while(i<=500)
 {                                  // start of first loop.

   while(u<=500)
   {                               //start of second loop.
     if(u<i)
     {
      if(i%u==0 )
      sum=sum+u;
     }                          //End of if statement

     u++;
   }                           //End of second loop

   if(sum==i)
   {
    cout<<i<<" is a perfect number."<<"\n";
   }

   i++;
   u=1;  sum=0;
 }                             //End of First loop
   getch();
 }                            //End of main
