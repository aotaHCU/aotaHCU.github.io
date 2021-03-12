#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(void){
    int n;
    int cardflag[4][13];
    char s[2];
    int count;

    //持ってるフラグの初期化
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            cardflag[i][j]=0;
        }
    }

    scanf("%d",&n);
    /*
    S=0
    H=1
    C=2
    D=3
    */
    for(int i=0;i<n;i++){
        scanf(" %c",&s[0]);
        scanf("%d",&count);
        
        switch(s[0]){
            case 'S':
                cardflag[0][count-1]=1;
                break;

            case 'H':
                cardflag[1][count-1]=1;
                break;
            
            case 'C':
                cardflag[2][count-1]=1;
                break;

            case 'D':
                cardflag[3][count-1]=1;
                break;

        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            if(cardflag[i][j]==0){

            switch(i){
            case 0:
                printf("S %d\n",j+1);
                break;

            case 1:
                printf("H %d\n",j+1);
                break;
            
            case 2:
                printf("C %d\n",j+1);
                break;

            case 3:
                printf("D %d\n",j+1);
                break;

            }
            }

        }

    }

}