#include<stdio.h>
#include<string.h>    //strlen
#include<stdlib.h>    //strlen
#include<sys/socket.h>
#include<arpa/inet.h> //inet_addr
#include<unistd.h>    //write
#include<pthread.h> //for threading , link with lpthread



int main(int argc , char *argv[]){
    int socket_desc , client_sock , c;
    struct sockaddr_in server , client;
    socket_desc = socket(AF_INET , SOCK_STREAM , 0);

    if (socket_desc == -1)
        printf("Could not create socket");
    
     
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons( 8888 );
     
    //Bind
    if( bind(socket_desc,(struct sockaddr *)&server , sizeof(server)) < 0){
        //print the error message
       // perror("bind failed. Error");
        return 1;
    }
     
    //Listen
    listen(socket_desc , 6);
     
    //Accept and incoming connection
    puts("Waiting for incoming connections...");
    c = sizeof(struct sockaddr_in); 
  
    while(1){
        if( (client_sock = accept(socket_desc, (struct sockaddr *)&client, (socklen_t*)&c)) ){ 
            system("gcc server_new.c -o server_new -pthread") ;
            system("./server_new") ;
        }
    }

    return 0 ;
}
