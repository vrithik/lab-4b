#include <iostream>
using namespace std;

int reverse(int n);

int main() {
	int n,rev;
	cout<<"enter a nuber\n";
	cin>>n;
	rev=reverse(n);
	cout<<"the reverse of the "<<n<<" is "<<rev;
	return 0;
}
int rev=0,r;
int reverse(int n)
{  
	       
	if(n!=0)
	{
	   r=n%10;
        rev= (rev*10)+r;
	   reverse(n/10);
	}
	
	return rev;
}