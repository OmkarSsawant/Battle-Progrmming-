import java.math.BigInteger;
import java.util.*;


class Bigint{
	public static void main(String[] args) {
		final Scanner sc = new Scanner(System.in);		
		BigInteger b1 = new BigInteger(sc.next());
		BigInteger b2 = new BigInteger(sc.next());
		System.out.println(b1.add(b2));
		System.out.println(b1.multiply(b2));
		sc.close(); 
	}
}