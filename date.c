#include<stdio.h>
int main(){
    int bookID, dueDate,returnDate,overdueDate,fineAmount;
    printf("Enter the bookID");
    scanf("%d",&bookID);
    printf("Enterthe dueDate");
    scanf("%d",&dueDate);
    printf("Enter the returnDate");
    scanf("%d",&returnDate);
overdueDate=returnDate - dueDate;
if(dueDate <=7) {
    fineAmount=overdueDate*20;

}

else if (7< dueDate >= 14)
{
    fineAmount=overdueDate*50;
}

else (14<dueDate );{
    fineAmount=overdueDate*100;
}
printf("%d", fineAmount);

}
