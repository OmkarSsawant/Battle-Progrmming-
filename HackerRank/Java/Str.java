import java.util.*;
import java.io.*;


class Str  {
    public static void main(String[] args) {
         Scanner scan = new Scanner(System.in);
            String s = scan.nextLine();
        if (s.trim().length()==0 || s.trim().length()>400000)
        {
            System.out.println(0);
            return;
        }
        List<String> alphas = Arrays.asList(s.trim().split("[ !,?._'@]+"));
        System.out.println(alphas.size());
          for (String a : alphas) {
            System.out.println(a);              
          }
        scan.close();
    }
}