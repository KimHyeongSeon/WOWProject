package kr.ac.sunmoon;

import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;

import javax.swing.JPanel;

public class TimerRunnable implements Runnable 
{
	private int second = 0;
	@Override
	public void run() 
	{
		// TODO Auto-generated method stub
		while (true)
		{
			System.out.println(second + "sec.");
			second++;
			
			try
			{
				Thread.sleep(10000);
				
				
						
			}
			catch (InterruptedException e)
			{
				return;
			}
		}
		
	}
	

}
