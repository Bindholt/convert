#include <stdio.h>
#include "planetary_days.h"

int planetary_days_main() {
    float earth_days;
    float martian_sols;
    float jupiter_days;
    int keep_running = 1;

    while(keep_running) {
        display_planetary_days_menu();

        char convert_from = get_planetary_days_choice("from");
        if(convert_from == 'x') {
            keep_running = 0;
            break;
        } 

        char convert_to = get_planetary_days_choice("to");
        if(convert_to == 'x') {
            keep_running = 0;
            break;
        } 

        switch (convert_from)
        {
            case 'e':
                earth_days = get_planetary_days_value("earth days");
                switch (convert_to)
                {
                    case 'm':
                        martian_sols = earth_days_to_martian_sols(earth_days);
                        printf("%.2f earth days equals to %.2f martian sols\n", earth_days, martian_sols);
                        break;
                    case 'j':
                        jupiter_days = earth_days_to_jupiter_days(earth_days);
                        printf("%.2f earth days equals to %.2f jupiter days\n", earth_days, jupiter_days);
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                }
                break;
            case 'm':
                martian_sols = get_planetary_days_value("martian sols");
                switch (convert_to)
                {
                    case 'e':
                        earth_days = martian_sols_to_earth_days(martian_sols);
                        printf("%.2f martian sols equals to %.2f earth days\n", martian_sols, earth_days);
                        break;
                    case 'j':
                        jupiter_days = martian_sols_to_jupiter_days(martian_sols);
                        printf("%.2f martian sols equals to %.2f jupiter days\n", martian_sols, jupiter_days);
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                }
                break;
            case 'j':
                jupiter_days = get_planetary_days_value("jupiter days");
                switch (convert_to)
                {
                    case 'e':
                        earth_days = jupiter_days_to_earth_days(jupiter_days);
                        printf("%.2f jupiter days equals to %.2f earth days\n", jupiter_days, earth_days);
                        break;
                    case 'm':
                        martian_sols = jupiter_days_to_martian_sols(jupiter_days);
                        printf("%.2f jupiter days equals to %.2f martian sols\n", jupiter_days, martian_sols);
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                }
                break;
            case 'x':
                keep_running = 0;
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}

float earth_days_to_martian_sols(float earth_days) 
{
    float martian_sols = earth_days * 1.0274912517;
    return martian_sols;
}

float earth_days_to_jupiter_days(float earth_days) 
{
    float jupiter_days = earth_days * 2.417;
    return jupiter_days;
}

float martian_sols_to_earth_days(float martian_sols) 
{
    float earth_days = martian_sols / 1.0274912517;
    return earth_days;
}

float martian_sols_to_jupiter_days(float martian_sols) 
{
    float jupiter_days = martian_sols * 2.3560209424;
    return jupiter_days;
}

float jupiter_days_to_earth_days(float jupiter_days) 
{
    float earth_days = jupiter_days / 2.417;
    return earth_days;
}

float jupiter_days_to_martian_sols(float jupiter_days) 
{
    float martian_sols = jupiter_days / 2.3560209424;
    return martian_sols;
}