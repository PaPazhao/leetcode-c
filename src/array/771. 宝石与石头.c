//https://leetcode.cn/problems/jewels-and-stones/description/
int getIndex(char c) {
    if(c >= 'a' && c <= 'z') {
        return c - 'a';
    } else if(c >= 'A' && c <= 'Z') {
        return c - 'A' + 26;
    } else {
        return -1;
    }
}
int numJewelsInStones(char* jewels, char* stones) {
    char map[26*2] = {0};
    do {
        // create map
        int i = 0;
        while(jewels[i]) {
            
            int index = getIndex(jewels[i]);
             
            if(index > -1) {
                map[index] = 1;
            }   
            i++;
        }
    } while(0);
    int num = 0;
    do {
        int i = 0;
    
        while(stones[i]) {
            int index = getIndex(stones[i]);
            num += map[index];
            i++;
        }
    } while(0);
    return num;
}
