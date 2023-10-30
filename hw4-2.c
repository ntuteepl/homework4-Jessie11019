#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
int main(void) {
  int atm[6][3] = {{123, 456, 9000}, {456, 789, 5000}, {789, 888, 6000}, {336, 558, 10000}, {775, 666, 12000}, {566, 221, 7000}};
  int atm_input[6][3];

  int n;
  scanf("%d",&n);
  assert(n>0&&n<7);

  for (int a = 0; a < n; a++)
  {
    scanf("%d %d", &atm_input[a][0],&atm_input[a][1]);

  }

    bool ans1 = false;
    int ans;
    int i=0;
    for(i=0;i<n;i++)
    {

      if (atm_input[i][0] == atm[i][0] && atm_input[i][1] == atm[i][1])
      {
        ans = atm[i][2];
        printf("%d\n", ans);
        ans1=true;
      }
      else
      {
        ans1 = false;
      }

      if(ans1 != true)
        printf("error\n");

    }


    return 0;

}
