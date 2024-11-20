
package lab;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class  Lab extends JFrame{
private JButton jbtEnlarge =new JButton("Enlarge");
private JButton jbtShrink =new JButton ("Shrink");
private BallCanvas canvas=new BallCanvas();
public Lab(){
    JPanel panel =new JPanel();
    panel.add(jbtEnlarge);
     panel.add(jbtShrink);
     
     this.add(canvas,BorderLayout.CENTER);
     this.add(panel,BorderLayout.SOUTH);
     
     jbtEnlarge.addActionListener(new ActionListener(){
         public void actionperformed(ActionEvent e){
             canvas.shrink();
         }
     });
     
     jbtShrink.addActionListener(new ActionListener(){
public void actionPerformed(ActionEvent e){
    canvas.shrink();
}}
);

     
     
    
     
     
     
     
}
    
    public static void main(String[] args) {
        JFrame frame=new Lab();
        frame.setTitle("ControllBall");
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       
    }
    
}
