#ifndef PLANETARY_DAYS_H
#define PLANETARY_DAYS_H

int planetary_days_main();
void display_planetary_days_menu();
float earth_days_to_martian_sols(float earth_days);
float earth_days_to_jupiter_days(float earth_days);
float martian_sols_to_earth_days(float martian_sols);
float martian_sols_to_jupiter_days(float martian_sols);
float jupiter_days_to_earth_days(float jupiter_days);
float jupiter_days_to_martian_sols(float jupiter_days);
float get_planetary_days_value(char type[]);
char get_planetary_days_choice(char from_or_to[]);

#endif