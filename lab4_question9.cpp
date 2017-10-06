#include <iostream>
using namespace std;

int factorial(int n);

int main() {
	int n,f;
	cout<<"enter a number\n";
	cin>>n;
	f=factorial(n);
	cout<<"factorial of the number"<<n<<" is "<<f;
	return 0;
}
int f=1;
int factorial(int n)
{
  if(n!=0)
  {
    f=f*n;
    factorial(n-1);
  }	
  return f;
}