#include<stdio.h>
int main(){
    int hours,totalHours,days,totalEarning,grossEarning,extraTimeEarning,hourlyPayRate,extraHours;
    hourlyPayRate = 1500;

    printf("Enter number of days worked");
    scanf("%d",&days);

    printf("Enter number of hours worked");
    scanf("%d",&hours);

    //Calculate the total work hour per week
    totalHours = days*hours;
    printf("Your total work hours is %d \n",totalHours);

    //calculate the gross earning
    grossEarning = hourlyPayRate*totalHours;
    printf("Your total gross earning is: %d \n",grossEarning);

    //calculate extra pay
    extraHours = totalHours - 40;
    if (extraHours<=0)
    {
        printf("You don't have any extra hour \n");
    }else{
          printf("Your extra work hours is:%d\n",extraHours);
    }
    
    if (totalHours > 40)
    {
        extraHours = totalHours - 40;
        extraTimeEarning = extraHours*1.5*1500;
        printf("Your extra earning is :%d\n",extraTimeEarning);
    }else
    {
        printf("You have no extra time pay\n");
    }

    totalEarning = grossEarning + extraTimeEarning;
    printf("Your total earnings is :%d\n",totalEarning);
    
    return 0;
}