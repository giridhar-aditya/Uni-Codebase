import java.io.*;
import java.util.*;

class hamget {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int m, n, r = 0, codeword[], errorPos = 0;

        // Read the codeword from file
        String receivedData;
        try (BufferedReader br = new BufferedReader(new FileReader("codeword.txt"))) {
            receivedData = br.readLine();
        }

        m = receivedData.length();
        while (Math.pow(2, r) < m + 1) {
            r++;
        }
        n = m - r;
        codeword = new int[m + 1];

        System.out.print("Received codeword is: ");
        for (int i = 1; i <= m; i++) {
            codeword[i] = Character.getNumericValue(receivedData.charAt(i - 1));
            System.out.print(codeword[i]);
        }
        System.out.println();

        for (int j = 0; j < r; j++) {
            int position = (int) Math.pow(2, j);
            int sum = 0, count = 0;

            for (int k = position; k <= m; k++) {
                if (count < position) {
                    sum += codeword[k];
                    count++;
                } else {
                    k += position - 1;
                    count = 0;
                }
            }
            if (sum % 2 != 0) {
                errorPos += position;
            }
        }

        if (errorPos == 0) {
            System.out.println("No error detected.");
        } else {
            System.out.println("Error detected at position: " + errorPos);
            codeword[errorPos] = (codeword[errorPos] == 0) ? 1 : 0;
            System.out.print("Corrected codeword: ");
            for (int i = 1; i <= m; i++)
                System.out.print(codeword[i]);
            System.out.println();
        }
    }
}