import java.util.Scanner;

public class Autori {

    public static void main(String[] args) {
	    Scanner in = new Scanner(System.in);
	    String line = in.nextLine();
	    String out = line.substring(0,1);
	    int s = line.indexOf('-',0);
	    while(s!=-1){
	        out = out + line.substring(s+1,s+2);
			s = line.indexOf('-',s+1);
        }
	    System.out.println(out);
    }
}
