/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : chem.c

* Purpose : Educational

* Creation Date : 05-12-2016

* Last Modified : Τετ 07 Δεκ 2016 12:18:53 πμ EET

* Created By :  Stamatios Anoustis

_._._._._._._._._._._._._._._._._._._._._.*/

/*------------------Includes and global definitions---------------------*/
#include <stdio.h> 
#include <stdlib.h>
#include <limits.h>

int A[1501][1501];  //Energy released from ith jth substance reaction.Supposed A in (1,99).
int Sum[1501][1501];
int E[1501][1501];
int EXIT_STATUS = 0;

/*-----------------Main Code-------------------------------------------*/
int sum (int ii, int jj) {

  int t_sum = 0;
  for (int i = ii; i < jj; i++) {

    for ( int j = i + 1; j <= jj; j++) {
      
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

  //printf("sum is %d \n", sum(0, 4));
  for (int i = 0; i < N - 1; i++) {
  
    for ( int j = i + 1; j < N; j++) {

      Sum[i][j] = sum(i,j);

    }

  }

  /*for ( int i = 0; i < N; i++) {

    for ( int j = 0 ; j < N ; j++) {

      printf( "%d ", Sum[i][j]);

    } 

    printf("\n");

  } */

  for ( int i = 0; i < N; i++) {

    E[i][0] = Sum[0][i];

  }

  for ( int j = 0; j < K; j++) {

    E[0][j] = 0;

  }  

  int q;
  for ( int i = 0; i < N; i++) {
    
    for ( int j = 1; j < K; j++) {

      if ( i != 0 ) {

      E[i][j] = INT_MAX;

      }

      for ( int k = 0; k < i ; k++) {
    
        q = E[k][j - 1] + Sum[k+1][i];
        if ( q < E[i][j] ) {

	  E[i][j] = q;	

        }

      }

    }

  }

  printf("%d", E[N - 1][K - 1]);
  printf("\n");
  return EXIT_STATUS;

}
            
