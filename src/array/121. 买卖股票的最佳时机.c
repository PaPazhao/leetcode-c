//https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/description/?envType=study-plan-v2&envId=top-interview-150
int maxProfit(int* prices, int pricesSize) {
    int *max = malloc(sizeof(int) * pricesSize);
    int index = pricesSize - 1;
    int currentMax = -1;
    while(index >= 0) {
        if(prices[index] > currentMax) {
            currentMax = prices[index];
        }
        max[index--] = currentMax;
    }
    currentMax = 0;
    index = 1;
    while(index < pricesSize) {
        int price = max[index] - prices[index - 1];
        if(price > currentMax) {
            currentMax  = price;
        }
        index++;
    }
    return currentMax;
}
