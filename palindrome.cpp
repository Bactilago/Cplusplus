/* What is a palindrome number?
If the digits of a numbers reversed and number remain the same then it is called palindrome number

For example:
Digits from 0 to 9 are palindrome numbers and
22 ,33, 44, 121, 12321, 131 etc.. */
#include<iostream>
using namespace std;
int main()
{
    int palindrome, reverse=0;
    cout<<"Enter number:  ";
    cin>>palindrome;
    int num=0,key=palindrome;
for(int i=1;palindrome!=0;i++){

    num=palindrome%10;
    palindrome=palindrome/10;
    reverse=num+(reverse*10);
              }

   if(reverse==key){
   cout<<key<<" is a Palindrome Number";
            }
            else{
   cout<<key<<"is NOT a Palindrome Number";
            }
return 0;
}
