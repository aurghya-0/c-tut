#include<stdio.h>

struct employee
{
    int id;
    char name[50];
    int salary;
};
typedef struct employee Employee;

int main()
{
    int n;
    printf("How many employee data do you want to enter? ");
    scanf("%d%*c", &n); // note that the %*c is to consume the newline
    Employee emp[n];
    printf("Enter employee data: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee name: ");
        // %[^\n]s denotes that read upto the \n or a newline char is entered.
        scanf("%[^\n]s", emp[i].name);
        printf("Enter employee id: ");
        scanf("%d%*c", &emp[i].id);
        printf("Enter employee salary: ");
        scanf("%d%*c", &emp[i].salary);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    return 0;
}