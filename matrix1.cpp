#include<iostream>
using namespace std;
int main(){
 
 	int matrix1[][3] = {{1,2,3},
 			{4,5,6},
 			{7,8,9}};
 			
 	int matrix2[][3] = {{9,8,7},
 			{6,5,4},
 			{3,2,1}};
 			
        int matrix3[][3] = {0};
 			
 	for (int i = 0; i<3; i++){
 		for (int j = 0 ; j<3; j++){
 		cout<<matrix1[i][j]<<" ";
 		}
 		cout<<"\t";
 		for (int j = 0 ; j < 3; j++){
 		cout<<matrix2[j][i]<<" ";
 		}
 		cout<<endl;
 		}
 		
 	
 	
 	for (int rows = 0; rows < 3 ;rows++){
  
  
 	  for (int col = 0;col < 3; col++){ 
 	  int sum = 0;
 	for(int i = 0; i < 3; i++){
 	  sum += matrix1[rows][i]*matrix2[i][col];
 	}
 	cout<<sum<<" ";
 	matrix3[rows][col] = sum;
 	
 	}
 	
 	
 	cout<<endl;
 	}
 	
 	}
