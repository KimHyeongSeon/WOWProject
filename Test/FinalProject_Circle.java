package kr.ac.sunmoon;

import java.awt.Color;

public class Circle 
{
	private int x;
	private int y;
	private int LineLength;
	private Color color;
	private String num;
	private int Rnum;
	
	
	public int getRnum() 
	{
		return Rnum;
	}
	public void setRnum(int rnum) 
	{
		Rnum = rnum;
	}
	public int getX() 
	{		
		return x;
	}
	public void setX(int x) 
	{
		this.x = x;
	}
	public int getY() 
	{
		return y;
	}
	public void setY(int y) 
	{
		this.y = y;
	}
	public int getLineLength() 
	{
		return LineLength;
	}
	public void setLineLength(int lineLength) 
	{
		LineLength = lineLength;
	}
	public Color getColor() 
	{
		return color;
	}
	
	public void setColor(Color color) 
	{
		this.color = color;
	}
	public String getNum() 
	{
		return num;
	}
	public void setNum(String num) 
	{
		this.num = num;
	}
	
	
}
