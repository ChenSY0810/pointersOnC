

int main (){
    int year;
    int leap_year = (year % 4)? 0: ((year % 100)? ((year % 400)? 0 : 1):0 );
    return 0;
}