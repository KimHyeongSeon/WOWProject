package kr.ac.sunmoon.test;

import java.util.HashMap;
import java.util.Iterator;

public class Main {

	public static void main(String[] args) 
	{
		HashMap<String, Person> hm = new HashMap<String, Person>();
		
		Person p1 = new Person();
		p1.setName("Kim");
		p1.setAge(22);
		hm.put(p1.getName(), p1);
		
		Person p2 = new Person();
		p2.setName("Lee");
		p2.setAge(23);
		hm.put(p2.getName(), p2);
		
		Person p3 = new Person();
		p3.setName("Kim");
		p3.setAge(30);
		hm.put(p3.getName(), p3);
		
		Person[] persons = new Person[hm.size()];
		int index = 0;
		Iterator<Person> iter = hm.values().iterator();
		while(iter.hasNext())
		{
			persons[index] = iter.next();
			index++;
		}
		
		for(int i=0; i<persons.length; i++)
			System.out.println(persons[i].getName() + ", " + persons[i].getAge());
	}
}
