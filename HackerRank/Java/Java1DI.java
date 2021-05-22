import java.util.*;

public class Java1DI {

    public static boolean canWin(int leap, int[] game) {
        int one_count=0;
       //check if cannot reach from back
        for (int i=(game.length-1)-leap;i<game.length-1;i++) {
            if(game[i]==1) one_count++;
        }
        if(one_count==leap) return false;

        int pos=0;

        //now travel from first and check possible paths avaliable
        while(pos<game.length){
            if(pos>=game.length-1) return true;

            if(pos+1 >= game.length-1 || pos+leap >= game.length)
                return true;

             if(pos+leap<game.length)
                if(game[pos+leap]==0) {
                    pos +=leap;
                    continue; 
                }
             if(game[pos+1]==0){
                pos++;
                continue;
             }

             return false;   
            }
             return false;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        while (q-- > 0) {
            int n = scan.nextInt();
            int leap = scan.nextInt();
            
            int[] game = new int[n];
            for (int i = 0; i < n; i++) {
                game[i] = scan.nextInt();
            }

            System.out.println( (canWin(leap, game)) ? "YES" : "NO" );
        }
        scan.close();
    }
}