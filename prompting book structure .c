//prompting the user to enter details on book structure
/*Author:peter maina
reg no: CT 101/G/22779*/
#include<stdio.h>
struct book{
    char Author[30],Title[30],ISBN[13];
    int publication_year;
    float price;
}book;
int main(){
 printf("Enter Book Author:");
 scanf("%s",&book.Author);
 printf("Enter Book Title:");
 scanf("%s",&book.Title);
 printf("Enter ISBN no:");
 scanf("%s",&book.ISBN);
 printf("Enter Publication_year:");
 scanf("%d",&book.publication_year);
 printf("Enter the Price:");
 scanf("%.2f",&book.price);

    printf("Book author :%s\n",book.Author);
    printf("The Title:%s\n",book.Title);
    printf("ISBN no:%s\n",book.ISBN);
    printf("Publication_year:%d\n",book.publication_year);
    printf("Price:%.2f\n",book.price);
    return 0;
}
