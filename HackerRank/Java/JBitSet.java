import java.util.*;

class JBitSet{
	//TODO:Not Working

	public static void main(String[] args) {
		final Scanner sc = new Scanner(System.in);
		String[] nums = sc.nextLine().split(" ");
		int n = Integer.parseInt( nums[0] );
		int m = Integer.parseInt( nums[1] );
		BitSet b1 = new BitSet(n);
		BitSet b2 = new BitSet(n);

		for(int i=0;i<m;i++){
			String operation = sc.nextLine();
			System.out.println("QUERY:"+operation);
			String[] oprs = operation.split(" ");
			String biOp = oprs[0];
			int op1 = Integer.parseInt( oprs[1] );
			int op2 = Integer.parseInt( oprs[2] );


			if(biOp == "AND"){
				if(op1==1){
					b1.and(b2);
				}	else{
					b2.and(b1);
				}

			}else if(biOp == "OR"){
				if(op1==1){
					b1.or(b2);
				}	else{
					b2.or(b1);
				}
			}else if(biOp == "XOR"){
				if(op1==1){
					b1.xor(b2);
				}	else{
					b2.xor(b1);
				}
			}else if(biOp == "FLIP"){
				if(op1==1){
					b1.flip(op2);
				}else{
					b2.flip(op2);
				}
			}
			else if(biOp == "SET"){
				if(op1==1){
					b1.set(op2);
				}else{
					b2.set(op2);
				}
			}
		
		System.out.println(b1.cardinality() + " " + b2.cardinality());
		} 

		sc.close();
	}
}