import java.util.*;
import java.math.BigDecimal;
import java.util.regex.*;
class BigDecimalSort{




	public static void main(String[] args) {
		  //Input
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        String []s=new String[n+2];
        for(int i=0;i<n;i++){
            s[i]=sc.next();
        }
        sc.close();

     	for (int i=0;i<n ;i++ ) {
     		BigDecimal prev = new BigDecimal(s[i]);
     		BigDecimal nextBig=null;
     		int nextBigIndex=i;
     			for (int j=i;j<n;j++) {
     				BigDecimal nb = new BigDecimal(s[j]);
     				if(nextBig!=null){
     					int op_res = nextBig.compareTo(nb);
     						if(op_res<0){
     							nextBig = nb;
     							nextBigIndex = j;
     						}
     						continue;
     					}else {
     						int res = prev.compareTo(nb);
     						if(res<0){
     							nextBigIndex = j;
     							nextBig = nb;     							
     						}
     					}
     			}

     			if(nextBigIndex!=i){
     				//swap
     				String temp = s[i];
     				s[i] = s[nextBigIndex];
     				s[nextBigIndex] = temp;
     			}

     	}

        ////////////

        //Output
        for(int i=0;i<n;i++)
        {
            System.out.println(s[i]);
        }
	}
}









//Alternative Solution
//Code Inside For

/*
         BigDecimal prev = new BigDecimal(s[i]);
             BigDecimal nextBig=null;
             int nextBigIndex=i;
                 for (int j=i;j<n;j++) {
                     BigDecimal nb = new BigDecimal(s[j]);
                     int res = prev.compareTo(nb);
                     if(res<0){
                         if(nextBig==null){
                             nextBigIndex = j;
                             nextBig = nb;
                         }
                         else{
                             int op_res = nextBig.compareTo(nb);
                             if(op_res<0){
                                 nextBig = nb;
                                 nextBigIndex = j;
                             }
                         }
                     }
                     else{
                         continue;
                     }
                               
                 }

                 if(nextBigIndex!=i){
                     //swap
                     String temp = s[i];
                     s[i] = s[nextBigIndex];
                     s[nextBigIndex] = temp;
                 }

*/