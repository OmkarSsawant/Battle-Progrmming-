import java.util.*;

class Student{
	private int id;
	private String fname;
	private double cgpa;
	public Student(int id, String fname, double cgpa) {
		super();
		this.id = id;
		this.fname = fname;
		this.cgpa = cgpa;
	}
	public int getId() {
		return id;
	}
	public String getFname() {
		return fname;
	}
	public double getCgpa() {
		return cgpa;
	}
}

//Complete the code
public class JSort
{

	private static final int DES=-1;
	private static final Comparator<Student> SMART_COMPARE = new Comparator<Student>(){
				@Override
				public int compare(Student ms,Student os){
					int cgpaRes = ((Double) ms.getCgpa()).compareTo(os.getCgpa());
					if(cgpaRes!=0) return cgpaRes * DES;
					int fNameRes = ms.getFname().compareTo(os.getFname());
					if(fNameRes!=0) return fNameRes;
					int idRes =((Integer) ms.getId()).compareTo(os.getId());
					return idRes ;
				}
		};

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int testCases = Integer.parseInt(in.nextLine());
		
		List<Student> studentList = new ArrayList<Student>();
		while(testCases>0){
			int id = in.nextInt();
			String fname = in.next();
			double cgpa = in.nextDouble();
			
			Student st = new Student(id, fname, cgpa);
			studentList.add(st);
			
			testCases--;
		}

		Collections.sort(studentList,SMART_COMPARE);
      
      	for(Student st: studentList){
			System.out.println(st.getFname());
		}
	}
}



