#include <stdio.h>
#include <ctype.h>
#include "planetary_days.h"

void display_planetary_days_menu() {
    printf("Planetary days:\n");
    printf("You have the following options to choose from:\n");
    printf("\te) Earth days\n");
    printf("\tm) Martian sols\n");
    printf("\tj) Jupiter days\n");
    printf("\tx) Exit\n");
}

float get_planetary_days_value(char type[])
{
    char message[100];
    sprintf(message, "Enter time in %s: ", type);

    printf("%s", message);
    float value;
    scanf(" %f", &value);
    printf("You entered: %.2f\n", value);
    return value;
}

char get_planetary_days_choice(char from_or_to[])
{
    char enter_msg[100];
    char choice;

    while(1) {
        sprintf(enter_msg, "Enter what you want to convert %s: ", from_or_to);
        printf("%s", enter_msg);
        
        scanf(" %c", &choice);

        choice = tolower(choice);
        if(choice == 'e' || choice == 'm' || choice == 'j' || choice == 'x') {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }

    char message[100];
    if(choice == 'x') {
        sprintf(message, "You chose to exit. Goodbye!\n");
    } else {
        sprintf(message, "You chose to convert %s: %c\n", from_or_to, choice);
    }
    
    printf("%s", message);
    return choice;
}

