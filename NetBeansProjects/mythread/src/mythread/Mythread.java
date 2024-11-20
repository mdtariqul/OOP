package mythread;


public class Mythread {
    public static void main(String[] args) {
        printchar printA=new printchar('a',100);
        printchar printB=new printchar('b',100);
        printnum Num=new printnum (100);
       // Thread t1=new Thread(printA);
       // Thread t2=new Thread(printB);
       // Thread t3 =new Thread(Num);
        printA.start();
        printB.start();
        Num.start();
        
           }
}
class printchar /*implements Runnable*/extends Thread
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
class printnum extends Thread{
    private int o;
    public printnum(int t)
    {
        o=100;
    }
    public void run()
    {
        for(int i=0;i<o;i++)
        {
            System.out.println(i+1);
        }
    }
}
