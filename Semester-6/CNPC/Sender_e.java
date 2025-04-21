import java.net.*;
import java.io.*;
import java.util.Scanner;
class Sender_e{
	public static void main(String ar[]){
		try{
			Scanner scn = new Scanner(System.in);
			DatagramSocket ds = new DatagramSocket(3000);
			System.out.println("Enter Message to Send");
			String x = scn.nextLine();
			String y = "";
			char c[] = x.toCharArray();
			for(int i=0;i<c.length;i++){
				y = y + (char)(c[i]+5);
			}
			x = y;
			DatagramPacket dp = new DatagramPacket(x.getBytes(),x.length(),InetAddress.getByName("172.22.11.2"),4000);
			ds.send(dp);
			System.out.println("Message Sent");
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}