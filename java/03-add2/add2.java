import java.util.Scanner;

public class add2 
{
    public static void main(String[] args)
    {
	int var1, var2, sum;
        Scanner scanner = new Scanner(System.in);

	System.out.println("Enter a number");
	var1 = scanner.nextInt();
	System.out.println("Enter another number");
	var2 = scanner.nextInt();
	sum = var1 + var2; 
	System.out.println("The sum is " + sum);
    }
}
