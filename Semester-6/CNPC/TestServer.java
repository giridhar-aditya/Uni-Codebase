import java.net.*;
import java.io.*;
class TestServer
{
    public static void main(String ar[]){
        try{
            ServerSocket ss = new ServerSocket(1000);
            System.out.println("Waiting...");
            Socket s = ss.accept();
            System.out.println("Connection Established");

            PrintStream ps = new PrintStream(s.getOutputStream());
            ps.println("Message to Client");

            BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
            String x = br.readLine();
            System.out.println(x);
            ss.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}