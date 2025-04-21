import java.net.*;
import java.io.*;
import java.util.Scanner;
class SampleS{
	public static void main(String ar[]){
	try{
	Scanner scn = new Scanner(System.in);
	ServerSocket ss = new ServerSocket(1000);
	Socket s = ss.accept();
	PrintStream ps = new PrintStream(s.getOutputStream());
	BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
	String x="";
	while(true){
		x = br.readLine();
		if(x.equals("exit")){System.out.println("The chat has ended"); break;}
		System.out.println("Message from Client :"+x);
		System.out.print("Enter your Reply :");
		x = scn.nextLine();
		ps.println(x);
	}
	}
	catch(Exception e){
		System.out.println(e);
	}
	}
}