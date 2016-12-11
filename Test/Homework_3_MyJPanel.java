package kr.ac.sunmoon;

import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JPanel;

public class MyJpanel extends JPanel 
{
	private Square square;
	
	public void setSQuare(Square square)
	{
		this.square = square;
	}

	/**
	 * Create the panel.
	 */
	public void paintComponent (Graphics g)
	{
		super.paintComponent(g);
		
		if (square != null)
		{
			g.setColor(square.getColor());
			g.fillRect(square.getX(), square.getY(square.getX()), square.getLineLength(), square.getLineLength());
			
			g.setColor(Color.BLACK);
			g.drawLine(0, square.getY(0), getWidth(), square.getY(getWidth()));
			
			g.setColor(Color.RED);
			double nextA = -1 * (1 / square.getA());
			double nextB = -1 * nextA * square.getX() + square.getY(square.getX());
			g.drawLine(0, (int)Math.round(nextA * 0 + nextB), getWidth(), (int)Math.round(nextA * getWidth() + nextB));
			
		}
	}

}
