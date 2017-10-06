#include <iostream>
using namespace std;

int sum_of_digits(int n);

int main() {
	int n,s=0;
	cout<<"enter a number\n";
	cin>>n;
	s=sum_of_digits(n);
	cout<<"sum of the digits is "<<s;
	return 0;
}
int r,s=0;
int sum_of_digits(int n)
{ 
   if(n!=0)
   {
     r=n%10;
     s=s+r;
     sum_of_digits(n/10);
   }
   return s;
	
}