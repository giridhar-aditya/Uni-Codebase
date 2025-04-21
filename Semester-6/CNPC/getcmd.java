import java.net.*;
import java.io.*;
class getcmd{
	public static void main(String ar[]){	
	try{
	Socket s = new Socket("172.22.11.2",1000);
	PrintStream ps = new PrintStream(s.getOutputStream());
	BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
	String cmd = br.readLine();
	File dir = new File(cmd);
	File[] f = dir.listFiles();
	for(File file : f){
	ps.println(file.getName());}
	System.out.println("Directories Sent");
	}
	}
	catch(Exception e){
		System.out.println(e);
	}
	}
}