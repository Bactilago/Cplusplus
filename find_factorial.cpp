/*
What is a Factorial of a number 'n'?
  The factorial of a number 'n' is the product of all number from 1 upto
the number 'n'it is denoted by n!. For example n=5 then factorial of 5
will be 1*2*3*4*5= 120. 5!= 120
Factorial program C++ Logic:
First think what is the factorial of a number? How mathematically it can be
calculated.
If you got this info then it will be very easier to make a C++ Program
logic to find the factorial.
User enters a number and we have to multiply all numbers upto entered number.
Like if user enters 6  then Factorial should be equal to factorial= 1*2*3*4*5*6.
In this case a for Loop will be very helpful. It will start from one
and multiply all numbers upto entered number after it loop will be terminated.
Take a variable and initialized it to 1 and in loop store multiplication
result into it like in below program a variable
Factorial is used for this purpose.what is we does not initialized it to 1
and initialized it to zero or remain it uninitialized. In case of 0 our
 result will be zero in case of any number entered
In case of not initializing it our answer will correct mostly but if
 variable contains garbage value then we will not be able to get correct result.
It is recommended that to initialize it to one. */

int main()

{

    int num,factorial=1;

    cout<<" Enter Number To Find Its Factorial:  ";

    cin>>num;

    for(int a=1;a<=num;a++)

    {

        factorial=factorial*a;

    }

cout<<"Factorial of Given Number is ="<<factorial<<endl;

    return 0;

}
