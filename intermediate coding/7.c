//3) Best time to sell a commodity: Given an array of positive integers that represent the price of a commodity on a given day, return two integers which represent the best day to buy and later, sell the commodity. 

#include <stdio.h>
int main() {
    int n;
    // Prompt the user to enter the number of days
    printf("Enter the number of days: ");
    scanf("%d", &n);
    // Check if there are enough days to trade (at least 2)
    if (n < 2) {
        printf("Not enough data to trade.\n");
        return 0;
    }
    int prices[n];
    // Prompt the user to enter the prices for each day
    printf("Enter the prices for each day:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    int min_price = prices[0]; // Initial minimum price
    int min_day = 0;           // Day on which the minimum price was recorded
    int max_profit = 0;        // Variable to store the maximum profit
    int buy_day = 0;           // Day to buy
    int sell_day = 0;          // Day to sell
    // Loop through the prices to find the best buy and sell days
    for (int day = 1; day < n; day++) {
        int profit = prices[day] - min_price;
        // Update max_profit if the current profit is greater
        if (profit > max_profit) {
            max_profit = profit; 
            buy_day = min_day;  // Update buy day to the day when the minimum price was recorded
            sell_day = day;     // Update sell day to the current day
        }
        // Update the minimum price and its corresponding day
        if (prices[day] < min_price) {
            min_price = prices[day];
            min_day = day;
        }
    }
    // Output the result
    if (max_profit == 0) {
        printf("No profitable transaction possible.\n");
    } else {
        printf("Best day to buy: %d, Best day to sell: %d\n", buy_day + 1, sell_day + 1);
    }
}