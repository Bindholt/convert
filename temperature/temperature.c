#include <stdio.h>
#include "temperature.h"

int temperature_main() {
    float fahr;
    float celsius;
    float kelvin;
    int keep_running = 1;

    while(keep_running) {
        display_temperature_menu();

        char convert_from = get_temperature_choice("from");
        if(convert_from == 'x'){
            keep_running = 0;
            break;
        }

        char convert_to = get_temperature_choice("to");
        if(convert_to == 'x'){
            keep_running = 0;
            break;
        }
        
        switch (convert_from)
        {
            case 'f':
                fahr = get_temperature_value("fahrenheit");
                switch (convert_to)
                {
                    case 'c':
                        celsius = fahrenheit_to_celsius(fahr);
                        printf("%.2f fahrenheit equals to %.2f celsius\n", fahr, celsius);
                        break;
                    case 'k':
                        kelvin = fahrenheit_to_kelvin(fahr);
                        printf("%.2f fahrenheit equals to %.2f kelvin\n", fahr, kelvin);
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                }
                break;
            case 'c':
                celsius = get_temperature_value("celsius");
                switch (convert_to)
                {
                    case 'f':
                        fahr = celsius_to_fahrenheit(celsius);
                        printf("%.2f celsius equals to %.2f fahrenheit\n", celsius, fahr);
                        break;
                    case 'k':
                        kelvin = celsius_to_kelvin(celsius);
                        printf("%.2f celsius equals to %.2f kelvin\n", celsius, kelvin);
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                }
                break;
            case 'k':
                kelvin = get_temperature_value("kelvin");
                switch (convert_to)
                {
                    case 'c':
                        celsius = kelvin_to_celsius(kelvin);
                        printf("%.2f kelvin equals to %.2f celsius\n", kelvin, celsius);
                        break;
                    case 'f':
                        fahr = kelvin_to_fahrenheit(kelvin);
                        printf("%.2f kelvin equals to %.2f fahrenheit\n", kelvin, fahr);
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
    
    
    return 0;
}

float fahrenheit_to_celsius(float fahr) 
{
    float celsius = (5.0 / 9.0) * (fahr - 32);
    return celsius;
}

float fahrenheit_to_kelvin(float fahr) 
{
    float kelvin = (5.0 / 9.0) * (fahr - 32) + 273.15;
    return kelvin;
}

float celsius_to_fahrenheit(float celsius) 
{
    float fahr = (9.0 / 5.0) * celsius + 32;
    return fahr;
}

float celsius_to_kelvin(float celsius) 
{
    float kelvin = celsius + 273.15;
    return kelvin;
}

float kelvin_to_celsius(float kelvin) 
{
    float celsius = kelvin - 273.15;
    return celsius;
}

float kelvin_to_fahrenheit(float kelvin) 
{
    float fahr = (9.0 / 5.0) * (kelvin - 273.15) + 32;
    return fahr;
}
