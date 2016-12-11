package kr.ac.sunmoon;

public class Address 
{
	private String city;
	private int frequency = 0;
	
	public void setCity(String city)
	{
		this.city = city;
	}
	
	public String getCity()
	{
		return city;
	}
	
	public void increaseFrequency()
	{
		frequency += 1;
	}
	
	public int getFrequency()
	{
		return frequency;
	}
}
