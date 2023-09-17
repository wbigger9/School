import java.util.*;
public class MonitoredStudentTester {

	public static void main(String[] args) {
		MonitoredStudent stu1 = new MonitoredStudent();
		int grade;
		String name;
		char goAgain = 'y';
		Scanner scnr = new Scanner(System.in);
		
		while(goAgain == 'y' || goAgain == 'Y') {
			System.out.print("What is your name? ");		
			name = scnr.nextLine();
			stu1.setName(name);
			System.out.println();
			
			while (true) {
				System.out.println("Enter your quiz scores (enter -1 when done): ");
				grade = scnr.nextInt();
				scnr.nextLine();
				if (grade == -1)
					break;
				stu1.addQuiz(grade);
			}          
				System.out.println("Grade for " + stu1.getName() + ": " + stu1.getAverageScore() + " " );
				System.out.print("Would you like to go again? (y/n)");
				goAgain = scnr.next().charAt(0);
				System.out.println();
		}
		
		if (stu1.isOffProbation(stu1.getAverageScore()) == true) {
			System.out.println("Congrats, you're off probation.");
		}
		else {
			System.out.println("You are unfortunately still on probation");
		}
	}
}
