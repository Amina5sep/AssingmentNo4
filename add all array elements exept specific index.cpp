#include<iostream>
using namespace std;
int main(){
  int sum ,i, a[10];
  cout<<"Enter 10 Elements of array";
  for ( i=0;i<10;i++){
  	cin>>a[i];
    if(i!=3 && i!=5){
    sum=sum+a[i];
	}
  }
  cout<<"sum of array is = "<<sum<<endl;
 
}
