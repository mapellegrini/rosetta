import java.util.*;

public class listofstrings
{
    public static void main(String[] args)
    {
	String inputstr = "";
	Scanner scanner = new Scanner(System.in);
	List<String> userlist = new ArrayList<String>();
	
	while (!inputstr.equals("-1")){
	    System.out.println("Enter a string (Enter -1 to quit): ");
	    inputstr = scanner.nextLine().strip();
	    userlist.add(inputstr);
	    System.out.println("User entered strings: " + userlist);
	}
    }
}

