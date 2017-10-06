#include <iostream>
using namespace std;

int pallindrome(int n);

int main() {
    int n;
    cout<<"enter a number\n";
    cin>>n;
    if(pallindrome(n)==n)
        cout<<"the number "<<n<<" is pallindrome";
    else
        cout<<"the number "<<n<<" is not pallindrome";
    return 0;
}

int rev=0,r;
int pallindrome(int n)
{
	if(n!=0)
	{
	   r=n%10;
        rev= (rev*10)+r;
	   pallindrome(n/10);
	} 
            return rev ;


}