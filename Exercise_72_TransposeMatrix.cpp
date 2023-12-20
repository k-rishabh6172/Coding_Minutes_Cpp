#include<bits/stdc++.h>
using namespace std ;
// const int M=3 ;
// const int N=4 ;

void transpose(int matrix[][50],int N) {
       for (int i = 0; i < N; i++)
            for (int j = i+1; j < N; j++)
            {
                 int temp = matrix[i][j];
                 matrix[i][j] = matrix[j][i];
                 matrix[j][i] = temp;
            }
    }
