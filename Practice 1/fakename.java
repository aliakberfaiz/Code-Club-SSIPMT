
import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
     Scanner s=new Scanner(System.in);
     String agentName=s.next();
     char a[]=agentName.toCharArray();
     ArrayList<Character>list= new ArrayList<Character>();
     for(int i=0;i<agentName.length();i++){
         list.add(a[i]);
     }
     char temp[]=new char[agentName.length()];
     for(int i=0;i<agentName.length();i++)
     {
         int middle=(list.size()-1)/2;
        temp[i]=list.get(middle);
        list.remove(middle);
         
     }
     String fakeName=new String(temp);
     System.out.println(fakeName);
    }
}
