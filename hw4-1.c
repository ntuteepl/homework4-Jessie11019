#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define prime 50
int main(void) {
  int n;
  scanf("%d",&n);
  assert(n>=1&&n<=prime);

  int a [prime];


  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);

      for(int j=2;j<a[i];j++)
      {
          if(a[i]%j==0)
          {
            a[i]=false;
          }


      }
    }



  for(int i=0;i<n;i++)
    {
      if(a[i]==false)
        {
          printf("NO ");
        }
        else
          printf("YES ");
    }



}
