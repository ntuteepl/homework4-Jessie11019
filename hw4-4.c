#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
  int c;
  scanf("%d",&c);
  assert (c>=1 && c<=10);
  int couple [c][c];

  for(int i=0;i<c;i++){
    for(int j=0;j<c;j++){
      scanf(" %d",&couple[i][j]);
    }
  }

  int max,boy,girl,i,j;

  for(int k=0;k<c;k++){
    max=0;
    boy=0;
    girl=0;

    for(i=0;i<c;i++){
      for(j=0;j<c;j++){
        if(couple[i][j]>max){
          max=couple[i][j];
        }
      }
    }

    for(i=0;i<c;i++){
      for(j=0;j<c;j++){
        if(couple[i][j]==max){
          boy=i;
          girl=j;
          printf("boy %d pair with girl %d\n",(boy+1),(girl+1));

        }
      }
    }

    for(i=0;i<c;i++){
      for(j=0;j<c;j++){
        if(i==boy || j==girl){
          data[i][j]=0;
        }
      }
    }
  }
}
