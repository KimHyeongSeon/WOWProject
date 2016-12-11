package kr.ac.sunmoon;

public class SquareThread extends Thread 
{
	private Square square;
	private MyJpanel panel;
	
	public void setSquare(Square square) 
	{
		this.square = square;
	}
	public void setMyJPanel(MyJpanel panel) 
	{
		this.panel = panel;
	}
	
	public void run()
	{
		while (true)
		{
			try
			{
				sleep(10);
			}
			catch(InterruptedException e)
			{
				return;
			}
			square.move();
			panel.repaint();			
		}	
	}
}
