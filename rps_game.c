//rock paper scissors game.
//by SUBHADIP DAS

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int rockpaperscissors(char you, char subhadip){
    if(you==subhadip){                  //for draw rr,pp,ss
        return 0;
    }                               //draw=0, win=1, lose=-1
    if(you=='p' && subhadip=='r'){          //for non-draw pr,rp,sp,ps,rs,sr 
        return 1;
    }
    else if(you=='r' && subhadip=='p'){
        return -1;
    }
    if(you=='s' && subhadip=='p'){
        return 1;
    }
    else if(you=='p' && subhadip=='s'){
        return -1;
    }
    if(you=='r' && subhadip=='s'){
        return 1;
    }
    else if(you=='r' && subhadip=='r'){
        return -1;
    }
    else{
        printf("WRONG ENTRY!!!\n");
        printf("Please Enter among 'p','r','s'\n");
        printf("Press 'Run'/ 's and tab key' to play again");
    }
}
int main()
{
    char you,subhadip;
    
    int number;
    srand(time(0));
    number=rand()%100+1;
    if(number<33){
        subhadip='r';
    }
    if(number>33&& number<67){
        subhadip='p';
    }
    else{
        subhadip='s';
    }
    //printf("%d\n",number);
    printf("Welcome to the rock-paper-scissors game ---made by SUBHADIP DAS.\n\n");
    printf("Enter 'r' for rock, 'p' for paper, 's' for scissors: ");
    scanf("%c",&you);
    
    printf("You chose %c and subhadip chose %c\n",you,subhadip);
    int result= rockpaperscissors(you,subhadip);
    if(result==0){
        printf("Game Draw!\n");
        printf("Press 'Run'/ 's and tab key' to play again.\n");
        printf("\n\n<<Game made by SUBHADIP DAS>>");
    }
    if(result==1){
        printf("Hurray!!\n");
        printf("You Won!\n");
        printf("Press 'Run'/ 's and tab key' to play again.\n");
        printf("\n\n<<Game made by SUBHADIP DAS>>");
    }
    if(result==-1){
        printf("You lost!\n");
        printf("Better Luck Next Time..\n");
        printf("Press 'Run'/ 's and tab key' to play again.\n");
        printf("\n\n<<Game made by SUBHADIP DAS>>");
    }
    return 0;
}
