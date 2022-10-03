#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum type
{
    IN = 1,
    OUT,
    F
};

int main() {
    bool ok;
    enum type call_type;
    int call_time;
    int tomb[] = {0, 0, 0, 0};
    for (size_t i = 0; i < 5; i++)
    {
        
    do {
        ok = true;
        printf("Call type:\n1) IN\n2) OUT\n3) F\n>");
        if (scanf("%i", &call_type) != 1) {
            ok = false;
            printf("NOT GUD! BAD!\n");
            while(getchar() != '\n');
        }
    } while (!ok);
    printf("%i\n", call_type);

    do {
        ok = true;
        printf("Call time (minutes):\n>");
        if (scanf("%i", &call_time) != 1) {
            ok = false;
            printf("NOT GUD! BAD!\n");
            while(getchar() != '\n');
        }
    } while (!ok);
    printf("%i\n", call_time);

    int phone_bill = 0;
    switch (call_type) {
        case IN:
            phone_bill += 40*call_time;
            tomb[0]++;
            break;
        case OUT:
            phone_bill += 60*call_time;
            tomb[1]++;
            break;
        case F:
            phone_bill += 100*call_time;
            tomb[2]++;
            break;
        default: printf("._.\n"); tomb[3]++; continue;
    }
    printf("Your phone bill: %i\n", phone_bill);
    printf("\n___TOTAL:___\nIN:  %i\nOUT: %i\nF:   %i\n", tomb[0], tomb[1], tomb[2]);
    if(tomb[3] > 0) {
        printf("ERRORS: %i\n", tomb[3]);

    }
    printf("\n");
    }
    


}