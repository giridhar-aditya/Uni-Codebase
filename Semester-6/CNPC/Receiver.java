import java.net.*;
import java.io.*;
class Receiver{
	public static void main(String ar[]){
		try{
		DatagramSocket ds = new DatagramSocket(4000);
		byte b[] = new byte[1000];
		DatagramPacket dp = new DatagramPacket(b,b.length);
		ds.receive(dp);
		System.out.println("Message Received");
		String y = "";
		for(int i=0;i<dp.getLength();i++){
			y = y + (char)(b[i]-5);
		}
		System.out.println("Message : "+y);

		System.out.println(dp.getAddress().getHostAddress());
		System.out.println(dp.getPort());
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}