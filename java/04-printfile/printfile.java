import java.util.Scanner;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class printfile
{
    public static void main(String[] args)
    {
  	Scanner scanner = new Scanner(System.in);

	System.out.println("Enter the complete path to a file:");
	String pathstr = scanner.nextLine();
	Path path = Path.of(pathstr);

	try {
	    String text = Files.readString(path);
	    System.out.println("The size of that file is: " + text.length());
	    System.out.println("Read in:\n" + text);
	}
	catch  (IOException e) {
	    System.out.println("An exception occured");
	    System.out.println(e.getMessage());
	}
    }
}
