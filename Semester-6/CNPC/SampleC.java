import java.net.*;
import java.io.*;
import java.util.Scanner;
class SampleC{
	public static void main(String ar[]){
	try{
	Scanner scn = new Scanner(System.in);
	Socket s = new Socket("172.22.11.2",1000);
	PrintStream ps = new PrintStream(s.getOutputStream());
	BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
	String x = "";
	while(true){
		System.out.print("Enter Message to Server :");
		x = scn.nextLine();
		ps.println(x);
		
		x = br.readLine();
		if(x.equals("exit")){System.out.println("The chat has ended"); break;}
		System.out.println("Message from Server :"+x);
	}
	}
	catch(Exception e){
		System.out.println(e);
	}
	}
}