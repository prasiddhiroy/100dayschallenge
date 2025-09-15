#include <stdio.h>
int main() 
{
    float costPrice, sellingPrice, profitLoss, profitLossPercent;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    profitLoss = sellingPrice - costPrice;

    if (profitLoss > 0) {
        profitLossPercent = (profitLoss / costPrice) * 100;
        printf("Profit: %.2f\n", profitLoss);
        printf("Profit Percentage: %f%%\n", profitLossPercent);
    }
    else if (profitLoss < 0) {
        profitLoss = -profitLoss; // Make it positive for loss
        profitLossPercent = (profitLoss / costPrice) * 100;
        printf("Loss: %.2f\n", profitLoss);
        printf("Loss Percentage: %f%%\n", profitLossPercent);
    }
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}