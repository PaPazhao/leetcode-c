//https://leetcode.cn/problems/number-of-1-bits/description/
typedef union Word {
    uint8_t byte[4];
    uint16_t halfWorld[2];
    uint32_t word;
} Word;
int hammingWeight(uint32_t n) {
    Word data;
    data.word = n;
    int total = 0;
    for(uint8_t i = 0; i < 4; i++) {
        uint8_t value = data.byte[i];
        if(value == 0) {
            continue;
        }
        for(uint8_t j = 0; j < 8; j++) {
            if(value & (1 << j)) {
                total++;
            }
        }
    }
    return total;
}
