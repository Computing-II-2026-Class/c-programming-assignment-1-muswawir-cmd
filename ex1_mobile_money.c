/*Name: SERUNKUUMA ABDUL MUSWAWIR*/
/*Student Number: 25/U/BIE/01421/PE*/

#include <stdio.h>

int main() {
    float amount, feePercent, feeAmount, total;

    printf("Enter amount to send: ");
    scanf("%f", &amount);

    printf("Enter transaction fee (%%): ");
    scanf("%f", &feePercent);

    feeAmount = (feePercent / 100) * amount;
    total = amount + feeAmount;

    printf("\nTransaction fee: %.2f UGX\n", feeAmount);
    printf("Total deducted: %.2f UGX\n", total);

    return 0;
}