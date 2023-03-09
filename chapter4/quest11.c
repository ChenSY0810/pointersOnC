#include <stdio.h>
void cmp (int a, int b, int x, int y){
    scanf("%d %d %d %d", &a, &b, &x, &y);
    printf("%s",(x<y || a>=b)? "WRONG": "RIGHT");
}
int main (){
    int a,b,x,y;
    cmp(a,b,x,y);    
    return 0;
}