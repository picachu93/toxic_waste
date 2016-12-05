/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : chem.c

* Purpose : Educational

* Creation Date : 05-12-2016

* Last Modified : Δευ 05 Δεκ 2016 03:26:13 μμ EET

* Created By :  Stamatios Anoustis

_._._._._._._._._._._._._._._._._._._._._.*/

/*------------------Includes and global definitions---------------------*/
#include <stdio.h> 
#include <stdlib.h>

int A[1501][1501];  //Energy released from ith jth substance reaction.Supposed A in (1,99).

/*-----------------Main Code-------------------------------------------*/

int main (int argc, char** argv) {

  int N;
  int K;
  scanf("%d", &N);
  scanf("%d", &K); 
  for ( int i = 1; i < N; i++) {

    for ( int j = 1 ; j < N - i; j++) {

      if ( i == j ) {

        A[i,j] = 0;

      }

            
