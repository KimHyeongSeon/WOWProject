package kr.ac.sunmoon;

import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.GridLayout;
import javax.swing.JTextField;
import javax.swing.UIManager;
import javax.swing.UnsupportedLookAndFeelException;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JLabel;
import javax.swing.DefaultComboBoxModel;
import java.awt.FlowLayout;
import javax.swing.JScrollPane;
import javax.swing.BoxLayout;
import javax.swing.border.TitledBorder;
import java.awt.Toolkit;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Vector;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.Color;

public class SF extends JFrame 
{

	private JPanel contentPane;
	private JTextField txtKeyword;
	private Vector<Customer> vecCustomer;

	
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) 
	{
		EventQueue.invokeLater(new Runnable() 
		{
			public void run() 
			{
				try 
				{
					SF frame = new SF();
					frame.setVisible(true);
				} 
				catch (Exception e) 
				{
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public SF() 
	{
		setIconImage(Toolkit.getDefaultToolkit().getImage("C:\\Users\\YYH\\Desktop\\\uAC1D\uCCB4\\Rehearsal\\src\\kr\\ac\\sunmoon\\image\\logo.png"));
		readCustomerFile();
		
		try 
		{
			UIManager.setLookAndFeel("com.jtattoo.plaf.smart.SmartLookAndFeel");
		}
		catch (ClassNotFoundException e) 
		{
			e.printStackTrace();
		} 
		catch (InstantiationException e) 
		{
			e.printStackTrace();
		} 
		catch (IllegalAccessException e) 
		{
			e.printStackTrace();
		}
		catch (UnsupportedLookAndFeelException e) 
		{
			e.printStackTrace();
		}			
		
		setTitle("\uACE0\uAC1D \uAC80\uC0C9");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 350);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		contentPane.setLayout(new BorderLayout(0, 0));
		setContentPane(contentPane);
		
		JPanel northPanel = new JPanel();
		contentPane.add(northPanel, BorderLayout.NORTH);
		northPanel.setLayout(new GridLayout(0, 1, 0, 0));
		
		JPanel keywordPanel = new JPanel();
		northPanel.add(keywordPanel);
		keywordPanel.setLayout(new BorderLayout(0, 0));
		
		
		txtKeyword = new JTextField();
		keywordPanel.add(txtKeyword, BorderLayout.CENTER);
		txtKeyword.setColumns(10);
		
		
		JButton btnSearch = new JButton("\uAC80\uC0C9");			
		keywordPanel.add(btnSearch, BorderLayout.EAST);		

		
		JPanel optionPanel = new JPanel();
		FlowLayout fl_optionPanel = (FlowLayout) optionPanel.getLayout();
		fl_optionPanel.setAlignment(FlowLayout.LEFT);
		northPanel.add(optionPanel);
		
		JCheckBox cboxMale = new JCheckBox("\uB0A8\uC131");
		optionPanel.add(cboxMale);
		
		JCheckBox cboxFemale = new JCheckBox("\uC5EC\uC131");
		optionPanel.add(cboxFemale);
		
		JComboBox cboxOption = new JComboBox();
		cboxOption.setModel(new DefaultComboBoxModel(new String[] {"\uC774\uB984", "\uAC70\uC8FC\uC9C0"}));
		optionPanel.add(cboxOption);
		
		JScrollPane scrollPane = new JScrollPane();
		contentPane.add(scrollPane, BorderLayout.CENTER);		
		
		
		JPanel resultPanel = new JPanel();
		resultPanel.setBorder(new TitledBorder(UIManager.getBorder("TitledBorder.border"), "\uAC80\uC0C9 \uACB0\uACFC", TitledBorder.LEADING, TitledBorder.TOP, null, new Color(0, 0, 0)));
		scrollPane.setViewportView(resultPanel);
		resultPanel.setLayout(new BoxLayout(resultPanel, BoxLayout.Y_AXIS));
		
		JPanel panel = new JPanel();
		resultPanel.add(panel);
		
		
		btnSearch.addActionListener(new ActionListener() 
		{			
			@Override
			public void actionPerformed(ActionEvent e) 
			{
				// TODO Auto-generated method stub
				resultPanel.removeAll();
		
				String keyword = txtKeyword.getText();
				boolean isMale = cboxMale.isSelected();
				boolean isFemale = cboxFemale.isSelected();
				int searchOption = cboxOption.getSelectedIndex();
				if(isMale || isFemale)
				{
					for(int i=0; i<vecCustomer.size(); i++)
					{
						Customer customer = vecCustomer.get(i);
						String gender = customer.getGender();
						
						if((gender.equals("남성") && isMale) || (gender.equals("여성") && isFemale))
						{
							String option;
							if(searchOption == 0)
								option = customer.getName();
							else
								option = customer.getAddress();
							
							if(option.indexOf(keyword) >= 0)
							{
								JLabel lblResult = new JLabel("이름: " + customer.getName() + ", 성별: " + customer.getGender() + ", 주소: " + customer.getAddress());
								resultPanel.add(lblResult);
							}
						}
					}
				}
				resultPanel.revalidate();
				resultPanel.repaint();
			}
		});
	}
	
	
	public void readCustomerFile()
	{
		String filepath = "data/customer.csv";
		vecCustomer = new Vector<Customer>();


		try
		{
			FileInputStream fstream = new FileInputStream(filepath);
			InputStreamReader is = new InputStreamReader(fstream);
			BufferedReader br = new BufferedReader(is);
			br.readLine();
			
			while(true)
			{
				String line = br.readLine();
					
				if(line == null)
				{
					break;
				}
				Customer customer = new Customer();
				StringTokenizer tokenizer = new StringTokenizer(line,  ",");
				int columCounter = 0;
				while(tokenizer.hasMoreTokens())
				{							
					String token = tokenizer.nextToken();

					if (columCounter == 0)							
					{
						customer.setGender(token);
					}
					else if (columCounter == 1)
					{
						customer.setName(token);
					}
					else if (columCounter == 2)
					{
						customer.setAddress(token);
					}

					columCounter++;					
				}
				vecCustomer.add(customer);
				
			}
			
			br.close();
			is.close();
			fstream.close();
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}

	}

}
