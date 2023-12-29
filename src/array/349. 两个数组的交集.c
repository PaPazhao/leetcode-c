//https://leetcode.cn/problems/intersection-of-two-arrays/submissions/
#define LEN ((1001 + 7)  / 8)
void setFlag(unsigned char *flagArray, unsigned int index) {
    unsigned int byteIndex = index / 8;
    unsigned int bitIndex = index % 8;
    flagArray[byteIndex] |= (1 << bitIndex);
}
#include<stdio.h>
int ret[1001];
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    unsigned char flag1[LEN] = {0};
    unsigned char flag2[LEN] = {0};
    memset(flag1, 0, LEN);
    memset(flag2, 0, LEN);
    
    for(int i = 0; i < nums1Size; i++) { 
        setFlag(flag1, nums1[i]);
    }  
    
    for(int i = 0; i < nums2Size; i++) { 
        setFlag(flag2, nums2[i]);
    }
    
    for(int i = 0; i < LEN; i++) {
        flag1[i] = flag1[i] & flag2[i];
    }
 
    int index = 0;
    for(int i = 0; i < LEN; i++) {
        for(int j = 0; j < 8; j++) {
            if(flag1[i] & ( 1 << j)) {
                ret[index] = i * 8 + j;
                index++;
            }
        }
    }

    *returnSize = index;
    return ret;
}
