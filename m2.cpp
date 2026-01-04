#include<iostream>
using namespace std;
int main(){
	
	const int rows = 5;
	const int col = 5;
	
	int matrix[rows][col];
	
	
	for (int i = 0 ; i < rows; i++){
		for (int j = 0 ; j < col; j++){
		cout<<"Enter element [" <<i<< "][" <<j<< "]: ";
		
		cin>>matrix[i][j];
		}
		cout<<endl;
		}
		
	for (int i = 0 ; i < rows ; i++){
		for (int j = 0; j < col; j++){
		cout<<matrix[j][i]<<" ";
		}
		cout<<endl;
		}
		}
		
