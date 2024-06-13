//Libary System

#include<stdio.h>
int main(){
    int book_id,due_date,return_date,fine,days_due;

    printf("Please enter the Book id:");
    scanf("%d", &book_id);

    printf("Please enter the Due date:");
    scanf("%d", &due_date);

    printf("Please enter the return date:");
    scanf("%d", &return_date);

     days_due = due_date - return_date;
     printf("%d",days_due);


    if (days_due >= 1 && return_date <= 7)
    {

        fine = days_due*20;
        printf("Your fine is %d",fine);
    }
      else if (days_due >= 8 && return_date <= 14)
    { 
        fine = days_due*20;
        printf("Your fine is %d",fine);
    }
     else if (days_due >= 15)
    {
        fine = days_due*20;
        printf("Your fine is %d",fine);
    }else{
        printf("You have no fine");
    }

    return 0;
}