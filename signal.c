#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int con;
void holaMundo(int signalNumber){

    if(signalNumber == 10){
        printf("Es la señal 10\n");
        con = 2;
    }else{
        printf("Es otra señal\n");
    }
}

void nomematas(int sig){
    printf("jajaja, no me matas\n");
}

int main(){
    signal(12, holaMundo); // cuando recibas la señal 12, se sobreescribe la instrucciones por el holaMundo
    signal(10, holaMundo);
    signal(2, nomematas);
    con = 1;
    while(con == 1){
        printf("Estoy trabajando\n");
        sleep(1);
    }
    printf("Nunca llega\n");
    return 0;
}