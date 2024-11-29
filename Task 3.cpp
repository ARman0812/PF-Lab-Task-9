#include <iostream>
using namespace std;
int main (){
	int arr[3][3];
	
	for (int i=0; i<3;i++){
		for (int j=0; j<3; j++){
			cout<<"Enter the Number : ";
			cin>>arr[i][j];
		}
	}
	int sum=0;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<arr[i][j]<<"\t";
			sum=sum+arr[i][j];
		}
		cout<<endl;
	}
	cout<<"The Sum of all numbers is : "<<sum<<endl;
	
	
}