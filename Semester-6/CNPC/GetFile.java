import java.net.*;
import java.io.*;
import java.util.Scanner;
class GetFile{
	public static void main(String ar[]){
		try{
		Scanner scn = new Scanner(System.in);
            	Socket s = new Socket("192.168.1.33",1000);
            	BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
            	String x = br.readLine();
		System.out.println("Message Received...");
		System.out.print("Enter the key value :");
		int key = scn.nextInt();
		String y = "";
		char c[] = x.toCharArray();
		for(int i=0;i<c.length;i++){
			y = y + (char)(c[i]-key);
		}
		System.out.println("Message :"+y);
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}