unsigned char leap(int y){
    if ((y % 4 == 0 && y % 100 != 0 )|| y % 400 == 0) return 1;
    return 0;
}

int main (){
    unsigned char leap_year;
    unsigned year;
    
    leap_year = leap(year);
}