#include <stdio.h>

int main() {
    float array[6];
    int i = 0;

    array[0] = 4.4734;
    array[1] = 8.8957;
    array[2] = 5.2353;
    array[3] = 8.9566;
    array[4] = 7.2535;
    array[5] = 2.9857;

    float moltiplicazione = array[0];

    for(i=1; i<6; i++) {
        moltiplicazione *= array[i];
    }

    printf("Moltiplicazione = %.2f\n", moltiplicazione);

    return 0;
}