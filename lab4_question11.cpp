#include <iostream>
using namespace std;


int hcf(int a,int b);


int main() {
    int a,b,h;
    cout<<"enter any two numbers\n";
    cin>>a>>b;
    h=hcf(a,b);
    cout<<"the hcf of "<<a<<" and "<<b<<" is "<<h;
	return 0;
}

int hcf(int a,int b)
{  

    
       	if(b!=0)
	       return hcf(b,a%b);
	    else 
	        return a;
	        
}  
   