#include<iostream>
using namespace std;
int main (){
	
	int arr[4][4]={ {2,4,6,8},{1,3,6,9},{1,2,3,4},{5,6,7,8} };
		
		
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
