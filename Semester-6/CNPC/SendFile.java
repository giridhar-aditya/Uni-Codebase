import java.net.*;
import java.io.*;
import java.util.Scanner;
class SendFile{
	public static void main(String ar[]){
		try{
		Scanner scn = new Scanner(System.in);
		File f1 = new File("Sender.java");
		if(f1.exists()){
		FileInputStream fin = new FileInputStream(f1);
		System.out.println("File Received...");
		System.out.print("Enter the key value for Encryption :");
		int key = scn.nextInt();
		String x = ""; int data;
		while((data = fin.read())!=-1){
			x = x + (char)(data+key);
		}
		System.out.println("Encryption Done Successfully...");
		ServerSocket ss = new ServerSocket(1000);
            	System.out.println("Waiting...");
            	Socket s = ss.accept();
            	System.out.println("Connection Established");
            	PrintStream ps = new PrintStream(s.getOutputStream());
            	ps.println(x);
		System.out.println(x);
		System.out.println("Message Sent");
                ss.close();
		fin.close();
		}
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}