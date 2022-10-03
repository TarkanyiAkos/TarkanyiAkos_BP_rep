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
            break;
        case OUT:
            phone_bill += 60*call_time;
            break;
        case F:
            phone_bill += 100*call_time;
            break;
        default: printf("._.\n"); return(-1);
    }
    printf("Your phone bill: %i\n", phone_bill);

}