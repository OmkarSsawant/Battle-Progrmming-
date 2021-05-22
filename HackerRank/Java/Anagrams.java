import java.util.Scanner;

public class Anagrams {

    static boolean isAnagram(String a, String b) {
      if(a.length()!=b.length()) return false;    

        char[] _aChars = a.toLowerCase().toCharArray();
        char[] _bChars = b.toLowerCase().toCharArray();
        
        java.util.HashMap<Character,Integer> _Acounts = new java.util.HashMap<>();
        java.util.HashMap<Character,Integer> _Bcounts = new java.util.HashMap<>();

        for(int i=0;i<a.length();i++){
                if(_Acounts.containsKey(_aChars[i])){
                    int charCount = _Acounts.get(_aChars[i]);
                    _Acounts.replace(_aChars[i],++charCount);
                }else{
                    _Acounts.put(_aChars[i],1);
                }
                if(_Bcounts.containsKey(_bChars[i])){
                    int charCount = _Bcounts.get(_bChars[i]);
                    _Bcounts.replace(_bChars[i],++charCount);
                }else{
                    _Bcounts.put(_bChars[i],1);
                }
        }

        for(java.util.Map.Entry<Character,Integer> metaChar:_Acounts.entrySet()){
            Character key = metaChar.getKey();
            if(_Bcounts.containsKey(key)){
                int countIn_A = metaChar.getValue();
                int countIn_B = _Bcounts.get(key);
                return countIn_A == countIn_B;
            }else{
                return false;
            }
        }

        return false;
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
