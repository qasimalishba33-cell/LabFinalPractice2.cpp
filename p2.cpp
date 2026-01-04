//Array and Pointers 
#include<iostream>
using namespace std;
int main(){

int arr[7];


for (int i = 0; i < 7; i++){//taking input array

 cout<<"Enter Element of Array" <<i+1<<endl;
 cin>>arr[i];
 }
 
 	for (int i = 0; i < 7; i++){
 	cout<<arr[i]<<",";
 	
 	}
 	cout<<endl;
 	cout<<++arr[1] //Element at arr[2]th position will be printed
 	<<endl;
 	
	cout<<arr;//direct  Array address without pointers
	
	
	
	
	}
