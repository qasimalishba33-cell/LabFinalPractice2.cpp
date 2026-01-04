#include<iostream>
using namespace std;
int main(){

	const int rows = 3;
	const int col = 3;
	int matrix[rows][col];
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < col; j++){
		cout<<"Enter element["<< i <<"]["<< j <<"]:";
		cin>>matrix[i][j];
		}
		cout<<endl;
		}
		
		
	for (int i = 0; i <rows; i++){
		for (int j = 0; j<col; j++){
		cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
		}
 		
 		int sum = 0;
	for (int i = 0; i < rows; i++){
	
			
		for (int j = 0; j < col; j++){
		
		if(i == j ){
		sum += matrix[i][j];
		}
	
		
		
	
	
		
		}
		
		}
		cout<<sum<<" ";
		}
			
			
