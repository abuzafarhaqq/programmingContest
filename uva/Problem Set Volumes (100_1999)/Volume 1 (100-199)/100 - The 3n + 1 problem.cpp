// Problem Name: 100 - The 3n + 1 problem (onlinejudge)
// Solver: Abu Zafar Haque
#include<iostream>
using namespace std;
int findResult(int num);
int main()
{
    long int a, b, i, maxNumber=0, res, sNum, lNum;
    while(cin>>a>>b){
        if(a>b){
            sNum = b;
            lNum = a;
        }
        else{
            sNum = a;
            lNum = b;
        }
        for(i=sNum;i<=lNum;i++){
            res = findResult(i);
            if(res>=maxNumber){
                maxNumber = res;
            }
        }
        cout<<a<<" "<<b<<" "<<maxNumber<<endl;
    }
    return 0;
}
int findResult(int num)
{
    int r=1;
    while(1){
        if(num==1) break;
        else{
            if(num%2==1) num = (3*num)+1;
            else num /= 2;
        }
        r++;
    }
    return r;
}
