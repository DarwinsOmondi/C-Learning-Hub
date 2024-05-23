#include<stdio.h>
int main(){

int childern = 5;
float tax = 5400.89;
double bill = 40.60;
char r = 'n';


printf("%d\n",childern);
printf("%.1f\n",tax);
printf("%.6f\n",bill);
printf("%c\n",r);


int myNumbers[] = {1,2,3,4,5,6,7,8,9};
int lenght = sizeof(myNumbers) / sizeof(myNumbers[0]);
printf("%d\n",lenght);

int i ;
for ( i = 0; i < lenght; i++)
{
    printf("%d\n",i);
}


    return 0;
}