package kr.ac.sunmoon;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.border.LineBorder;

public class MainFrame extends JFrame {

	private JPanel contentPane;
	private SquareThread thread;
	
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					MainFrame frame = new MainFrame();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public MainFrame() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		contentPane.setLayout(new BorderLayout(0, 0));
		setContentPane(contentPane);
		
		JButton btnCreate = new JButton("Create a ball");
		contentPane.add(btnCreate, BorderLayout.NORTH);
		
		final MyJpanel panel = new MyJpanel();
		panel.setBorder(new LineBorder(new Color(0, 0, 0)));
		contentPane.add(panel, BorderLayout.CENTER);
		
		btnCreate.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				Square square = new Square();
				
				Random random = new Random();
				int width = panel.getWidth();
				int height = panel.getHeight();
				int gap = 10;
				
				int x1 = random.nextInt(width-2*gap);
				int y1 = random.nextInt(height-2*gap);
				x1 += gap;
				y1 += gap;
				
				int max;
				if(width-x1 < height-y1)
					max = width-x1;
				else
					max = height-y1;
				
				int min = 5;
				 
				int lineLength = (int) (Math.random() * (max - min + 1)) + min;
				
				Color color = new Color(random.nextInt(256), random.nextInt(256), random.nextInt(256));
				
				int x2, y2;
				while(true)
				{
					x2 = random.nextInt(width-2*gap);
					y2 = random.nextInt(height-2*gap);
					x2 += gap;
					y2 += gap;
					
					double distance = Math.sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
					if(distance > 0)
						break;
				}
				
				double a = (double)(x1 - x2) / (y1 - y2);
				double b = y1 - a*x1;
				
				boolean xMovementDirection;
				if(random.nextInt(2) == 0)
					xMovementDirection = true;
				else
					xMovementDirection = false;
				
				square.setX(x1);
				
				square.setLineLength(lineLength);
				square.setColor(color);
				square.setA(a);
				square.setB(b);
				square.setxMovementDirection(xMovementDirection);
				square.setMyJpanel(panel);
				
				panel.setSQuare(square);
				panel.repaint();
				
				if(thread != null)
				{
					thread.interrupt();
					thread = null;
				}
				thread = new SquareThread();
				thread.setSquare(square);
				thread.setMyJPanel(panel);
				thread.start();
			}
		});
	}
}
