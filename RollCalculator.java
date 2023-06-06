// Name William Bigger
// Programming in Java Assignment 1
// UWF ID 970 540 642

class rollCalculator
{
	// Your program begins with a call to main().
	public static void main(String[] args)	{
        
        double diameter = 2;
		double distance1 = 2;
        // distance 1 = 2 miles = 5280ft * 2 = 10560ft
		distance1 = 10560;
		double distance2 = 3;
		// distance2 is 3 miles == 3 * 5280ft = 15840ft
		distance2 = 15840;
		double totalDistance = distance1 + distance2;
		// circumference = 2 * Pi * R. R is diameter / 2, so 1
		// Java will throw an error message if var's aren't used so I included diameter / 2 despite unnecessary 
		double circumference = 2 * 3.14159 * (diameter / 2); ;
        // one roll moves BB8 the length of circumference	
		double numRolls = totalDistance / circumference;
        // alternative way of calculating totalDistance
		totalDistance  = numRolls * circumference;
    
		// white space makes output easier to read
		System.out.println();
		System.out.println("The total number of rolls is: " + numRolls);

    
    
    
    
    }
}
