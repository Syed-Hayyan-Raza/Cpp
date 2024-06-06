#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int findInArray(int arr[5], int n){
	for(int i=0; i<5; i++){
		if(arr[i] == n){
			return 1;
		}
		else{
			return 0;
		}
	}
}

int main(){
	int arr[5] = {3 , 5, 56 ,5 ,6 };
	int max = arr[1], min = arr[1], n;
	
	cin>>n;
	
	if(findInArray(arr , n)){
		cout<<"Number found"<<endl;
	}else{
			cout<<"Number not found in array"<<endl;
	}
	
	
	for(int i = 0; i<5; i++){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	cout<<"Max is :" << max<<endl;
	cout<<"Min is :" << min;
	return 0;
}
