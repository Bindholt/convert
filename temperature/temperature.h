#ifndef TEMPERATURE_H
#define TEMPERATURE_H

int temperature_main();
void display_temperature_menu();
float fahrenheit_to_celsius(float fahr);
float celsius_to_fahrenheit(float celsius);
float fahrenheit_to_kelvin(float fahr);
float celsius_to_kelvin(float celsius);
float kelvin_to_celsius(float kelvin);
float kelvin_to_fahrenheit(float kelvin);
float get_temperature_value(char type[]);
char get_temperature_choice(char from_or_to[]);


#endif