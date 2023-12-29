void reverseString(char* s, int sSize) {
    int index = 0;
    while(index < (sSize + 1) / 2) {
        char tmp = s[index];
        s[index] = s[sSize - 1 - index];
        s[sSize - 1 - index] = tmp;
        index++;
    }
}
