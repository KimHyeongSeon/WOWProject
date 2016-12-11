package kr.ac.sunmoon;

public class Person 
{
	private String name;
	protected int age;
	public String nickName;
	
	public Person()
	{
		System.out.println("person123");
	}
	
	
	public String getName() 
	{
		return name;
	}
	public void setName(String name) 
	{
		this.name = name;
	}
	public int getAge() 
	{
		return age;
	}
	public void setAge(int age) 
	{
		this.age = age;
	}
	public String getNickName() 
	{
		return nickName;
	}
	public void setNickName(String nickName) 
	{
		this.nickName = nickName;
	}
	
	
	
	
}

	
