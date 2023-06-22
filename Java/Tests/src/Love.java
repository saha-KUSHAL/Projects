import java.util.Scanner;

public class Love {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s;
        System.out.print("Enter the name of your Partner: ");
        s = input.nextLine();
        System.out.println(s + " i love you babe (^U^)");

        try {
            Thread.sleep(4000);
        } catch (InterruptedException e) {
            System.out.println("Sleep interrupted!");
        }

        System.out.println("I am sorry (||W||)");

        try {
            Thread.sleep(4000);
        } catch (InterruptedException e) {
            System.out.println("Sleep interrupted!");
        }

        System.out.println("I Love you love you love you love you");
    }
}

