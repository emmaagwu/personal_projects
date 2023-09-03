#include <stdio.h>

int main()
{
    char name[50];
    int choice, choice1;
    float cel, fah, temp;

    printf("TEMPERATURE CONVERTER\n\n\n");

    printf("What is your name?\n");
    scanf("%s", name);

    printf("%s, choose what you want to do:\n\n", name);
    do
    {
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
    scanf("%f", &temp);

    if (choice == 1)
    {
        cel = 5 * (temp - 32) / 9;
        printf("%.2f degree Fahrenheit = %.2f degree Celsius\n", temp, cel);
    }
    else 
    {
        fah = (9 * temp / 5) + 32;
        printf("%.2f degree celsius = %.2f degree fahrenhiet\n", temp, fah);
    }
    printf("enter [1] for another conversion\n");
    printf("enter [2] to exit\n");
    do
    {
    scanf("%d", &choice1);
    if (choice1 != 1 && choice1 != 2)
    {
	    printf("Invalid choice. Please enter 1 or 2\n");
    }
    } while(choice1 != 1 && choice1 != 2);
   if (choice1 == 2)
    {
	    break;
    }
    } while(choice1 == 1);    
    
    return (0);

}
