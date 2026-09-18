#include<cs50.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void){
int point[]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int score_1=0,score_2=0;
string player1=get_string("Player 1: ");
string player2=get_string("Player 2: ");
for(int i=0,n=strlen(player1);i<n;i++){
    if(isalpha(player1[i])){
int u=toupper(player1[i])-'A';

score_1 +=point[u];
}
}
for(int i=0,n=strlen(player2);i<n;i++){
     if(isalpha(player2[i])){
int u=toupper(player2[i])-'A';

score_2 +=point[u];
}
}
if(score_1>score_2){
    printf("Player 1 wins!\n");
}
else if(score_2>score_1){

    printf("Player 2 wins!\n");
}
else printf("Tie!\n");

}
