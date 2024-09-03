#include <stdio.h>
#include "convert.h"

void display_intro()
{
    printf("Welcome to [C]onvert!\n");
    printf("===================================\n");
}

void display_menu() 
{
    printf("Choose one of the following options:\n");
    printf("\tt) Temperature conversion\n");
    printf("\tf) Time conversions (frames running at 60FPS, seconds, miliseconds) \n");
    printf("\tp) Planetary days conversion\n");
    printf("\tx) Exit\n");
}

char get_choice()
{
    printf("Enter choice: ");
    char choice;
    scanf("%c", &choice);
    printf("You chose: %c\n", choice);
    return choice;
}