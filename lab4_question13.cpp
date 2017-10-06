#include <iostream>
using namespace std;

int array(int arr[],int j,int l);

int main() {
	int n,arr[100],i;
	cout<<"enter the nuber of elemnts in an array\n";
	cin>>n;
	cout<<"enter "<<n<<" elements of array\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the elements are \n";
	array(arr,0,n);
	return 0;
}

int array(int arr[],int j,int l)
{     
	if(j>=l)
	  return 0;
	
            cout<< arr[j]<<"\n";
            array(arr, j + 1,l);
}
