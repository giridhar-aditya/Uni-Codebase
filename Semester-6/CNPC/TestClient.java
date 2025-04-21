import java.net.*;
import java.io.*;
import java.util.Scanner;

class TestClient
{
    public static void main(String ar[])
    {
        try
        {
            Scanner scn = new Scanner(System.in);
            Socket s = new Socket("172.22.34.17",2000);
            

            PrintStream ps = new PrintStream(s.getOutputStream());
	BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
	    while(true){
            System.out.println("Enter Input for Sending to Server :");
            String msg = scn.nextLine();
            ps.println(msg); 
            String x = br.readLine();
            System.out.println(x);
		}
     

        }
        catch(Exception e)
        {
            System.out.println(e);
        }

    }
}
