 #include<iostream>
 using namespace std;
 int main()
 {
 	int i,j,n;
 	cin>>n;
 	char arr[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 		int k=1;
	for(i=1;i<=n;i++,k++){
		 for(j=0;j<(n-k);j++)
		{
			cout<<" ";
		}
 		for(j=1;j<=i;j++)
 		{
 			cout<<arr[i-1]<<" ";
		 }
		 cout<<endl;
	 }
 }
