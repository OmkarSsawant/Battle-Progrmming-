import java.util.Scanner;
import java.util.regex.*;


public class TagContentExtracter{
	static final Pattern content = Pattern.compile("<(.+)>([^<]+)<\\/\\1>");

	


	public static void main(String[] args){
		
		Scanner scan = new Scanner(System.in);
        int testCases = Integer.parseInt(scan.nextLine());
        
        while (testCases-- > 0) {
            String line = scan.nextLine();
           
            boolean matchFound = false;
            Matcher m = content.matcher(line);

            while (m.find()) {
                System.out.println(m.group(2));
                matchFound = true;
            }
            if ( ! matchFound) {
                System.out.println("None");
            }
        }
	}
}



