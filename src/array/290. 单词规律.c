//https://leetcode.cn/problems/word-pattern/description/
struct Range {
    int left;
    int right;
};

struct Map {
    char c;
    unsigned int hash;
    struct Range range;
};

#include<stdbool.h>
bool checkWord(char *s, int mapStartIndex, int sStartIndex, int sEndIndex) {
    while(sStartIndex < sEndIndex) {
        if(s[mapStartIndex] != s[sStartIndex]) {
            return false;
        }
        sStartIndex++;
        mapStartIndex++;
    }
    return true;
}
unsigned int hashValue(char* s, int left, int right) {
    unsigned int hash = 0;
    int len = 0;
    while(left < right) {
        len++;
        hash += (s[left] - 'a' + 1) * 26 * (len);
        left++;
    }

    return hash;
}
 

bool wordPattern(char* pattern, char* s) {
    int patternIndex = 0;
    int left = 0, right = 0;
    struct Map patternMap[26];
    memset(patternMap, 0, sizeof(patternMap));

    while(pattern[patternIndex] != 0) {
        printf("[%d]check %c", patternIndex, pattern[patternIndex]);
        while(s[right] && s[right] != ' ') {
            right++;
        }
        if(left == right) {
            break;
        }
        char patternChar = pattern[patternIndex];
        struct Map *map = &patternMap[patternChar - 'a'];
        if(map->c == 0) {
            unsigned int hash =  hashValue(s, left, right);
            for(int i = 0; i < 26; i++) {
                if(patternMap[i].hash == hash && map->c != patternChar){
                    printf("add hash faild %d\n", hash);
                    return false;
                }
            }
            map->hash = hash;
            map->c = patternChar;
            map->range.left = left;
            map->range.right = right;
            
        } else {
            if( map->range.right - map->range.left != right - left) {
                return false;
            } 

            if(!checkWord(s, map->range.left, left, right)) {
                return false;
            } 
        }
        patternIndex++;
        if(s[right] == 0) {
            return pattern[patternIndex] == 0;
        }  

        left = right + 1;
        right = left;
    }
    return s[right] == 0; 
}
