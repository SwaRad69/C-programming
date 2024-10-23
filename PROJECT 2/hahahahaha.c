#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int player,computer;
    char playAgain= 'y';
    
    while (playAgain=='y')
    {
        printf("Enter a number between 0,1 and 2 \nwhere \n0--> represents rock \n1--> represents paper \n2--> represent scissors\n"); 
    scanf("%d",&player);
       if (player < 0 || player > 2) {
            printf("Invalid input. Please try again.\n");
            continue;
       }
    
    srand(time(NULL));
    int computer = rand() % 3 ;
    if (computer==0)
    {
        printf("Comp chose rock \n");
    }
    else if (computer==1)
    {
        printf("Comp chose paper \n");
    }
    else
    {
        printf("comp chooses scissors \n");
    }
    if (player==0)
    {
        printf("You chose rock \n");
    }
    else if (player==1)
    {
        printf("You chose paper \n");
    }
    else
    {
        printf("You chooses scissors \n");
    }
    
    
    
    if ((computer==0&&player==1)||(computer==2&&player==0||(computer==1&&player==2)))
    {
        printf("Player wins \n");
    }
    else if ((computer == 0 && player == 2) || (computer == 1 && player == 0) || (computer == 2 && player == 1)) 
    {
        
        printf("Computer wins \n");
    }
    else{
        printf("It's a tie \n");
 
    }

    printf("Do you want to play again? (y/n)\n");
        scanf(" %c", &playAgain);
    
    
    
    }
    
    
   
    return 0;
}