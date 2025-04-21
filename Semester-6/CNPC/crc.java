import java.util.Scanner;
class crc{
	public static void main(String ar[]){
	
	Scanner scn = new Scanner(System.in);
	int[] data,divisor,dividend,rem,crc;
	int data_bits,div_bits,tot_bits;
	//Getting Input for Data Bits
	System.out.print("Enter the Number of Data Bits :");
	data_bits = scn.nextInt();
	data = new int[data_bits];
	for(int i=0;i<data_bits;i++){ 
		System.out.printf("Enter Data Bit %d :",i+1);
		data[i] = scn.nextInt();
	}
	//Getting Input for Divisor Bits
	System.out.print("Enter the Number of Divisor Bits :");
	div_bits = scn.nextInt();
	divisor = new int[div_bits];
	for(int i=0;i<div_bits;i++){
		System.out.printf("Enter Divisor Bit %d :",i+1);
		divisor[i] = scn.nextInt();
	}

	tot_bits = data_bits + div_bits - 1;
	dividend = new int[tot_bits];
	rem = new int[tot_bits];
	crc = new int[tot_bits];
	//Appending 0's to Data
	System.out.print("Dividend after Appending 0's :");
	for(int i=0;i<data_bits;i++){
		dividend[i] = data[i];
	}
	for(int i=0;i<tot_bits;i++){
		System.out.print(dividend[i]);
	}
	for(int i=0;i<tot_bits;i++){
		rem[i] = dividend[i];
	}
	rem = divide(dividend,divisor,rem); //Calling the Divide Function
	for(int i=0;i<tot_bits;i++){
		crc[i] = (dividend[i] ^ rem[i]);
	}
	System.out.print("\nCRC :");
	for(int i=0;i<tot_bits;i++){
		System.out.print(crc[i]);
	}

	//Checking the CRC
	System.out.print("\n\nChecking CRC\n\n");
	for(int i=0;i<tot_bits;i++){
		System.out.printf("Enter CRC Bit %d :",i+1);
		crc[i] = scn.nextInt();
	}
	for(int i=0;i<tot_bits;i++){
		rem[i] = crc[i];
	}
	rem = divide(crc,divisor,rem);
	for(int i=0;i<tot_bits;i++){
		if(rem[i]!=0){
			System.out.print("\nError Detected\n");
			System.exit(0);
		}
	}
	System.out.print("\nNo Error Detected\n");
	scn.close();
	}
	static int[] divide(int dividend[],int divisor[],int rem[]){
		int cur=0;
		while(true){
			for(int i=0;i<divisor.length;i++){
				rem[cur+i] = (rem[cur+i] ^ divisor[i]);
			}
			while(rem[cur]==0 && cur!=rem.length-1){
				cur++;
			}
			if((rem.length-cur)<divisor.length){
				break;
			}
		}
		return rem;
	}
}