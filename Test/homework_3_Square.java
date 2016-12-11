package kr.ac.sunmoon;

import java.awt.Color;

public class Square 
{
	private int x;
	private int lineLength;
	private Color color;
	
	private double a;
	private double b;
	
	private boolean xMovementDirection;
	
	private MyJpanel panel;
	
	public void setMyJpanel(MyJpanel panel)
	{
		this.panel = panel;
	}
	
	
	public boolean isxMovementDirection() 
	{
		return xMovementDirection;
	}
	public void setxMovementDirection(boolean xMovementDirection) 
	{
		this.xMovementDirection = xMovementDirection;
	}
	public void move()
	{
		int nextX = x;
		if (xMovementDirection)
		{
			nextX += 1;
		}
		else
		{
			nextX -= 1;
		}
		
		int nextY = getY(nextX);
		int nextX_ = nextX + lineLength;
		int nextY_ = nextY + lineLength;
		
		int state = 1;
		if (nextX <= 0)
		{
			state *= 2;			
		}
		if (nextY <= 0)
		{
			state *= 3;
		}
		if (nextX_ >= panel.getWidth())
		{
			state *= 5;
		}
		if (nextY_ > panel.getHeight())
		{
			state *= 7;
		}
			
		if (state == 6 || state == 15 || state == 14 || state == 35)
		{
			System.out.println("At the corner");
			xMovementDirection = !xMovementDirection;
		}
		else if (state == 3 || state == 7)
		{
			System.out.println("On the top or bottom");
			double newA = -getA();
			double newB = -1 * newA * getX() + getY(x);
			a = newA;
			b = newB;
		}
		else if (state == 2 || state == 5)
		{
			System.out.println("On the most left or right");
			xMovementDirection = !xMovementDirection;
			double newA = -getA();
			double newB = -1 * newA * getX() + getY(x);
			a = newA;
			b = newB;
		}
		else
		{
			System.out.println("In the panel");
		}
		x = nextX;
		
	}
	public double getA()
	{
		return a;
	}
	public void setA(double a) 
	{
		this.a = a;
	}
	public double getB() 
	{
		return b;
	}
	public void setB(double b) 
	{		
		this.b = b;
	}
	public Color getColor() 
	{
		return color;
	}
	public void setColor(Color color) 
	{
		this.color = color;
	}
	public int getX() 
	{
		return x;
	}
	public void setX(int x) 
	{
		this.x = x;
	}
	public int getY(int x)
	{
		return (int) Math.round(a * x + b);
	}
	public int getLineLength() 
	{
		return lineLength;
	}
	public void setLineLength(int lineLength) 
	{
		this.lineLength = lineLength;
	}
	

}
