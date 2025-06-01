  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  
  int main() {
         int randomNumber, playerNumber, tryCount;
  
         srand(time(NULL));
         
         tryCount = 0;
  
         randomNumber = (rand() % 10) + 1;
         
         printf("Guess what number I am thinking of? (1-10) ");
         scanf("%d", &playerNumber);
  
         while (playerNumber != randomNumber) {
                 if (playerNumber > randomNumber) {
                         printf("Too high! ");
                 } else {
                         printf("Too low! ");
                 }
                 printf("Try again. ");
                 scanf("%d", &playerNumber);
                 tryCount = tryCount + 1;        
         }
  
         printf("You got it! Nice job! It only took you %d tries!\n", tryCount);
                         
         return 0;
}
