import java.net.*;
import java.io.*;
class senddir{
	public static void main(String ar[]){
	try{
	String dir = "Giridhar/Haritha";
	byte b[] = new byte[1000];
	DatagramSocket ds = new DatagramSocket(1000);
	DatagramPacket dp1 = new DatagramPacket(dir.getBytes(),dir.length(),InetAddress.getByName("172.22.11.2"),2000);
	ds.send(dp1);
	DatagramPacket dp2 = new DatagramPacket(b,b.length);
	ds.receive(dp2);
	String x = "";
	for(int i=0;i<dp2.getLength();i++){
		x = x + (char)b[i];
	}
	System.out.println("Response :"+x);
	}
	catch(Exception e){
		System.out.println(e);	
	}
	}
}