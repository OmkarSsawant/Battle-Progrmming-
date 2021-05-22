import java.util.*;

class ArrList{

	public static void main(String[] args) {
		final Scanner sc = new Scanner(System.in);
		int n = Integer.parseInt(sc.nextLine());
		final ArrayList<ArrayList<Integer>>  _data = new ArrayList<>();
		for (int i=0;i<n ;i++ ) {
			
		 	String[] in_entry = sc.nextLine().split(" ");
		 	sc.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
			final ArrayList<Integer>  _list = new ArrayList<>();

		 	for (int j=1;j<in_entry.length;j++) {
		 		_list.add(Integer.parseInt(in_entry[j]));
		 	}
		 	_data.add(_list);

		 } 

		int qn = Integer.parseInt(sc.nextLine());	
	for (int i=0;i<qn ;i++ ) {
		 	String[] in_q = sc.nextLine().split(" ");
		 	int rowIndex = Integer.parseInt(in_q[0])-1;
		 	int eIdx = Integer.parseInt(in_q[1])-1;
		 	try{
		 	int value= _data.get(rowIndex).get(eIdx);
		 		System.out.println(value);
		 	}catch(Exception e){
		 		System.out.println("ERROR!");
		 	}
	}

		sc.close();

	}
}