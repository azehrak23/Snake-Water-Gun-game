/* WHEN NO ONE FRIEND IS THERE, COMPUTER IS THERE
COME AND ENJOY A NICE GAME WITH YOUR OWN MACHINE
THIS MINI PROJECT HAS BEEN CREATED FOR ENTERTAINMENT PURPOSES ONLY. WE HAVE USED IF-ELSE LOOP STATEMENTS IN THE CODE
SUBJECT: PPS (PROGRAMMING FOR PROBLEM SOLVING)
PROJECT CREATORS: PIYUSH AGARWAL (RA2111047010152) & ANAM ZEHRA KAMDAR (RA2111047010164)
B.TECH - AI C */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // s stands for snake
    // w stands for water
    // g stands for gun
    // Cases covered:
    // ss
    // gg
    // ww
    if(you == comp)
    {
        return 0;
    }

    // Non-draw conditions
    // Cases covered:
    // sg
    // gs
    // sw 
    // ws
    // gw
    // wg
    

    if(you=='s' && comp=='g')
    {
        return -1;
    }
    else if(you=='g' && comp=='s')
    {
        return 1;
    }

    if(you=='s' && comp=='w')
    {
        return 1;
    }
    else if(you=='w' && comp=='s')
    {
        return -1;
    }

    if(you=='g' && comp=='w')
    {
        return -1;
    }
    else if(you=='w' && comp=='g')
    {
        return 1;
    }

}
int main()
{
    char you, comp;
    //generates a random number between 1 and 100
    srand(time(0));
    int number = rand()%100 + 1;
    /*This randon number input helps the computer to have different choices among snake,water,and gun
    instead of a solitary input given or assigned by user*/ 

    //if the random number lies within 1 to 33, comp chooses 's'(snake)
    if(number<=33)
    {
        comp = 's';
    }
    //if the random number lies within 33 to 66, comp chooses 'w'(water)
    else if(number>33 && number<=66)
    {
        comp='w';
    }
    //if the random number lies within 66 to 100, comp chooses 'g'(gun)
    else
    {
        comp='g';
    }
    
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);//function called
    printf("You chose %c and computer chose %c.\n", you, comp);
    if(result ==0)
    {
        printf("Game drawn!\n");
    }
    else if(result==1)
    {
        printf("Congratulations! You win!\n");
    }
    else
    {
        printf("Hard Luck! You Lose!\n");
    }//result displayed
    
    return 0;
}
