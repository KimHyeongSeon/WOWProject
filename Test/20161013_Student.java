package kr.ac.sunmoon;

public class Student extends Person
{
	private String studentId;
	
	public Student()
	{
		System.out.println("student");
	}
	public String getStudentId()
	{
		return studentId;
	}
	public void setStudentId(String studentId) 
	{
		this.studentId = studentId;
	}
}
