/*
Author:Darwins Omondi
Reg-No:BSE-01-0054/2024*/




#include <stdio.h>
#include <string.h>

// Using the struct method
struct Teacher {
    char name[50];
    int age;
    float salary;
} teacher;

// Using the typedef method
typedef struct {
    char firstName[50];
    char lastName[50];
    char email[60];
    char Reg_No[70];
    char DOb[60];
    int age;
    int phone_Number;
} Student;

int main() {
    // Declare a student variable
    Student student1;

    // Printing out the student details
    printf("Enter your First Name, Last Name, Email, Reg_No, DOB, Age, Phone Number:\n");
    scanf("%s %s %s %s %s %d %d", student1.firstName, student1.lastName, student1.email, student1.Reg_No, student1.DOb, &student1.age, &student1.phone_Number);
    
    printf("Student Details:\n");
    printf("First Name: %s\n", student1.firstName);
    printf("Last Name: %s\n", student1.lastName);
    printf("Email: %s\n", student1.email);
    printf("Reg No: %s\n", student1.Reg_No);
    printf("DOB: %s\n", student1.DOb);
    printf("Age: %d\n", student1.age);
    printf("Phone Number: %d\n", student1.phone_Number);

    // Printing out the teacher's details
    // strcpy(teacher.name, "Mwalimu");
    // teacher.age = 25;
    // teacher.salary = 90000.50;

    // printf("\nTeacher Details:\n");
    // printf("Name: %s\n", teacher.name);
    // printf("Age: %d\n", teacher.age);
    // printf("Salary: %.2f\n", teacher.salary);

    return 0;
}
