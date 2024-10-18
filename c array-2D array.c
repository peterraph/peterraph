//c array-2D array
/*Author:peter maina
Reg no:22779/24*/
#include<stdio.h>
int i,k;
int main(){
    int marks[2][3] = {{20,40,30}, 
                      {10,15,60}};
for(i=0;i<2;i++){
    for(k=0;k<3;k++){
printf("the marks[%d][%d]=%d\n",i,k,marks[i][k]);
    }
}
return 0;
}