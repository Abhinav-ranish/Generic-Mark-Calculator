import java.util.Scanner;
import java.io.FileWriter;
import java.io.IOException;

public class GradeCalculator {
    public static void main(String[] args) {
        double percentage, percentage1;
        int sumOfTwoNumbers;
        int A = 90;
        int B = 80;
        int C = 75;
        int D = 60;
        int E = 50;

        System.out.println("Java Grade Calculator\n");

        Scanner sc = new Scanner(System.in);

        String name, age, gender, classStr, marksStr, passMarksStr, maxMarksStr;
        System.out.print("What is the student's name? ");
        name = sc.nextLine();
        System.out.print("What is the student's age? ");
        age = sc.nextLine();
        System.out.print("What is the student's gender? ");
        gender = sc.nextLine();
        System.out.print("What is the student's class? ");
        classStr = sc.nextLine();
        System.out.print("What are the marks acquired by the student? ");
        marksStr = sc.nextLine();
        System.out.print("What is the pass marks for the test? ");
        passMarksStr = sc.nextLine();
        System.out.print("What is the maximum marks in the test? ");
        maxMarksStr = sc.nextLine();
        System.out.println("Press enter to continue\n");
        sc.nextLine();

        int marks = Integer.parseInt(marksStr);
        int maxMarks = Integer.parseInt(maxMarksStr);
        int passMarks = Integer.parseInt(passMarksStr);
        int classNum = Integer.parseInt(classStr);
        percentage = marks * 100.0 / maxMarks;
        percentage1 = passMarks * 100.0 / maxMarks;
        sumOfTwoNumbers = classNum + 1;

        System.out.println("Name of student: " + name);
        System.out.println("Age of student: " + age);
        System.out.println("Gender: " + gender);
        System.out.println("Percentage Acquired: " + percentage);

        System.out.print("Overall Grade: ");
            if (percentage > A) {
                System.out.println("A");
                }   
            else if (percentage > B ) {
            System.out.println("B");
                }
            else if (percentage > C ) {
                System.out.println("C");
                }
            else if (percentage > D ) {
                System.out.println("D");
                }
            else if (percentage > E ) {
                System.out.println("E");
                }
            else {
                System.out.println("F");
                }

        if (percentage > percentage1) {
            System.out.println("Passed and promoted to class " + sumOfTwoNumbers);
        }
        else {
            System.out.println("Failed. Try harder next time.");
            }

    FileWriter file = new FileWriter("marks.txt");
    file.write(name + "\n");
    file.write(age + "\n");
    file.write(gender + "\n");
    file.write(classNum + "\n");
    file.write(marks + "\n");
    file.close();
        }
}




