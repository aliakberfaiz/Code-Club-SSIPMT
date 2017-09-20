
import java.util.*;
import java.lang.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
      
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int[] numbers=new int[1000];
        ArrayList <String> list=new ArrayList<String>();
        for (int i = 0; i < N; i++) {
        ///    System.out.println("hello world");
        numbers[i]=s.nextInt();
        
        list.add(String.valueOf(numbers[i]));
    
        }
        Collections.sort(list,new condition());
        String value=list.get(0);
        if(value.equals("0"))
        {
            System.out.println("0");
        }
        else{
            for(int i=0;i<list.size();i++)
            {
                System.out.print(list.get(i));
            }
        }
      
      //  System.out.println("Hello World!");
    }
    static class condition implements Comparator<String>{
        public int compare(String a,String b){
            String left=a+b;
            String right=b+a;
            return -(left.compareTo(right));
            }
        
    }
}
