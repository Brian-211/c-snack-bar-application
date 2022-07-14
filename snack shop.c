#include <stdio.h>
#include <stdlib.h>

int menu();
int main()
{
    printf("Hello customer welcome to your snack shop!\n");
    menu();
    return 0;

}
    int menu()
    {
    int item;
    printf("1.humburger - ksh 300\n");
    printf("2.french fries - ksh 150\n");
    printf("3.Hot dog - ksh 90\n");
    printf("4.beefsmokie - ksh40\n");
    printf("5.coffee - ksh 70\n");
    printf("6.milkshake - ksh 150\n");
    printf("enter item number:");
    scanf("%d",&item);
    if(item>0 && item<=6)
    {
        printf("items added to cart\n");

    }
    else
        {
    printf("invalid\n");
    menu();
    }


    return item;