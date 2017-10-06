#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
    int n,f=0;
    cout<<"enter the nth term of fibonacci series\n";
    cin>>n;
    f=fibonacci(n);
    cout<<"the nth term is "<<f;
    return 0;
}


int fibonacci(int n)
{
      if(n==0)
          return 0;
       else if(n==1)
           return 1;
       else
           return fibonacci(n-1)+fibonacci(n-2);
}