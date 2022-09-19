#include <stdio.h>
#include <stdbool.h> //C99

int main(int argc, char const *argv[])
{

    //for (int i = 0; i < 5; i++) {
    //    printf("Szia Ura %i\n", i);
    //}

    //printf("Give me a number: ");
    //int num; 
    //scanf("%i", &num);
    //if (num < 0)
    //{
    //    num *= (-1);
    //}
    //printf("Absolute value: %i \n", num);







    //Operator
    //Ternary/Elvis ?:
    //stmt ? stmt if true : stmt if false
    // % mod

    //printf("%i is %s \n", num, num % 2 == 0 ? "even":"odd");
    //if (num % 2 == 0)
    //{
    //    printf("%i is still even\n", num);
    //}
    //else 
    //{
    //    printf("%i is still odd\n", num);
    //}

    //printf("Absolute value of %i: %i\n", num, num < 0 ? -1*num:num);
    





    //printf("How many times? ");
    //int sz;
    //scanf("%i", &sz);
    
    //for (int i = 0; i < sz; i++)
    //{
    //    printf("Szia Uram! (%i.)\n", i+1);
    //}
    //int i = 0;
    //do {
    //    printf("Szia Uram! (%i)\n", i+1);
    //    i++;
    //} while (i < sz);
    //Program sufficiently polite


    //int number;
    //bool ok;
    //do
    //{
    //    ok = true;
    //    printf("Gimme a number: ");
    //    if (scanf("%i", &number) != 1)
    //    {
    //        ok = false;
    //        printf("\n*disappointed takács noises*\n");
    //        //clear input buffer
    //        while (getchar() != '\n')
    //        {
    //            //Do nothing
    //        }
    //        
    //    }
    //    
    //} while (!ok);
    //
    //printf("Your number is %i.\n", number);
    //



    //SZÁMOLÓGÉP
    double a = 0.0;
    double b = 0.0;
    char op = ' ';
    double result = 0.0;

    //while(true) {
        printf("\nÍrd be a műveletet: ");
        scanf("%lf %c %lf", &a, &op, &b);
        printf("%lf %c %lf", a, op, b);
        switch(op)
        {
            case '+':
                result = a + b;
                printf(" = %lf\n", result);
                break;
            case '-':
                result = a - b;
                printf(" = %lf\n", result);
                break;
            case '*': //fallthrough
            case 'x':
                result = a * b;
                printf(" = %lf\n", result);
                break;
            case '/':
                if (b == 0) 
                {
                    printf(" = ...\nERROR\nDivision by 0\n");
                    return -1;
                }
                else {
                    result = a / b;
                    printf(" = %lf\n", result);
                }
                break;
            default:
                printf(" = ... \nERROR\nOperator %c is not defined!\n", op);
                return -1;
        }

    //}


    return 0;
}