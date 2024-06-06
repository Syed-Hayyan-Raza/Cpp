#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	int arr[5] = {3 , 5, 56 ,5 ,6 };
	int max = arr[1], min = arr[1];
	
	
	
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
