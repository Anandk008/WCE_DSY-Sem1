import java.util.Scanner;
class Employee{
	String fname, lname;
	int monthsalary,salary;

	public Employee(){
		fname = "Arjun";
		lname = "Kumar";
		monthsalary = 29000;
	}
	public Employee(){
		String fn,ln;
		int sal;
		fn = fname;
		ln = lname;
		sal = monthsalary;

	}
	public void getdata()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter First Name :");
		sc.nextLine();
		System.out.println("Enter Last Name  :");
		sc.nextLine();
		System.out.println("Enter Monthly Salary :");
		sc.nextInt();
	}
	public void printdata(){
		System.out.println("Nmae : "+fname+" "+lname);
		System.out.println("Monthly Salary : "+monthsalary);
		System.out.println("Yearly Salary : "+(monthsalary*12));
	}
	public void hike(int percentage)
	{
		salary = monthsalary+(monthsalary*percentage/100);
		System.out.println("Salary After "+percentage+" Hike :"+salary);
	}
}

class Main{
	public static void main(String args[]){
		Employee e1 = new Employee();
		e1.printdata();
		e1.hike(15);
		Employee e2 = new Employee();
		e2.getdata();
		e2.printdata();
		e2.hike(15);
		Employee e3 = new Employee();
		e3.getdata();
		e3.printdata();
		e3.hike(15);
	}
}