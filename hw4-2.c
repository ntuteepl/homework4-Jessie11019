#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
int main(void) {
  int atm[6][3] = {{123, 456, 9000}, {456, 789, 5000}, {789, 888, 6000}, {336, 558, 10000}, {775, 666, 12000}, {566, 221, 7000}};


  int n;
  scanf("%d",&n);
  int atm_input[n][n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &atm_input[i][0]);  
    scanf("%d", &atm_input[i][1]);
  }

    bool ans1 = false;


    for(int i=0;i<n;i++)
    {
      ans1=false;
        for(int k=0;k<6;k++)
        {
      
      if (atm[k][0] == atm_input[i][0] )
      {
        if(atm[k][1] == atm_input[i][1])
          {
            printf("%d\n", atm[k][2]);
            ans1=true;
            break;
      }
        
      }
        }
      if(ans1 != true)
      {
        printf("error\n");
      }
      
    
    }


    return 0;

}
