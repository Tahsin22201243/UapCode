#include <stdio.h>

int main() {
    int amount, notes[8] = {0};
    printf("Enter amount: ");
    scanf("%d", &amount);

    notes[0] = amount / 500;
    amount = amount % 500;

    notes[1] = amount / 100;
    amount = amount % 100;

    notes[2] = amount / 50;
    amount = amount % 50;
    notes[3] = amount / 20;
    amount = amount % 20;

    notes[4] = amount / 10;
    amount = amount % 10;

    notes[5] = amount / 5;
    amount = amount % 5;

    notes[6] = amount / 2;
    amount = amount % 2;

    notes[7] = amount;

    printf("Minimum number of notes :\n");
    printf("Tk. 500: %d\n", notes[0]);
    printf("Tk. 100: %d\n", notes[1]);
    printf("Tk. 50: %d\n", notes[2]);
    printf("Tk. 20: %d\n", notes[3]);
    printf("Tk. 10: %d\n", notes[4]);
    printf("Tk. 5: %d\n", notes[5]);
    printf("Tk. 2: %d\n", notes[6]);
    printf("Tk. 1: %d\n", notes[7]);

    return 0;
}
