/* What is a PRIME NUMBER?
" A Natural number greater than 1 which has only two divisor 1 and itself is called prime number ".
For Example:
5 is prime, because it has only two divisors 1 and itself.

C++ Program To Find Prime Numbers */

#include<iostream.h>
#include<conio.h>
        void main()
        {
         //clrscr();
         int number,count=0;
cout<<"ENTER NUMBER TO CHECK IT IS PRIME OR NOT ";
          cin>>number;
           for(int a=1;a<=number;a++)
               {
                if(number%a==0)
                   {
                  count++;
                   }
               }
       if(count==2)
         {
          cout<<" PRIME NUMBER \n";
         }
       else
         {
          cout<<" NOT A PRIME NUMBER \n";
         }
       //getch();
       }


  /*UNDERSTANDING PRIME NUMBERS PROGRAM LOGIC
  To make logic first think about PRIME NUMBER definition
  that a number which divides by 1 and itself.
  So we have make a condition like that in which user will enter
  a number and our program will check it by dividing it from 1 up to itself.
  To check that how much times it has divided to numbers from 1 to itself
  we take a variable and increment it each times when a number is divided.
  In C++ CODING we take a FOR LOOP which will start from 1 up to number that
  has entered to check whether it is PRIME NUMBER or not with in FOR LOOP
  we set an IF condition and placed counter (count++) variable in its body
  so whenever a number from 1 to number which has entered to check divides
  than IF condition becomes true and counter variable will be incremented.
  When FOR LOOP is completed we check from IF condition that if counter
  variables value is equal to 2 than number is PRIME else NUMBER IS NOT PRIME.
  Because if number divided two times by 1 and itself counter variable
  will incremented two times if more than two times counter variable will
  have value greater than 2. 
