package mouseclick;
import javax.swing.*;
import java.awt.event.*;

public class Mouseclick extends JFrame{
  public Mouseclick (){
      
    JButton ob1=new JButton ("Ok") ;
    JButton ob2= new JButton ("Cancel") ;
    JPanel panel = new JPanel();
    panel.add(ob1);
    panel.add(ob2);
    add(panel);
    OkListenerClass linsener1=new  OkListenerClass ();
    CancelListenerClass linsener2=new  CancelListenerClass ();
    ob1.addActionListener(linsener1);
    ob2.addActionListener(linsener2);
    
}
  class OkListenerClass implements  ActionListener {
    
    @Override
    public void actionPerformed(ActionEvent S){
        System.out.println("ok button click");
        }
  }
   class CancelListenerClass implements  ActionListener {
    
    @Override
    public void actionPerformed(ActionEvent S){
        System.out.println("Cancel button click");
    }
}

    public static void main(String[] args) {
        
        
        JFrame frame= new  Mouseclick();
        frame.setTitle("Mouseclick");
        frame.setSize(200, 150);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
       }
  
}
