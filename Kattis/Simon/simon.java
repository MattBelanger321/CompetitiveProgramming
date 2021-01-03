import java.util.Scanner;

class Main{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
    in.nextLine();
		String[] arr = new String[n];
		for(int i = 0;i<n;i++){
			arr[i] = in.nextLine();
			if(arr[i].startsWith("Simon says ")){
				System.out.println(arr[i].substring(11));
			}
		}
	}
}