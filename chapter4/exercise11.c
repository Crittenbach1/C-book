#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>


#define MAXOP 100
#define NUMBER '0'

#define MAXVAL 100
#define BUFSIZE 100

int getop(char s[]);
void push(double f);
double pop(void);
int getch(void);
void ungetch(int c);
double peek(double s[]);
void swap(void); 
void clearStack(void);
void ungets(char s[]);

int sp = 0;
double val[MAXVAL];

int singleBuffer;
int bufferFull = 0;

/* Reverse Polish calculator */
int main(void)
{
    int type;
    double op2;
    char s[MAXOP];
    double i = 0.0;
    double j = 0.0;
    double k = 0.0;
    double mostRecent = 0.0;
    
    
    printf("%s\n", "type ? to print top element of stack");
    printf("%s\n", "type D to duplicate top element of stack");
    printf("%s\n", "type ~ to swap the top 2 elements of the stack");
    printf("%s\n", "type C to clear the stack");
    printf("%s\n", "type s for sin");
    printf("%s\n", "type e for exp");
    printf("%s\n", "type p for pow");
    printf("%s\n", "usable variable names: i, j, k");

    while ((type = getop(s)) != EOF) {
        
        
        switch (type) {
        case NUMBER:
            push(atof(s));
            break;

        case '+':
            push(pop() + pop());
            break;

        case '*':
            push(pop() * pop());
            break;

        case '-':
            op2 = pop();
            push(pop() - op2);
            break;

        case '/':
            op2 = pop();

            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: zero divisor\n");

            break;
        
        case '%':
            op2 = pop();
            // % for ints
            /*
            if (op2 != 0.0) {
                push((int)pop() % (int)op2);
            } else {
                printf("error: zero modulo divisor\n");
            }
            */
            //% for floating point
            if (op2 != 0.0) {
                push(fmod(pop(), op2));
            } else {
                printf("error: zero modulo divisor\n");
            }
            
            break;
            
        case '?':
            printf("%g\n", peek(val));
            break;
            
        case  'D':
            if (sp > 0)
                push(peek(val));
            else
                printf("error: stack empty\n");
            break;
            
        case '~': 
            if (sp > 1) {
                swap();
            }
            break;
        
        case 'C':
            clearStack();
            break;
            
        case 's':
            if (sp >= 1)
                push(sin(pop()));
            else
                printf("error: sin requires one operand\n");
            break;
        
        case 'e':
            if (sp >= 1)
                push(exp(pop()));
            else
                printf("error: exp requires one operand\n");
            break;
        
        case 'p':
            if (sp >= 2) {
                op2 = pop();         
                push(pow(pop(), op2)); 
            } else {
                printf("error: pow requires two operands\n");
            }
            break;
            
        case 'I':
            if (sp >= 1)
                i = pop();
            else
                printf("error: no value to assign to i\n");
            break;
        
        case 'J':
            if (sp >= 1)
                j = pop();
            else
                printf("error: no value to assign to j\n");
            break;
        
        case 'K':
            if (sp >= 1)
                k = pop();
            else
                printf("error: no value to assign to k\n");
            break;
        
        case 'i':
            push(i);
            break;
        
        case 'j':
            push(j);
            break;
        
        case 'k':
            push(k);
            break;
            
        case 'R':
            push(mostRecent);
            break;
            
        case '\n':
        if (sp > 0) {
            mostRecent = pop();
             printf("\t%.8g\n", mostRecent);
        }
        break;

        default:
            printf("error: unknown command %s\n", s);
            break;
        }
    }

    return 0;
}

void push(double f)
{
    if (sp < MAXVAL) {
        val[sp++] = f;
    } else {
        printf("error: stack full, can't push %g\n", f);
    }
}

double pop(void)
{
    if (sp > 0) {
        return val[--sp];
    }

    printf("error: stack empty\n");
    return 0.0;
}

int getop(char s[])
{
    int i = 0;
    int c;
    int next;
    static int saved = 0;
    

    while (1) {
        if (saved) {
            c = saved;
            saved = 0;
        } else {
            c = getchar();
        }
    
        if (c != ' ' && c != '\t')
            break;
    }

s[0] = c;

    s[1] = '\0';

    if (c == '-') {
    
        next = getchar();
        

        if (!isdigit(next) && next != '.') {
            saved = next;
            return '-';
        }

        s[0] = '-';
        s[1] = c = next;
        i = 1;
    } else if (!isdigit(c) && c != '.') {
        return c;
    }

    /* Collect integer part. */
    if (isdigit(c)) {
        while (isdigit(s[++i] = c = getchar()))
            ;
    }

    /* Collect fractional part. */
    if (c == '.') {
        while (isdigit(s[++i] = c = getchar()))
            ;
    }

    s[i] = '\0';

    saved = c;

    return NUMBER;
}


double peek(double stack[])
{
    if (sp > 0) {
        return stack[sp - 1];
    }

    printf("error: stack empty\n");
    return 0.0;
}

void swap(void) { 
    double copy1 = val[sp - 1];
    double copy2 = val[sp - 2];
    val[sp - 1] = copy2;
    val[sp - 2] = copy1;
    
    return;
}

void clearStack(void) {
   sp = 0;
}
