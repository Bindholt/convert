#include <stdio.h>
#include "convert.h"
#include "temperature/temperature.h"
#include "time/time.h"
#include "planetary_days/planetary_days.h"

int main() {
    //vis velkomst
    display_intro();

    //vis menu
    display_menu();

    //tag imod valg
    char choice = get_choice();

    switch (choice)
    {
        case 't':
            temperature_main();
            break;
        case 'f':
            time_main();
            break;
        case 'p':
            planetary_days_main();
            break;
        case 'x':
            printf("You chose to exit. Goodbye!\n");
            return 0;
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    //hvis temperatur (t) omregning er valgt
      //gå til temperatur omregning

    //hvis exit (x) er valgt
      //exit
}