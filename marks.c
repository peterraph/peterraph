#include<stdio.h>
int main(){
    int unit1,unit2,unit3,unit4,unit5,unit6,unit7,unit8,Average;
    char grade;
    printf("Enter communication_skills marks:");
    scanf("%d",&unit1);
     printf("Enter computer application marks:");
    scanf("%d",&unit2);
       printf("Enter ICT marks:");
    scanf("%d",&unit3);  
       printf("Enter computer system and organisation marks:");
    scanf("%d",&unit4);
       printf("Enter programing and algorithms marks:");
    scanf("%d",&unit5);
       printf("Enter analogue and electlronics marks:");
    scanf("%d",&unit6);
       printf("Enter esentials of accounting marks:");
    scanf("%d",&unit7);
       printf("Enter mathematics for science marks:");
    scanf("%d",&unit8);
    Average=(unit1+unit2+unit3+unit4+unit5+unit6+unit7+unit8)/8;
    printf("The Averege is: %d\n",Average);
    if(Average>= 70 && Average <=100){
        grade ='A';

    }
    else if (Average>=60 && Average <=69)
    {grade = 'B';
        
    }
else if (Average>=50&& Average <=59)
{grade = 'C';
    
}
else if (Average>=40&& Average<=49)
{grade = 'D';
    
}
else if (Average>= 0 && Average <=39)
{grade = 'E';
    
}
  printf("The grade is:%c\n",grade); 
  return 0;
}