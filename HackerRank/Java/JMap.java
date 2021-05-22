import java.util.*;
import java.io.*;
class JMap{


	public static void main(String[] args) {
		//Complete this code or write your own from scratch
		Scanner in = new Scanner(System.in);
		int n=in.nextInt();
		in.nextLine();

		HashMap phoneBook = new HashMap<String,Integer>();
 
		for(int i=0;i<n;i++)
		{
			String name=in.nextLine();
			int phone=in.nextInt();
			phoneBook.put(name,phone);
			in.nextLine();
		}
		while(in.hasNext())
		{
			String s=in.nextLine();
			Integer no =(Integer) phoneBook.get(s);
			if(no!=null){
			System.out.println(s+"="+no);				
			}else{
			System.out.println("Not found");				
			}

		}

	}


}