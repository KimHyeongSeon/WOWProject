package kr.ac.sunmoon;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStreamReader;
//import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) 
	{
		String filePath = "data/Customer.csv";
		Address[] addresses = new Address[8];
		for(int i = 0; i < addresses.length; i++) {
			addresses[i] = new Address();
		}
		
		addresses[0].setCity("서울");
		addresses[1].setCity("울산");
		addresses[2].setCity("대구");
		addresses[3].setCity("아산");
		addresses[4].setCity("광주");
		addresses[5].setCity("목포");
		addresses[6].setCity("대전");
		addresses[7].setCity("천안");
		
//		HashMap<String,Address> customerHashMap= new HashMap<String,Address>();
		
		try {
			FileInputStream fis = new FileInputStream(filePath);
			InputStreamReader is = new InputStreamReader(fis);
			BufferedReader br = new BufferedReader(is);
			br.readLine();
			while(true) {
				String line = br.readLine();
				if(line == null) break;
				StringTokenizer tokenizer = new StringTokenizer(line,",");
				tokenizer.nextToken();
				String city = tokenizer.nextToken();
				for(Address addr : addresses) {
					if(addr.getCity().equals(city)) {
						addr.increaseFrequency();
					}
				}
			}
			fis.close();
			is.close();
			br.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		for(int i = 0; i< addresses.length; i++) {
			for(int j = i; j < addresses.length; j++) {
				if(addresses[i].getFrequency() < addresses[j].getFrequency()) {
					Address addrTmp = addresses[i];
					addresses[i] = addresses[j];
					addresses[j] = addrTmp;
				}
			}
		}
		
		for(int i = 0; i < addresses.length; i++) {
			System.out.println(addresses[i].getCity() + ": " + addresses[i].getFrequency());
		}
	}
}
