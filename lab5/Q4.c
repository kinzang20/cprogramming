#include <stdio.h>
#include<string.h>
int main()
{
int i, j, found = 0;
char *country[][2] =
{
{ "Bhutan" },
{ "Nepal" },
{ "India " },
{ "South Korea" }}, name[20];
char *city[][2] =
{
{ "Thimphu" },
{ "Kathmandu" },
{ "Dehli" },
{ "Soul" }
};
printf("Enter Country Name: \n");
scanf("%s",&*name);
for(i = 0; i < 5; i++)
{
if(strcmp(name, *country[i]) == 0 )
{
found = 1;
break;
}
}
if(found==1)
{
printf("\nThe Capital City Of %s Is %s.\n", name, &*city[i][j]);
}
else
{
printf("Error: You are not allowed to run this program.\n");
}
return 0;
}