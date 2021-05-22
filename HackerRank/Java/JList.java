import java.util.*;
import java.io.*;


class JList{


	public static void main(String[] args)throws IOException {
		final Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();

		ArrayList<Integer> nums = new ArrayList<>();

		for (int i=0;i<n;i++) {
			nums.add(sc.nextInt());	
		}

		int q = sc.nextInt();

		for(int t=0;t<q;t++){
			String op = sc.next();
			if(op.contains("Insert")){
				int idx = sc.nextInt();
				int new_num = sc.nextInt();
					nums.add(idx,new_num);
			}
			else if(op.contains("Delete")){
				int del_idx = sc.nextInt();
				if(del_idx < nums.size()){
					Integer _delnum = nums.remove(del_idx);
				}
			}	

		}
		sc.close();

		for(int num:nums){
			System.out.print(num+" ");
		}

	}
}