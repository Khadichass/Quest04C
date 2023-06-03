#include <stdio.h>
 #include <stdlib.h>
 int* my_range(int param_1, int param_2) {
     int* lol;
     lol = (int*)malloc((param_2 - param_1) * sizeof(int));
     int index = 0;
     for(int i = param_1; i < param_2; i++) {
         lol[index] = i;
         index++;
     }
     return lol;
 }