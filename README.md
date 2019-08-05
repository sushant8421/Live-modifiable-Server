# Live-modifiable-Server
If the program is running, any code change in the executable file is directly reflected in the running program and the programmer does not need to restart the program manually


program flow :

1.Client program generates the socket and meanwhile call the new_client program.

2.Server connect to that socket and listen the request and meanwhile call the new_server.

3.new_client and new_server communicate to each other.

4.When client chooses refresh and exit service both client and server back to old one.

5.Meanwhile modifiable services will be updated and server can provide new service to client.

6.Choosing exit service stop the client and if we want to come out from server we have to do it manualy. 

