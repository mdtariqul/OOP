package thread;
import java.lang.Runnable;

public class Threads {
    public static void main(String[] args) {
        printchar printA=new printchar('a',100);
        printchar printB=new printchar('b',100);
        printnum num=new printnum(100);
        Threads t1=new Threads(printA);
        Threads t2=new Threads(printB);
        Threads t3=new Threads(num);
        t1.start();
        t2.start();
        t3.start();
        
           }
}
class printchar implements Runnable
{
     private int n;
     private char s;
     public printchar(char c,int t)
     {
         s=c;
         n=t;
     }
     public void run()
     {
         for(int i=0;i<n;i++)
         {
            System.out.println(s);
         }
     }
}
class printnum {
    private int n;
    public printnum(int t)
    {
        n=t;
    }
    public void run()
    {
        for(int i=0;i<n;i++)
        {
            System.out.println(i+1);
        }
    }
}
