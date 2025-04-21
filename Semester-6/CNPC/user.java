import java.awt.*;
import java.awt.event.*;
import java.net.*;
import java.io.*;
class Test implements ActionListener{
	Frame f;
	TextField tf;
	TextArea ta;
	Button b,b1;
	PrintStream ps;
	BufferedReader br;
	ServerSocket ss;
	Socket s;
	Test(){
	f = new Frame("Sample UI");
	tf = new TextField(10);
	ta = new TextArea(10,10);
	b = new Button("Send");
	b1 = new Button("Cancel");
	b.addActionListener(this);
	b1.addActionListener(this);
	f.setSize(400,400);
	f.setLayout(new FlowLayout());
	f.add(new Label("Enter your Message :"));
	f.add(tf);
	f.add(ta);
	f.add(b);
	f.add(b1);
	f.setVisible(true);
	ta.append("Waiting for Client..."+"\n");
	try{
		ss = new ServerSocket(1000);
		s = ss.accept();
		ps = new PrintStream(s.getOutputStream());
		br = new BufferedReader(new InputStreamReader(s.getInputStream()));
		String x = br.readLine();
		ta.append("Client :"+x+"\n");
	}
	catch(Exception e){}
	}
	public void actionPerformed(ActionEvent ae){
	if((ae.getSource())==b){
		try{
		String x = tf.getText();
		ta.append("Server :"+x+"\n");
		ps.println(x);}
		catch(Exception e){}
	}
	else if((ae.getSource())==b1){
		ta.setText("You pressed Cancel");
	}
	}
	
}
class user{
	public static void main(String ar[]){
		Test t = new Test();
	}
}

