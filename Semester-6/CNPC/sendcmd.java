import java.net.*;
import java.io.*;
class sendcmd{
	public static void main(String ar[]){
	try{
	String x = "E:\\JAVA";
	ServerSocket ss = new ServerSocket(1000);
	Socket s = ss.accept();
	PrintStream ps = new PrintStream(s.getOutputStream());
	BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
	ps.println(x);
	System.out.println("Command Sent...waiting for response");
	while((x=br.readLine())!=null){
		System.out.println(x+"\n");
	}
	ss.close();
	}
	catch(Exception e){
		System.out.println(e);
	}
	}
}