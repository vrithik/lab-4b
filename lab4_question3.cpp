#include <iostream>
using namespace std;

int evenorodd(int a,int b);


int main() {
	
    int a,b;  
    cout<<"enter the intervals\n";
    cin>>a>>b;
    evenorodd(a,b);
    return 0;
}
  
int evenorodd(int a,int b)
{
	if(b<a)
	  return 0;
	if(a%2==0)
	{ 
		cout<<a<<" ";
             	evenorodd(a+2,b);
		
	}
	else 
	{
		cout<<a<<" ";
		evenorodd(a+2,b);
	}
}