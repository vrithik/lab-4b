#include <iostream>
using namespace std;

int natural(int a,int b);


int main() {
	
    int a,b;  
    cout<<"enter the intervals\n";
    cin>>a>>b;
   
    natural(a,b);
    return 0;
}
  
int natural(int a,int b)
{
	if(b<a)
	  return 0;
	cout<<a<<" ";
	natural(a+1,b);
}