package kr.ac.sunmoon;

import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.util.Vector;

import javax.swing.JPanel;

public class MyJPanel extends JPanel
{
	private Vector<Circle> circle = new Vector<Circle>();
	
	public void addCircle(Circle circle)
	{
		this.circle.addElement(circle);
	}
	public void resetCircle() {
		circle.removeAllElements();
	}
	public void paintComponent (Graphics g)
	{
		super.paintComponent(g);
		
		for (int i = 0; i < circle.size(); i++)
		{
			
			Circle c = circle.get(i);
			
			int addX = 0;
			if(c.getNum().length() == 1)
			{
				addX = c.getLineLength() / 6;
			}
			
			g.setColor(c.getColor());	
			g.fillOval(c.getX() + (c.getRnum() * c.getLineLength() / 6), c.getY(), c.getLineLength(), c.getLineLength());	
			
			g.setColor(Color.BLACK);
			g.setFont(new Font("굴림", Font.PLAIN, (c.getLineLength()/2)));
			g.drawString(c.getNum(), c.getX() + addX + (c.getRnum() * c.getLineLength() / 6) + (c.getLineLength() / 5), c.getY() + ((c.getLineLength() / 2) + (c.getLineLength() / 6)));
	
			
		}		
	}
}


