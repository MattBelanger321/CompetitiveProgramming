import java.util.ArrayList;
import java.util.Hashtable;
import java.util.Scanner;

public class Bacon {
    public static void main(String args[]){
        int n;
        Scanner in = new Scanner(System.in);
        String line;
        Hashtable<String, ArrayList<String>> table = new Hashtable<>();
        String name;
        String item;
        int s;
        while(in.hasNext()){
            n = Integer.parseInt(in.nextLine());
            s = 0;
            for(int i = 0;i<n;i++) {
                line = in.nextLine();
                s = line.indexOf(' ', s);

                name = line.substring(0, s);
                s = line.indexOf(' ', s);
                while(s!=-1){
                    item = line.substring(0, s);
                    if(table.containsKey(item)){
                        table.get(item).add(name);
                    }else{
                        table.put(item,new ArrayList<>());
                        table.get(item).add(name);
                    }
                    s = line.indexOf(' ', s);
                }
            }
            printTable(table);
            table.clear();
            System.out.println();
        }
    }

    private static void printTable(Hashtable<String, ArrayList<String>> table) {
        for(String str: table.keySet()){
            System.out.print(str + " ");
            for(String item : table.get(str)){
                System.out.print(item + " ");
            }
            System.out.println();
        }
    }
}
