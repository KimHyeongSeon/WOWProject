package kr.ac.sunmoon;

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Iterator;
import java.util.StringTokenizer;
import kr.ac.sunmoon.test.Person;



public class tocken
{
 public static void main(String[] args) 
{
	 HashMap<String, Address> hm = new HashMap<String, Address>();
	  
	 String filePath = "data/Customer.csv";
	  
	 try
	 {
		 FileInputStream fstream = new FileInputStream(filePath);
		 DataInputStream in = new DataInputStream(fstream);
		 BufferedReader br = new BufferedReader(new InputStreamReader(in));
		 String strLine;
		 int rowCount = 0;
		 while ((strLine = br.readLine()) != null) 
		 {
			 if(rowCount > 0)
			 {
				 StringTokenizer tokenizer = new StringTokenizer(strLine, ",");
				 int columnCount = 0;
				 while(tokenizer.hasMoreTokens())
				 {
					 String token = tokenizer.nextToken();
					 if(columnCount == 1)
					 {
						 Address address = hm.get(token);
						 if(address == null)
						 {
							 address = new Address();	       
							 address.setCity(token);
							 address.increaseFrequency();
							 hm.put(token, address);
							 }
						 else
						 {
							 address.increaseFrequency();
							 }
						 break;
						 }
					 columnCount++;
					 }
				 }
			 rowCount++;
			 }
		 in.close();
		 Address[] addresses = new Address[hm.size()];
		 int index = 0;
		 Iterator<Address> iter = hm.values().iterator();
		 while(iter.hasNext())
		 {
			 Address address = iter.next();
			 addresses[index] = address;
			 index++;			 
			 }
		 for(int i=0; i<addresses.length; i++)
			 System.out.println(addresses[i].getCity() + ", " + addresses[i].getFrequency());	  
		 }
	 catch (Exception e)
		  {
		    System.err.println("Error: " + e.getMessage());
		  }
	 }
} 
