#include<cs50.h>
#include<stdio.h>

int main(void){
    int cents;
    do{
        cents =get_int("change owed: ");

    }while(cents<0);
int coin=0;
while(cents){
if(cents>=25){
    coin ++;
    cents -=25;
}
else if(cents>=10){
    coin++;
    cents -=10;
}
else if(cents>=5){
    coin++;
    cents -=5;
}
else{
coin +=cents;
cents =0;

}
printf("%i\n", coin);

}


}
