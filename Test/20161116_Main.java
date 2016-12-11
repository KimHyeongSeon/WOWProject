package kr.ac.sunmoon;

public class Main 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		BankBook bankBook = new BankBook();
		
		BankThread thread_1  = new BankThread();
		thread_1.setName("Thread 1");
		thread_1.setBankBook(bankBook);
		thread_1.setSalary(50);
		
		BankThread thread_2 = new BankThread();
		thread_2.setName("Thread 2");
		thread_2.setBankBook(bankBook);
		thread_2.setSalary(70);
		
		thread_1.start();
		thread_2.start();
		

	}

}
