//STRUCTURES
/*Author:peter maina 
Reg no:CT 101/G/22779/24*/

#include<stdio.h>
struct book{
    char Author[30],Title[30],ISBN[13];
    int publication_year;
    float price;
}book;
int main(){
    strcpy(book.Author,"John smith");
    strcpy(book.Title,"Introduction to C programing");
    strcpy(book.ISBN,"978131103627");
    book.publication_year = 2022;
    book.price = 49.99;
    printf("Book author :%s\n",book.Author);
    printf("The Title:%s\n",book.Title);
    printf("ISBN no:%s\n",book.ISBN);
    printf("Publication_year:%d\n",book.publication_year);
    printf("Price:%.2f\n",book.price);
    return 0;
}