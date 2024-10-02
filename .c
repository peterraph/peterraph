//c program to calculate the fine for overdue laibrary books//
/*Author; peter maina
Reg no;CT101/G/22779/24S*/

 #include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, overdueDays, fineAmount;

    // Input bookID, dueDate, and returnDate
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate overdue days
    overdueDays = returnDate - dueDate;

    // Calculate fine amount based on overdue days
    if (overdueDays <= 7) {
        fineAmount = overdueDays * 20;
    } else if (overdueDays <= 14) {
        fineAmount = (7 * 20) + ((overdueDays - 7) * 50);
    } else {
        fineAmount = (7 * 20) + (7 * 50) + ((overdueDays - 14) * 100);
    }

    // results
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}
