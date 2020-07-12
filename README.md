# Live-modifiable-Server

If the program is running, any code change in the file is directly reflected in the running program and the programmer dont't need to restart the program manually.


program flow :

1.Client program generates the socket and then call the new_client program.

2.Server connect to that socket and listen the request and then call the new_server.

3.new_client and new_server communicate to each other.

4.When client chooses refresh and exit service both client and server comes back to old one.

5.Meanwhile modifiable services will be updated and server can provide new service to client.

6.Choosing exit service option, stop the client and if we want to come out from server we have to do it manualy. 

