/** 
 * Author: William Bigger
 * Date: September 13, 2023
 * Represents a student that is monitored based on a minimum passing average score.
 * Extends the functionality of the base {@link Student} class.
 */
public class MonitoredStudent extends Student {

    /** The minimum passing average score for this student. */
    private int minPassingAverage;

    /**
     * Constructs a MonitoredStudent with a default minimum passing average of 72.
     */
    public MonitoredStudent() {
        super();
        minPassingAverage = 72;
    }

    /**
     * Returns the minimum passing average for the student.
     *
     * @return the minimum passing average score
     */
    public int getMinPassingAverage() {
        return minPassingAverage;
    }

    /**
     * Sets the minimum passing average for this student.
     *
     * @param passingAverage the new minimum passing average score
     */
    public void setMinPassingAverage(int passingAverage) {
        this.minPassingAverage = passingAverage;
    }

    /**
     * Checks if the student is off probation based on the provided average score.
     *
     * @param average the student's average score
     * @return true if the student's average is greater than or equal to the minimum passing average, 
     *         false otherwise
     */
    public boolean isOffProbation(double average) {
        return average >= minPassingAverage;
    }
}
