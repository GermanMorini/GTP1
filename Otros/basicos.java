import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.SocketTimeoutException;
import java.net.UnknownHostException;

public class basicos {
        public static void main(String[] args) {
                Conexion conn = null;

                if (args.length <= 1) System.exit(1);

                // System.out.println("%s, %s".formatted(args[0], args[1]));
                if (args[0].equals("-l")) {
                        try {
                                conn = new Conexion(Integer.parseInt(args[1]));
                                conn.recibir_info();
                        } catch (IOException e) {
                                System.out.println("No se pudo crear la conexión!");
                                System.exit(2);
                        }
                }
                else if (args[0] == "-s") {
                        try {
                                conn = new Conexion(args[1], Integer.parseInt(args[2]));
                                
                                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

                                String buff, msg  = "";

                                while ((buff = br.readLine()) != null) {
                                        msg += buff;
                                }

                                conn.mandar_info(msg);
                        } catch (UnknownHostException e1) {
                                System.out.println("Host desconocido");
                                System.exit(1);
                        } catch (IOException e2) {
                                System.out.println("No se pudo crear la conexión!");
                                System.exit(2);
                        }
                } else {
                        System.out.println("Error en los parámetros");
                        System.exit(1);
                }
        }
}

class Conexion {
        private ServerSocket serv_sock;
        private Socket sock;

        public Conexion(String ip, int puerto) throws IOException, UnknownHostException {
                sock = new Socket(ip, puerto);
        }

        public Conexion(int puerto) throws IOException {
                serv_sock = new ServerSocket(puerto);
                System.out.println("Escuchando desde %s:%d".formatted(serv_sock.getInetAddress(), serv_sock.getLocalPort()));
        }

        public void mandar_info(String info) {
                try {
                        DataOutputStream dos = new DataOutputStream(sock.getOutputStream());
                        dos.writeUTF(info);

                        dos.close();
                        sock.close();
                } catch (Exception e) {
                        e.printStackTrace();
                }
        }

        public void recibir_info() {
                try {
                        serv_sock.setSoTimeout(10000);
                        Socket client_socket = serv_sock.accept();
                        System.out.println("Conexión desde %s:%d".formatted(client_socket.getInetAddress(), client_socket.getPort()));

                        BufferedReader br = new BufferedReader(new InputStreamReader(client_socket.getInputStream()));

                        String msg;

                        while ((msg = br.readLine()) != null) {
                                System.out.print(msg);
                        }

                        br.close();
                        client_socket.close();
                        serv_sock.close();

                        System.out.println("Conexión finalizada");
                } catch (SocketTimeoutException e2) {
                        System.out.println("Tiempo de espera de conexión agotado");
                } catch (Exception e2) {
                        e2.printStackTrace();
                }
        }
}
