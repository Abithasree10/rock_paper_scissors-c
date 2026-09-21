#include<stdio.h>
#include<stdlib.h>
int main(){
   int player1,player2;
   printf("1.ROCK\n");
   printf("2.PAPER\n");
   printf("3.SCISSORS\n");
printf("player 1,choose one: ");
scanf("%d", &player1);
system("cls");
   printf("1.ROCK\n");
   printf("2.PAPER\n");
   printf("3.SCISSORS\n");
printf("player 2,choose one: ");
scanf("%d", &player2);
system("cls");

    if(player1==player2) {
        printf("It's a draw");
    }
    else if((player1==1 && player2==3) ||
            (player1==2 && player2==1) ||
            (player1==3 && player2==2))
           {
               printf("PLAYER 1 YOU WIN!!");
            }
    else if((player1>=1 && player1<=3) && (player2>=1 && player2<=3))
          {
              printf("PLAYER 2 YOU WIN!!");
          }
    else {
        printf("Invalid input bruh");
    }

}
