import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class JHashSet {

 public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        String [] pair_left = new String[t];
        String [] pair_right = new String[t];
        
        for (int i = 0; i < t; i++) {
            pair_left[i] = s.next();
            pair_right[i] = s.next();
        }

       final HashSet uniques = new HashSet<HashMap<String,String>>(t); 	

        for (int i=0;i<t;i++) {
        	HashMap<String,String> o = new HashMap<String,String>();
        	o.put(pair_left[i],pair_right[i]);
        	uniques.add(o);	
        	System.out.println(""+uniques.size());
        }


    }
}