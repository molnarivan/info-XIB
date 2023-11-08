#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   int n, tmp, max=0, fib1=0, fib2=1,curr=0;
   ifstream cin ("input.txt");
   ofstream cout ("fib.out");
   cin>>n;
   while(n!=0){
    tmp=n%10;
    n=n/10;
    if(tmp>max){
        max=tmp;
    }
   }
   if(max==0){
    cout<< fib1;
   }
   else if(max==1){
    cout<< fib2;
   }
   else{
    for(int i=2; i<=max; i++){
        curr=fib1+fib2;
        fib1=fib2;
        fib2=curr;
    }
    cout<<curr;
   }
    return 0;
}
