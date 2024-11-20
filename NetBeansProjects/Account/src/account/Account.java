
package account;
import java.util.Scanner;


 class Atm{
   private  int tk;
   private String pass;
   private String id;
   public Atm(){
        System.out.println("CREAT AN ACCOUNT\n\n");
       Scanner in=new Scanner(System.in);
       System.out.println("Enter id:");
       id=in.nextLine();
      
       System.out.println("Enter ballence:");
       tk=in.nextInt(); 
       for(int i=0;tk<100;i++)
       {
         System.out.println(" Sorry insuffient balence  Re-enter ballence:");
       tk=in.nextInt(); 
       }
       System.out.println("Enter pass:");
       pass=in.next();
       
   }
   
   public void with_d()
   { 
       String p1;
       int tk1,y;
       Scanner in=new Scanner(System.in);
       int v;
       System.out.println("Enter pass:");
       p1=in.nextLine();
         v = pass.compareTo( p1 );
        if( v == 0)
        { 
            System.out.println("Enter ballence:");
            tk1 =in.nextInt(); 
            if(tk-tk1>0)
            {
                tk = tk - tk1;
                 System.out.println("Your current  ballence is:"+tk);
            }
            else
            {
                System.out.println("You have to keep atlest 100 tk");  
            }
                
        }
        else{
             System.out.println("Sorry worng password!!!!");
        }
   }
  
   
   public void Deposit()
   {
     String p1;
       int tk1,y;
       Scanner in=new Scanner(System.in);
       int v;
       System.out.println("Enter pass:");
       p1=in.nextLine();
         v = pass.compareTo( p1 );
        if( v == 0)
        { 
            System.out.println("Enter ballence:");
            tk1 =in.nextInt(); 
            tk=tk+tk1;
            System.out.println("Your current  ballence is:"+tk);
        }
        else{
             System.out.println("Sorry worng password!!!!");
        }
            
   }
  
   public void Show_b()
   {
     String p1;
       int tk1,y;
       Scanner in=new Scanner(System.in);
       int v;
       System.out.println("Enter pass:");
       p1=in.nextLine();
         v = pass.compareTo( p1 );
        if( v == 0) 
        {
           System.out.println("Your current  ballence is:"+tk);
        }
         else{
             System.out.println("Sorry worng password!!!!");
        }
        
   }
   
   public String id1()
   {
       return id;
       
       
   }
}







public class Account {

   
    public static void main(String[] args) {
        int n,o;
        String q,p;
         Scanner in=new Scanner(System.in);
        System.out.println("Enter the number of account want to creat\n"); 
      n=in.nextInt();
      int i,j,e;
      //for(i=0;i<n;i++)
      
          
      
     Atm[] a1= new Atm[n];
    
     for(i=0;i<n;i++){
         a1[i]= new Atm();
     }
     
     for(i=0;i<n;i++)
     {
         System.out.println("Enter id to asscss"); 
         p=in.next();
         q=a1[i].id1();
         o=q.compareTo(p);
         if(o==0){
             
          for(e=0;;e++)
          {
        System.out.println("\n\n\nEnter 1 for cheak ballence"); 
        System.out.println("Enter 2 for with draw"); 
        System.out.println("Enter 3 for Deposite"); 
        System.out.println("Enter 4 for Exit"); 
        j=in.nextInt();
        if(j==1)
          a1[i].Show_b();
        else if(j==2)
         a1[i].with_d();
        else if(j==3)
         a1[i].Deposit();
        else
            break;
          }
         }
         else
             System.out.println("Sorry the id doesn't exit!!!"); 
             
     }
        
        
    }    
}
