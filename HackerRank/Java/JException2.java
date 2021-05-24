import java.util.Scanner;
class MyCalculator {
    long power(int num,int pow) throws Exception{
    	if(num < 0 || pow < 0 ) throw new Exception("n or p should not be negative.");
    	else if(num ==0 && pow==0) throw new Exception("n and p should not be zero.");
    	return Math.round(Math.pow(Double.valueOf(num),Double.valueOf(pow)));
    }
}

public class JException2 {
    public static final MyCalculator my_calculator = new MyCalculator();
    public static final Scanner in = new Scanner(System.in);
    
    public static void main(String[] args) {
        while (in .hasNextInt()) {
            int n = in .nextInt();
            int p = in .nextInt();
            
            try {
                System.out.println(my_calculator.power(n, p));
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}