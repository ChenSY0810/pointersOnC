// int static external
// char static none
// int auto none
// float static none
static char b = 2; // 全局 static, static声明intern(似乎无法是none
void y(){
    //a;  undeclared
    
}
int a = 1; //全局变量 static , extern , 在y 下 y不能使用
void x(){
    int c = 3;
    static float d = 4;
}



int main (){

    return 0;
}