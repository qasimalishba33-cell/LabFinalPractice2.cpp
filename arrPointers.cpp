//Array and Pointers 
#include<iostream>
using namespace std;
int main(){

	int a[5] = {1,2,3,4,5};
	int *p;
	p = a;
	int i = 0;
	for (int i = 0; i < 5; i++){
	cout<<a[i];
	cout<<*(a+1);
	
	}
	cout<<*(p+1);
	cout<<p[i];
	}
