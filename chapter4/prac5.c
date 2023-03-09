#include <stdio.h>
#include <string.h>

int main (){
    char a[128] = "";
    char b[128] = "";
    while (gets(a)){
        if (strcmp(a,b) == 0){
            printf("\n\n%s\n\n", a);
            do{
                strcpy(b,a);
                for (int i =0; i <128; ++i){
                    a[i] = '\0';
                }
                gets(a);
            }while (strcmp(a,b) == 0);
            continue;
        }
        strcpy(b, a);
        for (int i =0; i <128; ++i){
            a[i] = '\0';
        }
    }
    return 0;
}