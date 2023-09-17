import java.util.Scanner;
public class StudentTester {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		String studentName;
		char choice;
		int quizScore;
		
	System.out.print("Please enter your name: ");
	studentName = scnr.next();
	Student student = new Student(studentName);
	
	do {
		System.out.print("Please enter your quiz score: ");
		quizScore = scnr.nextInt();
		student.addQuiz(quizScore);
		System.out.println();
		
		System.out.print("Would you like to enter another score? (y/n)");
		choice = scnr.next().charAt(0);
	}
	while(choice == 'Y' || choice == 'y');
	
	student.PrintNameAndScore();
	
	Student newStudent = new Student();
	newStudent.setName("William");
	System.out.println(newStudent.getName());
	scnr.close();
}
}