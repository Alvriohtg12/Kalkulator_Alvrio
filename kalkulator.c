#include <stdio.h>

int main() 
{
    char operator;
    int A;
    int B;
    float C;
    printf("================================\n");
    printf("     KALKULATOR SEDERHANA       \n");
    printf("================================\n");
    printf("Pilih Operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Bilangan pertama = ");
    scanf("%i", &x);
    printf("Bilangan kedua = ");
    scanf("%i", &y);

    switch (operator) {
        case '+':
        C = A + B;
        printf("hasilnya : %f", A);
    
            break;
        case '-':
        C = A - B;
        printf("Hasilnya : %f", C);
            break;
        case '*':
        C = A * B;
        printf("Hasilnya : %f", C);
            break;
        case '/':
        C = A / B;
        printf("Hasilnya : %f", C);
            break;
        default:
            printf("Operator Salah.\n");
            return 1; 
        }
}

