#include<iostream>
using namespace std;
int main (){
	int i,n=10;
	int arr[n];
	cout<<"Enter Elements of array "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];	
	}
	cout<<"Reverse of array is"<<endl;
	for(i=n-1;i>=0;i--){
		cout<<arr[i]<<endl;
	}
}
