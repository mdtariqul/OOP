
public class inte {
    public static void main(String [] args ){
        C ob=new C();
        ob.show();
    }
}
interface A {
    int c =10;
     void show();
}
class B{
   final static int d=20;
}


class D{
   final static int t=20;
}
class C extends B    implements A{
    
    int sum;
    C(){
        sum=c+d;
    }
  public void show(){
        System.out.println(sum);
    }
}
