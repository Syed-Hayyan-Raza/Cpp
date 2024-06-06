//Recursion
//Factorial calculation 
//
//#include<iostream>
//using namespace std;
////like factorial of 4 is 4 = 4*3*2*1
//int fac(int f){
//	if(f < 2)
//		return 1;
//	return f * fac(f-1);
//}
//
//int main(){
//	int n;
//	
//	cout<<"Enter a Number :";
//	cin>>n;
//	
//	cout<<fac(n);
//	return 0;
//}

//Fibonnic Sequence With recursion
//#include<iostream>
//using namespace std;
//
//int fib(int n){
//	if(n<2)
//	return 1;
//	
//	return fib(n-1) + fib(n-2);
//} 
//int main(){
//	int n;
//	
//	cout<<"Enter any number :" <<endl;
//	cin>>n;
//	cout<<"0";
//	for(int i =0; i<n-1; i++){
//		cout<<" "<<fib(i);
//	}
//	return 0;
//}

//Power calculation 'b' Base and 'e' Exponenet using recursion


//#include<iostream>
//using namespace std;
//
//int power(int b, int e) {
//    if (e == 0) 
//        return 1; 
//    else 
//        return b * power(b, e - 1); // Recursive call with e decremented
//    
//}
//
//int main() {
//    int n, e;
//    
//    cout << "Enter any number as Base: " << endl;
//    cin >> n;
//    cout << "Enter any number as Power: " << endl;
//    cin >> e;
//    cout << n << " raised to the power " << e << " is: " << power(n, e) << endl;
//    
//    return 0;
//}


//[Structures] ---------------- CPP ----------------------------

//#include<iostream>
//using namespace std;
//
//struct employee{
//	int id;
//	string name;
//	string department;
//}e;
//
//void cls(){
//	system("cls");
//}
//void InputInEmployee(employee e[5], int i){
//	cout<<"Enter the name of employee :"<<endl;
//	cin>>e[i].name;
//	cout<<"Enter Id Of employee :"<<endl;
//	cin>>e[i].id;
//	cout<<"Enter Department Of employee :"<<endl;
//	cin>>e[i].department;
//	cls();
//}
//
//int main(){
//	employee e[5];
//	
//	for(int i=0; i<5; i++){
//		InputInEmployee(e , i);
//	}
//	
//	
//	return 0;
//}


#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct employee{
	string name;
	int age;
	string gender;
};
struct orgnaization{
	string name;
	string address;
	employee e;
}org;

void WriteInFile(const string& str) {
    ofstream file("Data.csv");
    if (!file.is_open()) {
        cout << "Error Occurred While Opening File" << endl;
        return;
    }

    file << str; 

    cout << "Data written to file successfully." << endl;
}


int main(){
	
	cout<<"Enter your name"<<endl;
	cin>>org.e.name;
	
	return 0;
}







