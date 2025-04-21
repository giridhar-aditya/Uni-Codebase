import java.util.Scanner;
public class Question94{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
        sc.close();
        StringBuilder expression = new StringBuilder();
        for (char ch : input.toCharArray()) {
            char mappedChar = gui_map(ch); // Using GuiMapper class
            if (mappedChar != 'N') {
                expression.append(mappedChar);
            }
        }

        String exp = expression.toString();
        if (!exp.contains("=")) {
            System.out.println("No output");
            return;
        }

        exp = exp.replace("=", "");
        if (exp.isEmpty()) {
            System.out.println("Invalid Expression");
            return;
        }

        double result = evaluateExpression(exp);
        if (Double.isNaN(result)) {
            System.out.println("Invalid Expression");
        } else {
            System.out.println(result);
        }
    }

    static double evaluateExpression(String exp) {
        double num1 = 0, num2 = 0;
        char operator = ' ';
        boolean foundOperator = false;

        StringBuilder num = new StringBuilder();
        for (char ch : exp.toCharArray()) {
            if ((ch >= '0' && ch <= '9') || ch == '.') {
                num.append(ch);
            } else {
                if (!foundOperator) {
                    if (num.length() == 0) return Double.NaN; // Invalid input
                    num1 = Double.parseDouble(num.toString());
                    num.setLength(0);
                    operator = ch;
                    foundOperator = true;
                } else {
                    if (num.length() == 0) return Double.NaN;
                    num2 = Double.parseDouble(num.toString());
                    num.setLength(0);
                }
            }
        }

        if (num.length() > 0) {
            num2 = Double.parseDouble(num.toString());
        }

        if (!foundOperator) return Double.NaN; // If there's no operator, return NaN

        double result = 0;
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case 'X': // Handling multiplication
                result = num1 * num2;
                break;
            case '/':
                result = (num2 != 0) ? num1 / num2 : Double.NaN;
                break;
            default:
                return Double.NaN;
        }
        return result;
    }
// The main() method ends here.
	
// A method that takes a character as input and returns the corresponding GUI character	
static char gui_map(char in){
    char out = 'N';// N = Null/Empty
    char gm[][]={{'a','.'}
                ,{'b','0'}
                ,{'c','='}
                ,{'d','+'}
                ,{'e','1'}
                ,{'f','2'}
                ,{'g','3'}
                ,{'h','-'}
                ,{'i','4'}
                ,{'j','5'}
                ,{'k','6'}
                ,{'l','X'}
                ,{'m','7'}
                ,{'n','8'}
                ,{'o','9'}
                ,{'p','/'}};
                
    // Checking for maps
    for(int i=0; i<gm.length; i++){
        if(gm[i][0]==in){
            out=gm[i][1];
            break;
        }
    }
    return out;
}
}