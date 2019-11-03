import serial
import socket

#ser.readline()
#ser.close()
#
# serversocket = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
#
#
# host = '192.168.10.163'
# port = 9999
#
# serversocket.bind((host,port))
#
# serversocket.listen(5)
# clientsocket,addr = serversocket.accept()
# print("Got a connection from %s" % str(addr))

if __name__ == "__main__":
    #ser = serial.Serial('/dev/ttyACM0')
#ser.readline()
#ser.close()
    ser = serial.Serial('/dev/ttyACM1',115200)

    serversocket = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    host = '192.168.10.168'
    port = 9999

    serversocket.bind((host,port))

    serversocket.listen(5)
    clientsocket,addr = serversocket.accept()
    print("Got a connection from %s" % str(addr))

    while True:
        message = clientsocket.recv(8192);
        decoded_message = message.decode('utf-8')
        print(decoded_message)
        if "101" in decoded_message:
            print("works")
            ser.write(message)
        elif "111" in decoded_message:
            print("111 works")
            ser.write(message)
        

