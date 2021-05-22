import java.io.*;
import java.util.*;

public  class TCC{

	static ArrayList<Long> check(String path1,String path2) throws Exception{
		File mOut = new File(path1);
		File expected = new File(path2);
		BufferedReader mr= new BufferedReader(new FileReader(mOut));
		BufferedReader er= new BufferedReader(new FileReader(expected));
		final ArrayList<Long> unMatchedLines = new ArrayList<Long>(); 
		String mLine="";
		String exLine="";
		long lNo=0;
		while((mLine=mr.readLine())!=null && (exLine=er.readLine())!=null){
			lNo++;
			if(!mLine.equals(exLine))
				unMatchedLines.add(lNo);
		}

		mr.close();
		er.close();
		return unMatchedLines;
	}

	public static void main(String[] args) {
		final String dir = "/home/omkar/Documents/Programming/Battle Programming/HackerRank/Java/";
		try{
		System.out.println(check(dir+"t1.txt",dir+"t2.txt"));
		}catch(Exception e){
			System.out.println(e.getMessage());
		}
	}

}