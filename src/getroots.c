#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getRoots(int argc, char **argv) {        
    if(argc < 5) {
        fprintf(stderr, "Error: you forgot an a, b, and c value!\n");
    } else if (argc == 5) {
        double a=strtod(argv[2], NULL);
        double b=strtod(argv[3], NULL);
        double c=strtod(argv[4], NULL);
        double d;

        printf("ok, I got 'a = %f', 'b = %f', 'c = %f'. continuing.\n", a, b, c);

        // complete the b^2-4ac of the quadratic formula first
        d = b * b - 4 * a * c;

        if (d < 0) {
            printf("two complex roots found.\n");
            printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
            printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));
        } else if (d == 0) {
            printf("one repeated root found.\n");
            printf("root: %.3f\n", -b / (2 * a));
        } else {
            printf("two real roots found.\n");
            printf("roots: %.3f , %.3f\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (d * a));
        }
    }
    return 0;
}