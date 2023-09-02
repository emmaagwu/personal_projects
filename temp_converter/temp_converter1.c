#include <stdio.h>

int main()
{
char name[50];
int choice, temp;
int cel, fah;

printf("TEMPERATURE CONVERTER\n\n\n");

printf("What is your name?\n");
scanf("%s", name);

printf("%s, choose what you want to do:\n\n", name);
do
{
printf(" Choose [1] to Convert Fahrenheit to Celsius\n");
printf(" Choose [2] to convert Celsius to Fahrenheit\n");
scanf("%d", &choice);
if (choice != 1 && choice != 2)
{
printf("Invalid choice. Please enter 1 or 2\n");
}
} while (choice != 1 && choice != 2);

printf("input your temperature:\n");
scanf("%d", &temp);

if (choice == 1)
{
cel = 5 * (temp - 32) / 9;
printf("%d degree Fahrenheit = %d degree Celsius\n", temp, cel);
}
else
{
fah = (9 * temp / 5) + 32;
printf("%d degree celsius = %d degree Fahrenhiet\n", temp, fah);
}

return (0);

}
