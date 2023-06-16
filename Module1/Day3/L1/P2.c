#include <stdio.h>

void print_bits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31;

    for (i = 0; i < 32; i++) {
        unsigned int bit = (num & mask) >> 31;
        printf("%u", bit);
        
        num <<= 1; 
    }

    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    print_bits(num);

return 0;
}