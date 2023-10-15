import sys, optparse
from socket import *

class Connection:

        MAX_CONNECTIONS:int = 3
        IP:str = '192.168.1.24'
        PORT:int = 9090
        VERBOSE:bool
        buff:str = ""
        sock:socket

        def __init__(self, verbose):
                try:
                        self.VERBOSE = verbose
                        self.sock = socket(AF_INET, SOCK_STREAM)

                        # 'bind' enlaza la dirección IP a el puerto especificado (otros procesos en el sistema no podrán usar esa dirección)
                        self.sock.bind((self.IP, self.PORT))

                        # Se pone a la escucha, e indica cantidad máxima de connexiones simultáneas a escuchar
                        self.sock.listen(self.MAX_CONNECTIONS)
                        
                        if self.VERBOSE: print(f"Enlazado a {self.IP}:{self.PORT} ...")
                except Exception as e:
                        print(e)

        # Manda datos
        def send_data(self, msg):
                # Retorna otro socket enlazado a la conexión, junto con su dirección
                conn, addr = self.sock.accept()
                if self.VERBOSE: print(f"Conexión desde {addr[0]}:{addr[1]}")

                conn.send(msg)
                conn.close()

        # Recive datos
        def recv_data(self) -> bytes:
                conn, addr = self.sock.accept()
                if self.VERBOSE: print(f"Conexión desde {addr[0]}:{addr[1]}")

                rtn:bytes = b""

                while True:
                        data = conn.recv(1024)
                        
                        if not data:
                                break
                        
                        rtn += data

                conn.close()

                return rtn

        def close(self):
                self.sock.close()

def main():
        # Manipulo los parámetros pasados al script
        parser = optparse.OptionParser()
        parser.add_option('-H', dest='ip', type='str', help='IP de destino')
        parser.add_option('-p', dest='port', type='int', help='Puerto de destino')
        parser.add_option('-m', dest='msg', type='str', help='Mensaje a enviar')
        parser.add_option('-t', dest='conn_type', type='str', help='Tipo de conexión (send, ksend, recv)', default='send')
        parser.add_option('-v', dest='verbose', action='store_true', default=False, help='Verbosidad')

        (opt, args) = parser.parse_args()
        
        conn = Connection(opt.verbose)

        if opt.conn_type == 'send':
                if opt.msg == None:
                        # En caso de usar pipes. Ej: `cat imagen.jpg | python3 sockets.py -t send`
                        data = sys.stdin.buffer.read()
                else:
                        # En caso de usar la flag `-m`
                        data = opt.msg

                try:
                        conn.send_data(data.encode())
                except:
                        conn.send_data(data)
        elif opt.conn_type == 'recv':
                msg = conn.recv_data()

                try:
                        # En caso de que el mensaje sea texto plano
                        print(msg.decode('utf-8'))
                except:
                        # En caso de que el mensaje sea un archivo, ej: una foto, pdf
                        sys.stdout.buffer.write(msg)
        else:
                print("No existe ese tipo de conexión!")
                conn.close()
                exit(1)

        conn.close()

if __name__ == '__main__':
        main()
