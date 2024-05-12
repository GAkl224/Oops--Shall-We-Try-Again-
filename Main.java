import java.util.Scanner;

public class Main {
    //prompt the user for input and validate it
    static int prompt(int lower_bound, int upper_bound, String prompt_message, String error_message) {

        try (Scanner scanner = new Scanner(System.in)) {

            int value;
            boolean input_valid = false;

            //until valid input is received
            do {
                System.out.println(prompt_message);

                while (!scanner.hasNextInt()) {

                    System.out.println(error_message);

                    System.out.println(prompt_message);

                    scanner.next();
                }
                value = scanner.nextInt();

                // if input is valid
                if (value < lower_bound || value > upper_bound) {
                    
                    System.out.println(error_message);
                } else {
                    input_valid = true;
                }
            } while (!input_valid);

            return value;
        }
    }

    public static void main(String[] args) {
       
        int value = prompt(0, 100, "Please enter a value", "Your value is invalid");
        System.out.println("The value chosen by the user is " + value);
    }
}

