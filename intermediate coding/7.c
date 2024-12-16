//3) Best time to sell a commodity: Given an array of positive integers that represent the price of a commodity on a given day, return two integers which represent the best day to buy and later, sell the commodity. 

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of days: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Not enough data to trade.\n");
        return 0;
    }
    int prices[n];
    printf("Enter the prices for each day:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    int min_price = prices[0]; 
    int min_day = 0;         
    int max_profit = 0;     
    int buy_day = 0;          
    int sell_day = 0;         
    for (int day = 1; day < n; day++) {
        int profit = prices[day] - min_price;
        if (profit > max_profit) {
            max_profit = profit; 
            buy_day = min_day;
            sell_day = day;
        }
        if (prices[day] < min_price) {
            min_price = prices[day];
            min_day = day;
        }
    }
    if (max_profit == 0) {
        printf("No profitable transaction possible.\n");
    } else {
        printf("Best day to buy: %d, Best day to sell: %d\n", buy_day+1, sell_day+1);
    }
}