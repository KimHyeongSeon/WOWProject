package kr.ac.sunmoon;

import java.util.StringTokenizer;

public class FileLoadingTest 
{
	public static void main(String[] args)
	{
		String str = "S, James, 2015001, Computer Science, 2, 3.5";
		
		StringTokenizer tokenizer = new StringTokenizer(str, "e");
		
		while(tokenizer.hasMoreTokens())
		{
			String token = tokenizer.nextToken();
			System.out.println(token);
		}
	}

}
