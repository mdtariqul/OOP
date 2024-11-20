
package Object.array;
import java.util.Scanner;


 class student {
   
   private String name=new String();
   private int roll;
   private float cg;
    public student() 
     {
         roll=0;
         cg=0;
         name=null;        
     }
 public student (int i){
        Scanner in=new Scanner(System.in);
        System.out.println("Enter name");
        name=in.nextLine(); 
        System.out.println("Enter roll");
        roll=in.nextInt();
        System.out.println("Enter CGPA");
        cg =in.nextFloat();
    }
    
    public void Prinrt()
    {
     System.out.println("Name :"+name);
    System.out.println("Roll :"+roll);
    System.out.println("CGPA :"+cg);
}

 }
    
 public class ObjectArray{
   
public static void main (String[] args){

 student[] s = new student[5];
 for(int i=0;i<5;i++){
 s[i] = new student(i);
 }
 for (int i=0;i<s.length;i++){
 s[i].Prinrt();;
        
    }
    }
 }    

        