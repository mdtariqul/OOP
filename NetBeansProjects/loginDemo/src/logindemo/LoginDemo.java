/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package logindemo;

/**
 *
 * @author User
 */
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class LoginDemo extends JFrame implements ActionListener {
    JPanel  pane1;
    JLabel user_lable ,pass_label,message;
    JTextField  username_text;
    JPasswardField password_text;
    JButton submit,cancel;
    LoginDemo(){
     user_lable=new JLabel();
     user_lable.setText("user name=");
     username_text =new JTextField();
     pass_label =new JLabel();
     pass_label.setText("password=");
     password_text=new JPasswordField();
     
     submit=new JButton("submit");
     panel = new JPanel (new GridLayout(3,1));
     
        
        
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    }
    
}
