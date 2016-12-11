package kr.ac.sunmoon;

public class BankThread extends Thread
{
	private BankBook bankBook;
	private int salary;
	
	
	public void setBankBook(BankBook bankBook) 
	{
		this.bankBook = bankBook;
	}
	public void setSalary(int salary) 
	{
		this.salary = salary;
	}
	
	public void run()
	{
		int i = 0;
		
		while (i < 10)
		{
			bankBook.deposit(salary);
			i++;
		}
	}
	

}
