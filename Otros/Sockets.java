import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.InputStreamReader;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.SocketTimeoutException;

/* Por defecto los Socket's son de tipo TCP
 * Para conexiones UDP se usa DatagramSocket
*/
public class Sockets {
	public static void main(String[] args) {
		// SERVIDOR
		// try (ServerSocket s = new ServerSocket(9090)) {
		// 	// Tiempo de espera para las conexiónes entrantes (en milisegundos)
		// 	s.setSoTimeout(10000);

		// 	System.out.println("Escuchando desde " + s.getInetAddress() + ":" + s.getLocalPort());

		// 	// Socket de la conexión entrante
		// 	Socket cs = s.accept();
			
		// 	System.out.printf("Conexion desde %s:%d%n", cs.getInetAddress(), cs.getPort());
		// 	BufferedReader br = new BufferedReader(new InputStreamReader(cs.getInputStream()));

		// 	String mensaje;

		// 	while ((mensaje = br.readLine()) != null) {
		// 		System.out.println(mensaje);
		// 	}

		// 	cs.close();
		// } catch (SocketTimeoutException ste) {
		// 	System.out.println("Tiempo de espera agotado!");
		// 	System.exit(1);
		// } catch (Exception e) {
		// 	e.printStackTrace();
		// }

		// CLIENTE
		try (Socket s = new Socket(args[0], Integer.parseInt(args[1]))) {
			DataOutputStream os = new DataOutputStream(s.getOutputStream());
			os.writeUTF(args[2]);

			os.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
