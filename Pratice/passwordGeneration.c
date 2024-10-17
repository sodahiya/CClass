#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    char numbers[] = "0123456789";
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char symbols[] = "!@#$^&*?";

    srand(time(NULL));
    char pass[8];
    pass[0] = LETTER[rand()%26];
    pass[1] = numbers[rand()%10];
    pass[2] = numbers[rand()%26];
    pass[3] = symbols[rand()%8];

    for(int i = 4;i<8;i++){
        pass[i] = letter[rand()%26];
    }

    printf("Password is: %s",pass);
}