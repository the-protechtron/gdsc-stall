import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter two numbers:");
        double num1, num2;
        try {
            num1 = scanner.nextDouble();
            num2 = scanner.nextDouble();
        } catch (Exception e) {
            System.out.println("Invalid input!");
            return;
        }
        
        System.out.println("Select operation (+, -, *, /):");
        char operation = scanner.next().charAt(0);
        
        double result;
        switch(operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    System.out.println("Cannot divide by zero!");
                    return;
                }
                break;
            default:
                System.out.println("Invalid operation!");
                return;
        }
        
        System.out.println("Result: " + result);
    }
}
