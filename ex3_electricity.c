/*Name : SERUNKUUMA ABDUL MUSWAWIR*/
/*Reg number : 25/U/BIE/01421/PE*/

#include <stdio.h>

int main() {
    float units, costPerUnit, totalBill;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    printf("Enter cost per unit: ");
    scanf("%f", &costPerUnit);

    totalBill = units * costPerUnit;

    printf("\nTotal bill: %.2f UGX\n", totalBill);

    return 0;
}