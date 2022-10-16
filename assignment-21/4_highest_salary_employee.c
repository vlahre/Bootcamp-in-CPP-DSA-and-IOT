#include<stdio.h>
#include<conio.h>

struct employee
{
    char name[30];
    char post[30];
    int salary;
};

int salarySelect(struct employee e[10], struct employee r[10]);

int main()
{
    struct employee e[10], r[10];
    int i, n;
   

    for(i=0;i< 10;i++)
    {
        printf("Enter name, post and salary of employees:\n");
        scanf("%s%s%d", e[i].name, e[i].post, &e[i].salary);
    }
    
    n = salarySelect(e,r);    
    printf("All employee records whose salary above 10000 are:\n");
    for(i=0;i< n;i++)
    {
        printf("Name = %s\n", r[i].name);
        printf("Post = %s\n", r[i].post);
        printf("Salary = %d\n", r[i].salary);
    }
    getch();
    return 0;
}

int salarySelect(struct employee e[10], struct employee r[10])
{
    int i,j=0;
    for(i=0;i< 10;i++)
    {
        if(e[i].salary>10000)
        {
            r[j] = e[i];
            j++;
        }
    }

    return j;
}