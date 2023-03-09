#include <stdio.h>

void func(int precipitating, float temperature){
    if (precipitating){
        if (temperature < 60) printf("cold");
        else printf("warm");
    }else {
        if (temperature < 32) printf("snowing");
        else printf("raining");
    }
}