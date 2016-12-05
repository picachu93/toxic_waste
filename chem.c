/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : chem.c

* Purpose : Educational

* Creation Date : 05-12-2016

* Last Modified : Δευ 05 Δεκ 2016 05:36:00 μμ EET

* Created By :  Stamatios Anoustis

_._._._._._._._._._._._._._._._._._._._._.*/

/*------------------Includes and global definitions---------------------*/
#include <stdio.h> 
#include <stdlib.h>

int A[1501][1501];  //Energy released from ith jth substance reaction.Supposed A in (1,99).
int EXIT_STATUS = 0;

/*-----------------Main Code-------------------------------------------*/

int main (int argc, char** argv) {

  int N;
  int K;
  scanf("%d", &N);
  scanf("%d", &K);
  printf("%d " ,N);
  printf("%d\n", K);
  
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

  for ( int i = 0; i < N; i++) {

    for ( int j = 0 ; j < N ; j++) {

      printf( "%d ", A[i][j]);

    } 

    printf("\n");

  }

  return EXIT_STATUS;

}
            
