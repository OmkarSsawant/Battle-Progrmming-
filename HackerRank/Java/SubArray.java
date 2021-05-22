import java.util.*;

class SubArray{
	public static void main(String[] args) {
		final Scanner sc = new Scanner(System.in);
		int n  = Integer.parseInt(sc.nextLine());
		int[] a = new int[n+1];
		int ans=0;

		String[] in = sc.nextLine().split(" ");
 		sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

		for(int i=0;i<n;i++){
			a[i] = Integer.parseInt(in[i]);
		}

		for (int i=0;i<n;i++) {
 		int sum=0;
			for (int j=i;j<n;j++) {
					sum+=a[j];					
					if(sum<0) ans++;
				}	
		}
	
		System.out.println(ans);
		sc.close();
	}
}