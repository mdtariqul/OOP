
package exceptionhandiling;


public class Exceptionhandiling {

    
    public static void main(String[] args) {
        try{
       cheakag(0);
        }
        catch(Exception e){
            System.out.println(e);
            
        }
    }
   public static void cheakag(int n)throws invalidage{
        if(n<=0){
         // throw new invalidage("hi");
        }
        else {
            System.out.println("Your age is "+n);
        }
    }
   
   class invalidage extends Exception{
      // private static final Long serialVertionUID = 1L; 
        invalidage (String s){
            super(s);
        }
   }
}
