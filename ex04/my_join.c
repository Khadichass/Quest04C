#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
char* my_join(string_array* param_1, char* param_2)
{
    int leng = 0;
    for(int i = 0; i < param_1 -> size; i++) {
        leng = leng + strlen(param_1 -> array[i]);
    }
    leng = leng + (param_1 -> size - 1) * strlen(param_2);
    char* bob;
    bob = (char*)malloc(leng * sizeof(char));
    int index = 0;
    for(int i = 0; i < param_1 -> size; i++) {
        for(int j = 0; j < strlen(param_1 -> array[i]); j++) {
            bob[index] = param_1 -> array[i][j];
            index++;
        }
        if(i != param_1 -> size - 1) {
            for(int j = 0; j < strlen(param_2); j++) {
                bob[index] = param_2[j];
                index++;
            }
        }
    }
    return bob;
}