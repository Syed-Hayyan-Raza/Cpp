#include<iostream>
using namespace std;

int main(){
	int num;
	int *ptr = &num;
	
	cout<<"The value at num :"<<*ptr;
	cout<<"The address of num :"<<ptr;
	
	return 0;
}
