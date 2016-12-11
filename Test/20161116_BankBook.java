package kr.ac.sunmoon;

public class BankBook 
{
	private int balance;
	
	public synchronized void deposit(int salary)
	{
		int sum = balance;
		Thread.yield();
		
		sum = sum + salary;
		balance = sum;
		
		System.out.println(Thread.currentThread().getName() + ": " + balance);
	}

}
