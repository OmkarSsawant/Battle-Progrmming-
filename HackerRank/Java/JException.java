import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class JException {

    public static void main(String[] args) {
    		final Scanner sc = new Scanner(System.in);
    		String s1 = sc.next();
    		String s2 = sc.next();
 
 try{
	Integer i1 = Integer.parseInt(s1);
    Integer i2 = Integer.parseInt(s2);
   	System.out.print(""+(i1/i2));
 }catch(NumberFormatException nfe){
   	System.out.print("java.util.InputMismatchException");
 }catch(ArithmeticException ae){
   	System.out.print("java.lang.ArithmeticException: / by zero");
 }	
    		sc.close();

    }
}