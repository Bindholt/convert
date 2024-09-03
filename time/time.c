#include <stdio.h>
#include "time.h"

int time_main() {
    float frames;
    float seconds;
    float miliseconds;
    int keep_running = 1;

    while(keep_running) {
        display_time_menu();

        char convert_from = get_time_choice("from");
        if(convert_from == 'x') {
            keep_running = 0;
            break;
        } 

        char convert_to = get_time_choice("to");
        if(convert_to == 'x') {
            keep_running = 0;
            break;
        } 

        switch (convert_from)
        {
            case 'f':
                frames = get_time_value("frames");
                switch (convert_to)
                {
                    case 's':
                        seconds = frames_to_seconds(frames);
                        printf("%.2f frames equals to %.2f seconds\n", frames, seconds);
                        break;
                    case 'm':
                        miliseconds = frames_to_miliseconds(frames);
                        printf("%.2f frames equals to %.2f miliseconds\n", frames, miliseconds);
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                }
                break;
            case 's':
                seconds = get_time_value("seconds");
                switch (convert_to)
                {
                    case 'f':
                        frames = seconds_to_frames(seconds);
                        printf("%.2f seconds equals to %.2f frames\n", seconds, frames);
                        break;
                    case 'm':
                        miliseconds = seconds_to_miliseconds(seconds);
                        printf("%.2f seconds equals to %.2f miliseconds\n", seconds, miliseconds);
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                }
                break;
            case 'm':
                miliseconds = get_time_value("miliseconds");
                switch (convert_to)
                {
                    case 'f':
                        frames = miliseconds_to_frames(miliseconds);
                        printf("%.2f miliseconds equals to %.2f frames\n", miliseconds, frames);
                        break;
                    case 's':
                        seconds = miliseconds_to_seconds(miliseconds);
                        printf("%.2f miliseconds equals to %.2f seconds\n", miliseconds, seconds);
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

float frames_to_seconds(float frames) 
{
    float seconds = frames / 60;
    return seconds;
}

float frames_to_miliseconds(float frames) 
{
    float miliseconds = frames * 16.6666666667;
    return miliseconds;
}

float seconds_to_frames(float seconds) 
{
    float frames = seconds * 60;
    return frames;
}

float seconds_to_miliseconds(float seconds) 
{
    float miliseconds = seconds * 1000;
    return miliseconds;
}

float miliseconds_to_frames(float miliseconds) 
{
    float frames = miliseconds / 16.6666666667;
    return frames;
}

float miliseconds_to_seconds(float miliseconds) 
{
    float seconds = miliseconds / 1000;
    return seconds;
}