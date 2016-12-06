/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : chem.c

* Purpose : Educational

* Creation Date : 05-12-2016

* Last Modified : Τρι 06 Δεκ 2016 03:55:39 μμ EET

* Created By :  Stamatios Anoustis

_._._._._._._._._._._._._._._._._._._._._.*/

/*------------------Includes and global definitions---------------------*/
#include <stdio.h> 
#include <stdlib.h>

int A[1501][1501];  //Energy released from ith jth substance reaction.Supposed A in (1,99).
int EXIT_STATUS = 0;

/*-----------------Main Code-------------------------------------------*/
int sum (int ii, int jj, int dim) {

  int t_sum = 0;
  for (int i = ii; i < jj; i++) {

    for ( int j = i + 1; j <= jj; j++) {
      
      //printf( "i = %d j= %d the A is %d \n ", i, j, A[i][j]);
      t_sum = t_sum + A[i][j];

    }

  }

  return t_sum;

}  

int main (int argc, char** argv) {

  int N;
  int K;
  scanf("%d", &N);
  scanf("%d", &K);
  
  for ( int i = 0; i < N; i++) {

    A[i][i] = 0;
  
  }

  int offset = 1;
  int j = offset;
  for ( int i = 0; i < N - 1; i++) {

    while (j < N) {

      scanf("%d", &A[i][j]);
      A[j][i] = A[i][j];
      j++;
    }

    offset++;
    j = offset;

  }

  /*for ( int i = 0; i < N; i++) {

    for ( int j = 0 ; j < N ; j++) {

      printf( "%d ", A[i][j]);

    } 

    printf("\n");

  } */

  //printf("sum is %d \n", sum(0, 4, N));
  return EXIT_STATUS;

}
            
