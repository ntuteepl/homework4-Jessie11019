#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,car,end,temp;
    int s[24]={0}; // 起始時間陣列
    int d[24]={0}; // 結束時間陣列

    while(scanf("%d%d",&s[n],&d[n])!=EOF){
        n+=1;  // 讀取輸入的起始和結束時間，並計算總數量n
    }

    int ssch[256][512]={0}; // 用於行程的二維陣列
    int dsch[256][512]={0}; // 用於司機排班的二維陣列

    // 使用選擇排序法按起始時間對訂單進行排序
    for (int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++){
            if(s[i]>s[j]){  // 如果起始時間s[i]大於起始時間s[j]，交換位置
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
                temp=d[j];
                d[j]=d[i];
                d[i]=temp;
            }
        }
    }

    end=0;

    // 根據排序後的訂單進行排班
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(s[k]>=end && s[k]!=0){  // 尋找下一個可排班的訂單（起始時間大於等於上一個訂單的結束時間）
                    end=d[k];  // 更新結束時間
                    ssch[i][j]=s[k];  // 將起始時間存入排班陣列
                    dsch[i][j]=d[k];  // 將結束時間存入排班陣列
                    s[k]=0;  // 將已排班的訂單標記為已處理
                    d[k]=0;  // 將已排班的訂單標記為已處理
                    j++;  // 排班數量+1
                }
            }
        }
        end=0;  // 重置結束時間為0，以便排下一個司機的班次
    }

    // 輸出車輛數量
    for(int c=0;c<=n;c++){
        if (ssch[c][0]==0){
            car=c;
            printf("%d\n",car);
            break;
        }
    }

    // 輸出每位司機的排班
    for(int d=0;d<car;d++){
        printf("driver %d's schedule is " ,d+1 );
        for(int f=0;f<n*2;f++){
            if(ssch[d][f]!=0){
                printf("%d %d ",ssch[d][f],dsch[d][f]);
            }
            else{
                printf("\n");
                break;
            }
        }
    }
}

