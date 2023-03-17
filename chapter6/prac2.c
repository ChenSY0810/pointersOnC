int del_substr(char *str, const char *substr){
    char *tmp = str;
    int flag = 0;
    for (int i = 0; *(str + i) != '\0'; ++i){
        flag = 1;
        for (int j = 0; *(substr + j) != '\0'; ++j){
            if (*(str + i + j) == '\0' || *(str + i + j) != *(substr + j)){
                flag = 0;
                break;
            }
        }
        if (flag){
            for (int j = 0; *(substr + j) != '\0'; ++j){
                if (*(str + i + j) == '\0'){
                    str = tmp;
                    return 0;
                }
                *(str + i + j) = *(substr + j);
            }
            return 1;
        }
    }
}