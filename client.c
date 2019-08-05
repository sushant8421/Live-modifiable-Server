#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <time.h>
#include <sys/time.h>


int main(){
    int  n=1;
    while(n == 1){
        int socket_id ;
        struct sockaddr_in client_addr;
        char buffer[10240];
        socket_id = socket(AF_INET, SOCK_STREAM, 0);

        client_addr.sin_family = AF_INET;
        client_addr.sin_addr.s_addr =  INADDR_ANY; 
        client_addr.sin_port = htons(8888);

    
        //printf("yadav\n") ;
        if(connect(socket_id, (struct sockaddr*)&client_addr, sizeof(client_addr)) == 0){
            //printf("sushant\n") ;
            system("gcc client_new.c -o client_new") ;
            system("./client_new") ;
            printf("enter 1.refresh 2.exit : ") ;
            scanf("%d" , &n) ;
            close(socket_id);
            //write(socket_id , &n, sizeof(int));
        }
        else
            break ;
    } 

    return 0 ;
}
