static int hunger = 100; //intern
int hungry(){
    if (hunger < 80)   
        return 1;
    return 0;
}
void eat_hamburger(){
    hunger+= 10;
    //sth
}
void eat(){
    while (hungry()) eat_hamburger;
}
