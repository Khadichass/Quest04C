#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* my_spaceship(char* param_1)
{
    int x = 0, y = 0;
    char *dir = "up";
    
    for(int i = 0; i < strlen(param_1); i++) {
        if(param_1[i] == 'R') {
            if(*dir == 'u') {
                dir = strdup("right");
            } else if(*dir == 'r') {
                dir = strdup("down");
            } else if(*dir == 'd') {
                dir = strdup("left");
            } else if(*dir == 'l') {
                dir = strdup("up");
            }
        }
        if(param_1[i] == 'L') {
            if(*dir == 'u') {
                dir = strdup("left");
            } else if(*dir == 'l') {
                dir = strdup("down");
            } else if(*dir == 'd') {
                dir = strdup("right");
            } else if(*dir == 'r') {
                dir = strdup("up");
            }
        }
        if(param_1[i] == 'A') {
            if(*dir == 'u') {
                y--;
            }
            if(*dir == 'l') {
                x--;
            }
            if(*dir == 'd') {
                y++;
            }
            if(*dir == 'r') {
                x++;
            }
        }
    }
    char *bob;
    bob = (char*)malloc(40 * sizeof(char));
    
    snprintf(bob, 40, "{x: %d, y: %d, direction: '%s'}", x, y, dir);
    
    return bob;
}