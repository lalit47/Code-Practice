#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i=0;
int arr[]={2,3,6,5};
int arr1[]={20,50,90,40};
int arr2[]={0};

//devide arr1 from arr0
int size=sizeof(arr)/sizeof(arr[0]);
    size=sizeof(arr1)/sizeof(arr1[0]);
	arr2[0]=(arr1[0]/arr[0]);
for( i=0;i<size;i++)
{
  arr2[i]=(arr1[i]/arr[i]);
    cout<<arr2[i]<<" "<<endl;
}

//find min of arr2
for( i=0;i<size;i++)
{
	if(arr2[0]>arr2[i])
	{
		int temp=arr2[0];
		arr2[0]=arr2[i];
		arr2[i]=temp;
		cout<<endl<<arr2[0];
		break;
	}
}


}
