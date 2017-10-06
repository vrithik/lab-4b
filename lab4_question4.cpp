#include <iostream>
using namespace std;


int sum(int k,int n);
int main() {
    int n,i=1;
    cout<<"enter the interval\n";
    cin>>n;
    cout<<"sum is "<<sum(i,n);
	return 0;
}

int sum(int k,int n)
{
	if(k<=n)
	{
		return k+sum(k+1,n);
	}
    else
    {
    	return 0;
    }   

}
