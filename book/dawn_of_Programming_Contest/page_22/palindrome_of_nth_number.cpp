/**
Book Name: Dawn of Programming Contest
Page: 22
Practice Problem: Palindrome হল সেই জিনিস সা সামনে থেকে পড়তেও যা পেছন দিক পড়তেও তা। যেমনঃ কিছু Palindrome number
হলঃ  1, 2, 3, . . . 9, 11, 22, 33, . . . 99, 101, 111, 121, . . .. তোমাকে n তম Palindrome Number প্রিন্ট করতে হবে। (n < 100)
Solver: Abu Zafar Haque
Language: C++
IDE: Code Blocks IDE 20.03
**/
#include<bits/stdc++.h>
using namespace std;
/// function reverse number like 123 to 321
int _reverse(int num)
{
    int _remainder, _revers=0;
    while(num)
    {
        _remainder=num%10;///number%10=remainder; got last digit of a number;
        _revers=_revers*10+_remainder;///reverse*10=left shift number and add second number;
        num/=10;///finally number without last digit
    }
    return _revers;///returns reverse number
}
/// function checks number if palindrome return 1
bool _palindrome(int num)
{
    if(num==_reverse(num)) return true;
    return false;
}
/// function calculate n th palindrome number
int _nthpalindrome(int nth)
{
    int i, num=0;
    for(i=1;i<=nth; )
    {
        ++num;///num var increased every loop
        if(_palindrome(num))
        {
            ++i;///to match with n th palindrome if palindrome found increase i
        }
    }
    return num;
}

int main()
{
    int number;
    cin>>number;
    cout<<_nthpalindrome(number)<<endl; ///used for find n th palindrome; remove if use for loop bellow;

    ///use this loop if you want a list of all loop
    for(int i=1;i<=number;i++)
    {
        cout<<i<<" : "<<_nthpalindrome(i)<<endl;
    }

    return 0;
}
