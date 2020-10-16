#include <stdio.h>
struct student
{
    char name[25];
    int age;
    char city[10];
    int pin;
    struct student *link;
};
void main()
{
    struct student s[50];
    struct student *p;
    int i;
    printf("Enter name,age,city,pin of students\n");
    for (i = 0; i < 50; i++)
    {
        s[i].link = NULL;
        scanf("%s", s[i].name);
        scanf("%d", &s[i].age);
        scanf("%s", s[i].city);
        scanf("%d", &s[i].pin);
        printf("\n");
    }
    for (i = 0; i < 49; i++)
    {
        s[i].link = &s[i + 1];
    }
    s[49].link = NULL;
    p = &s[0];
    while (p != NULL)
    {
        printf("Name :%s\n", p->name);
        printf("Age : %d\n", p->age);
        printf("City : %s\n", p->city);
        printf("Pin: %d\n", p->pin);
        p = p->link;
    }
}