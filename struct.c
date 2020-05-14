#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int id;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
  printf("Name \t");
   
        printf("Id \t");printf("Salary \t\n");
    for(i=0; i<n; i++){

        printf("%s \t",employees[i].name);

        printf("%d \t",employees[i].id);
 
        
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
