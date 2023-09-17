public class Student {
   private String name;
   private double totalQuizScore;
   private int numQuizesTaken;
   
   public Student() {
      name = "noName";
      totalQuizScore = 0;
      numQuizesTaken = 0;
   
   }
   public Student (String studentName) {
      name = studentName;
      totalQuizScore = 0;
      numQuizesTaken = 0;
   }
   public void setName(String studentName) {
	   name = studentName;
}
   public String getName() {
	   return name;
   } 
   public double getAverageScore() {
	   return totalQuizScore / numQuizesTaken;
   }
   public int  addQuiz(int quizScore) {
	   if (quizScore < 0 || quizScore > 100) {
		   System.out.println("Error: score must be between zero and 100.");
		   return 0;
	   }
	   else {
		   totalQuizScore += quizScore;
		   ++numQuizesTaken;
		   return 0;
	   }
   }
   public double getTotalQuizScore() {
	   return totalQuizScore;
   }
   public void PrintNameAndScore() {
	   System.out.print(name + "'s average quiz grade: ");
	   System.out.printf("%.2f", getAverageScore());
	   System.out.println();
	   System.out.print(name + "'s total quiz grade: " );
	   System.out.printf("%.2f", totalQuizScore);
	   System.out.println();

   }
}
   