
#include <stdio.h>

float calculateElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15)
               + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units.\n");
    } else {
        bill = calculateElectricBill(units);
        printf("Total electric bill = %.2f KES\n", bill);
    }

    return 0;
}
