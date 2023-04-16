#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  

char* randomPasswordGeneration(int N, char* password)
{
   
    int i = 0;
  
    int randomizer = 0;
  
    srand((unsigned int)(time(NULL)));
    char numbers[] = "0123456789";
  
   
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
  
   
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
  
    
    char symbols[] = "!@#$^&*?";
 
    randomizer = rand() % 4;
  
 
    for (i = 0; i < N; i++) {
  
        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
        }
        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
        }
    }
   return password;
}
int main()
{
    int N = 10;
    char* pass;
   pass = malloc(sizeof(char) * N);
   pass = randomPasswordGeneration(N, pass);
   printf("%s\n", pass);
   free(pass);
    return 0;
}
