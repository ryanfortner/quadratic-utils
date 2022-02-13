#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getFactoredForm(int argc, char **argv) {
    if(argc<6) {
        fprintf(stderr, "Error: you forgot an a, b, and c value.\n");
    } else if(argc==6) {
        double a=strtod(argv[3], NULL);
        double b=strtod(argv[4], NULL);
        double c=strtod(argv[5], NULL);
        double d;
        
        printf("ok, I got 'a = %f', 'b = %f', 'c = %f'. continuing.\n", a, b, c);

        // complete the b^2-4ac of the quadratic formula first
        d = b * b - 4 * a * c;

        if (a == 1) {
            if (d < 0) {
                printf("factored form: y = (x + %.3f%+.3fi)(x + %.3f%+.3fi)\n", -(-b/(2*a),sqrt(-d)/(2*a)), -(-b/(2*a),-sqrt(-d)/(2*a)));
                return 0;
            } else if(d == 0) {
                printf("factored form: y = (x + %.3f)(x + %.3f)\n", -(-b / (2 * a)), -(-b / (2 * a)));
                return 0;
            } else {
                printf("factored form: y = (x + %.3f)(x + %.3f)\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (d * a));
            }
        }
    } else {
        fprintf(stderr, "Error: operation not supported yet.\n");
    }
    return 0;
}