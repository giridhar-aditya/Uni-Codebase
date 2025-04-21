import java.net.*;
import java.io.*;
class getdir{
	public static void main(String ar[]){
	try{
	DatagramSocket ds = new DatagramSocket(2000);
	byte b[] = new byte[1000];
	String x = "Yes";
	DatagramPacket dp1 = new DatagramPacket(b,b.length);
	DatagramPacket dp2 = new DatagramPacket(x.getBytes(),x.length(),InetAddress.getByName("172.22.11.2"),1000);
	ds.receive(dp1);
	String dir = new String(b,0,dp1.getLength());
	System.out.println("Directory Received ="+dir);
	File d = new File(dir);
	if(d.mkdir()){
		ds.send(dp2);
	}
	else{
		x = "Noo";
		ds.send(dp2);
	}
	}
	catch(Exception e){
		System.out.println(e);
	}
	}
}