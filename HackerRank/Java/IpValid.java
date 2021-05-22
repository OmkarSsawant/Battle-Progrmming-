import java.util.regex.*;
import java.util.Scanner;

class IpValid{
		  public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            String IP = in.next();
            System.out.println(IP.matches(new MyRegex().pattern));
        }
        in.close();
	}


}

 class MyRegex {
 		final String under255  = "((25[0-5])|(([0-1]?\\d\\d)|(2[0-4]\\d)))";
 		final String pattern = under255+ "." + under255 + "." + under255 + "." + under255;
	}