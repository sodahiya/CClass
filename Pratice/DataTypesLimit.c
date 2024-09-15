#include <Stdio.h>
#include <limits.h> // For limits on integer types
#include <float.h> // For limits on floating-point types

int main(void) {
    printf("Variables of type char store values from %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Variables of type unsigned char store values from 0 to %u\n", UCHAR_MAX);
    printf("Size of character %d  byte \n", sizeof(char));
    printf("Variables of type short store values from %d to %d\n", SHRT_MIN,
           SHRT_MAX);
    printf("Size of short int %d  byte \n", sizeof(short));

    printf("Variables of type unsigned short store values from 0 to %u\n", USHRT_MAX);
    printf("Variables of type int store values from %d to %d\n", INT_MIN, INT_MAX);
    printf("Size of int %d  byte \n", sizeof(int));

    printf("Variables of type unsigned int store values from 0 to %u\n",
           UINT_MAX);
    printf("Variables of type long store values from %ld to %ld\n", LONG_MIN,
           LONG_MAX);
    printf("Size of long int %d  byte \n", sizeof(long int));

    printf("Variables of type unsigned long store values from 0 to %lu\n",
           ULONG_MAX);
    printf("Variables of type long long store values from %lld to %lld\n",
           LLONG_MIN, LLONG_MAX);
    printf("Size of long long int %d  byte \n", sizeof(long long int));
    printf("Variables of type unsigned long long store values from 0 to %llu\n", ULLONG_MAX);
    printf("\nThe size of the smallest positive non-zero value of type float is %.3e\n", FLT_MIN);
    printf("The size of the largest value of type float is %.3e\n", FLT_MAX);
       printf("Size of float %d  byte \n",sizeof(float));
    printf("The size of the smallest non-zero value of type double is %.3e\n", DBL_MIN);
    printf("The size of the largest value of type double is %.3e\n", DBL_MAX);
       printf("Size of double %d  byte \n",sizeof(double));

    printf("The size of the smallest non-zero value of type long double is %.3Le\n", LDBL_MIN);
    printf("The size of the largest value of type long double is %.3Le\n", LDBL_MAX);
       printf("Size of long double %d  byte \n",sizeof(long double));

    printf("\n Variables of type float provide %u decimal digits precision. \n", FLT_DIG);
    printf("Variables of type double provide %u decimal digits precision. \n", DBL_DIG);
    printf("Variables of type long double provide %u decimal digits precision. \n", LDBL_DIG);
    return 0;
} 
