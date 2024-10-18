//3D array
/*Author:peter maina
Reg no:22779/24*/


#include<stdio.h>
int main(){
    int j,k,i;
    int marks[2][2][3]={{{20,30,60},{70,80,60}},{{10,20,30},{50,60,70}}};
    for(j=0;j<2;j++){
        for(k=0;k<2;k++){
            for(i=0;i<3;i++){
                printf("marks[%d][%d][%d]=%d\n;",j,k,i,marks[j][k][i]);
            }
        }
    }
return 0;
}