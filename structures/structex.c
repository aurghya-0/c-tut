#include<stdio.h>

struct Employee
{
    char name[50];
    int id;
    int salary;
};
typedef struct Employee employee;

int main()
{
    employee e;
    printf("Enter employee name: ");
    scanf("%s", e.name);
    printf("Enter employee ID: ");
    scanf("%d", &e.id);
    printf("Enter employee salary: ");
    scanf("%d", &e.salary);

    printf("ID\tName\tSalary\n");
    printf("%d\t%s\t%d", e.id, e.name, e.salary);
    return 0;
}