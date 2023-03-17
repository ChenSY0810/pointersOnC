char *find_char(const char *source, const char *chars){
    for (int i = 0; *(source + i) != '\0'; ++i){
        for (int j = 0; *(chars + j)!= '\0'; ++j){
            if (*(source + i) == *(chars + j)){
                return (source + i);
            }
        }
    }
}