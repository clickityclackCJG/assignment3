/*
 * C program to Convert Decimal to Hexadecimal
 */
#include <stdio.h>

void hexadecimal(int decimal){
    int quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
    quotient = decimal;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        
        quotient = quotient / 16;

        if (remainder>=10)

        {
            remainder = remainder-10;
            hexadecimalnum[j] = remainder + 'A';
        } else {
            hexadecimalnum[j] = remainder + '0';

        }
        j++;
    }
 
    // display integer into character
    for (i = j; i >= 0; i--){
        printf("%c", hexadecimalnum[i]);
    }
}

int main()
{
    printf("Enter decimal number: ");
	int dec;
    scanf("%d", &dec);
    // make sure hexadeciaml values are A-F, not a-f
	hexadecimal(dec);
	return 0;	
}

//test again