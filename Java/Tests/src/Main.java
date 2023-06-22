
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    //declaring variables
        int age;
        double marks;
        float hight;
        boolean adult;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter You age:");
        age=input.nextInt();
        System.out.print("Enter You marks:");
        marks=input.nextDouble();
        System.out.print("Enter your hight:");
        hight=input.nextFloat();
        System.out.print("Are you adult(True or False):");
        adult=input.nextBoolean();
        System.out.println("Your Entered details are:");
        System.out.println("Age:"+age);
        System.out.println("Marks:"+marks);
        System.out.println("Hight:"+hight);
        System.out.println("Adult:"+adult);
    }
}