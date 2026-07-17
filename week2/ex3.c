#include <stdio.h>
int main()
{
float point;
char name[20];
char gender;
printf("Enter your name : ");
scanf("%[^\n]", name);
printf("Enter your point : ");
scanf("%f",&point);

scanf(" %c",&gender);

printf("Name : %s, Point : %0.2f\n", name, point);
return 0;
}