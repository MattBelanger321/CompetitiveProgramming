import java.util.Scanner;

class phd{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String line;
		for(int i = 0;i<n;i++){
			line = in.nextLine();
			if(line.indexOf('=') != -1)
				System.out.println("skipped");
			int a = Integer.parseInt(line.substring(0,line.indexOf('+')));
			int b = Integer.parseInt(line.substring(line.indexOf('+')+1));
			System.out.println(a+b);
		}
	}
}