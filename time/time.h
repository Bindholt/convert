#ifndef TIME_H
#define TIME_H

int time_main();
void display_time_menu();
float frames_to_seconds(float frames);
float frames_to_miliseconds(float frames);
float seconds_to_frames(float seconds);
float seconds_to_miliseconds(float seconds);
float miliseconds_to_frames(float miliseconds);
float miliseconds_to_seconds(float miliseconds);
float get_time_value(char type[]);
char get_time_choice(char from_or_to[]);

#endif