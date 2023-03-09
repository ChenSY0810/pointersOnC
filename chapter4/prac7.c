void deblank(char string[]){
    int i = 0;
    for (i = 0; string[i] != '\0'; ++i){
        while (string[i] == ' ' && string[i] == string[i+1]){
            for (int j = i; string[j] != '\0'; ++j){
                string[j] = string[j+1];
            }
        }
    }
}