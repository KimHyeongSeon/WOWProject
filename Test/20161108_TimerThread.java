package kr.ac.sunmoon;

public class TimerThread extends Thread
{
	private int second = 0;
	
	public void run()
	{
		while (true)
		{
			System.out.println(second + "sec.");
			second++;
			
			try
			{
				sleep(1000);
			}
			catch (InterruptedException e)
			{
				return;
			}
		}
		
	}

}
