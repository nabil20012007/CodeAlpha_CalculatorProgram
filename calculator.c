/*
 * ============================================================================
 *  CodeAlpha C Programming Internship - Task 1 : Calculator Program
 * ============================================================================
 *  Operations : Addition (+) | Subtraction (-) | Multiplication (*) | Division (/)
 *  Concepts   : switch-case, functions, input validation
 *  Usage      : type an expression such as  12.5 * 4  and press Enter.
 *               Type  q  to quit.
 * ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

/* Selects the operation with a switch-case. Returns 1 on success, 0 on error. */
static int calculate(double a, char op, double b, double *result) {
    switch (op) {
        case '+': *result = a + b; return 1;
        case '-': *result = a - b; return 1;
        case '*': *result = a * b; return 1;
        case '/':
            if (b == 0) { puts("  Error: division by zero is undefined."); return 0; }
            *result = a / b;
            return 1;
        default:
            printf("  Error: unsupported operator '%c'. Use + - * /\n", op);
            return 0;
    }
}

int main(void) {
    char line[256], op, extra;
    double a, b, result;

    puts("============= CODEALPHA CALCULATOR =============");
    puts("Enter an expression such as  12.5 * 4   (q to quit)");

    for (;;) {
        printf("\n> ");
        fflush(stdout);
        if (!fgets(line, sizeof line, stdin) || line[0] == 'q' || line[0] == 'Q') break;

        if (sscanf(line, "%lf %c %lf %c", &a, &op, &b, &extra) != 3)
            puts("  Invalid input. Format: <number> <operator> <number>");
        else if (calculate(a, op, b, &result))
            printf("  %.10g %c %.10g = %.10g\n", a, op, b, result);
    }
    puts("\nGoodbye!");
    puts("\nThank you for using my calculator!");
    puts("\nKind regards to CodeAlpha!");
    return EXIT_SUCCESS;
}
