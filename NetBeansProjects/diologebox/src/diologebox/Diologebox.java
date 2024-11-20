
package diologebox;
import javax.swing.JOptionPane;

public class Diologebox {

    public static void main(String[] args) {
     
       
      String x=JOptionPane.showInputDialog(null, "inter number ", "hi", JOptionPane.QUESTION_MESSAGE);
      int a=Integer.parseInt(x);
         String y=JOptionPane.showInputDialog(null, "inter number ", "hi", JOptionPane.QUESTION_MESSAGE);
         int b=Integer.parseInt(y);
          JOptionPane.showMessageDialog(null,"result : "+ (a+b), "result", JOptionPane.QUESTION_MESSAGE);
    }
    
}
