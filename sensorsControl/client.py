import socket
from serial import Serial

if __name__ == "__main__":
    ser = Serial('/dev/ttyACM0', 9600)
    server_socket = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    import socket
    from serial import Serial

    if __name__ == "__main__":
        ser = Serial('/dev/ttyACM0', 9600)
        server_socket = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

        #ip address of the current pi($ ip addr)
        host = '192.168.10.163'
        port = 9999

        server_socket.connect((host,port))

        while True:
            variables = ser.readline()
            clean_variables = variables.decode("utf-8")
    #         print(variable.decode("utf-8"))
            server_socket.send(variables)
        #print("test")pi@raspberrypi:~/Desktop $





    #ip address of the current pi($ ip addr)
    host = '192.168.10.163'
    port = 9999

    server_socket.connect((host,port))

    while True:
        variables = ser.readline()
        clean_variables = variables.decode("utf-8")
#         print(variable.decode("utf-8"))
        server_socket.send(variables)
    #print("test")pi@raspberrypi:~/Desktop $

