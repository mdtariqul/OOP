
package boutton;
import javax.swing .*;
//import java.awt.*;

public class Boutton {

   
    public static void main(String[] args) {
       JFrame frame=new JFrame("hi");
       frame.setSize(1000,1000);
       frame.setVisible(true);
       frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       
       JPanel panel= new JPanel();
       frame.add(panel);
       
       JButton button= new JButton("ok",null);
       button.setSize(100,100);
       button.setVisible(true);
       panel.add(button);
       
        
       
    }
    
}
