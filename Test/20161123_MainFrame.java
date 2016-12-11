package kr.ac.sunmoon;

import java.awt.BorderLayout;
import java.awt.EventQueue;
import java.awt.FlowLayout;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.Insets;
import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.Random;
import java.util.StringTokenizer;
import java.util.Vector;
import javax.swing.BoxLayout;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTabbedPane;
import javax.swing.JTextField;
import javax.swing.UIManager;
import javax.swing.UnsupportedLookAndFeelException;
import javax.swing.border.EmptyBorder;
import javax.swing.border.TitledBorder;
import javax.swing.border.LineBorder;
import java.awt.Color;

public class MainFrame extends JFrame 
{

	private JPanel contentPane;
	private Vector<Customer> vecCustomer;
	private JTextField txtKeyword;
	private SquareThread thread;

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
					MainFrame frame = new MainFrame();
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
	public MainFrame() 
	{
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
		
		
		
		
		setTitle("Notepad");
		setIconImage(Toolkit.getDefaultToolkit().getImage(MainFrame.class.getResource("/kr/ac/sunmoon/image/logoIcon.png")));
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		
		
		
		
		
		
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(new BorderLayout(0, 0));
		
		JTabbedPane tabbedPane = new JTabbedPane(JTabbedPane.TOP);
		contentPane.add(tabbedPane, BorderLayout.CENTER);
		
		JPanel menu1 = new JPanel();	
		tabbedPane.addTab("menu1", null, menu1, null);
		menu1.setLayout(new BorderLayout(0, 0));
		
		MyJpanel panel = new MyJpanel();
		menu1.add(panel, BorderLayout.NORTH);
		GridBagLayout gbl_panel = new GridBagLayout();
		gbl_panel.columnWidths = new int[]{0, 0};
		gbl_panel.rowHeights = new int[]{0, 0, 0};
		gbl_panel.columnWeights = new double[]{1.0, Double.MIN_VALUE};
		gbl_panel.rowWeights = new double[]{1.0, 1.0, Double.MIN_VALUE};
		panel.setLayout(gbl_panel);
		
		JPanel panel_2 = new JPanel();
		GridBagConstraints gbc_panel_2 = new GridBagConstraints();
		gbc_panel_2.insets = new Insets(0, 0, 5, 0);
		gbc_panel_2.fill = GridBagConstraints.BOTH;
		gbc_panel_2.gridx = 0;
		gbc_panel_2.gridy = 0;
		panel.add(panel_2, gbc_panel_2);
		panel_2.setLayout(new BorderLayout(0, 0));
		
		txtKeyword = new JTextField();
		panel_2.add(txtKeyword, BorderLayout.CENTER);
		txtKeyword.setColumns(10);
		
		JButton btnSearch = new JButton("\uAC80\uC0C9");
		panel_2.add(btnSearch, BorderLayout.EAST);
		
		JPanel panel_3 = new JPanel();
		FlowLayout flowLayout = (FlowLayout) panel_3.getLayout();
		flowLayout.setAlignment(FlowLayout.LEFT);
		GridBagConstraints gbc_panel_3 = new GridBagConstraints();
		gbc_panel_3.fill = GridBagConstraints.BOTH;
		gbc_panel_3.gridx = 0;
		gbc_panel_3.gridy = 1;
		panel.add(panel_3, gbc_panel_3);
		
		JCheckBox cboxMale = new JCheckBox("\uB0A8\uC131");
		panel_3.add(cboxMale);
		
		JCheckBox cboxFemale = new JCheckBox("\uC5EC\uC131");
		panel_3.add(cboxFemale);
		
		JComboBox cboxOption = new JComboBox();
		cboxOption.setModel(new DefaultComboBoxModel(new String[] {"\uC774\uB984", "\uAC70\uC8FC\uC9C0"}));
		panel_3.add(cboxOption);
		
		JScrollPane scrollPane_1 = new JScrollPane();
		menu1.add(scrollPane_1, BorderLayout.CENTER);
		
		JPanel resultPanel = new JPanel();
		resultPanel.setBorder(new TitledBorder(null, "\uAC80\uC0C9\uACB0\uACFC", TitledBorder.LEADING, TitledBorder.TOP, null, null));
		scrollPane_1.setViewportView(resultPanel);
		resultPanel.setLayout(new BoxLayout(resultPanel, BoxLayout.Y_AXIS));
		
		JPanel panelll = new JPanel();
		FlowLayout flowLayout_1 = (FlowLayout) panelll.getLayout();
		flowLayout_1.setAlignment(FlowLayout.LEFT);
		panelll.setToolTipText("");
		resultPanel.add(panelll);
		
		MyJpanel menu2 = new MyJpanel(); //menu 2		
		tabbedPane.addTab("menu2", null, menu2, null);
		menu2.setLayout(new BorderLayout(0, 0));
		
		
		JButton btnCreate = new JButton("Create a ball");
		menu2.add(btnCreate, BorderLayout.NORTH);
		
		MyJpanel paint2 = new MyJpanel();
		paint2.setBorder(new LineBorder(new Color(0, 0, 0)));
		menu2.add(paint2, BorderLayout.CENTER);
		
		
		
		
		
		readCustomerFile();
		
		btnCreate.addActionListener(new ActionListener() 
		{
			
			@Override
			public void actionPerformed(ActionEvent e) 
			{
				// TODO Auto-generated method stub
				Square square = new Square();		
				
				Random random = new Random();
				int width = panel.getWidth();
				int height = panel.getHeight();
				int gap = 10;
				
				int x1 = random.nextInt(width - 2*gap);
				int y1 = random.nextInt(height - 2*gap);
				x1 += gap;
				y1 += gap;
				
				int max;
				if (width - x1 < height - y1)
				{
					max = width - x1;					
				}
				else
				{
					max = height - y1;
				}
				
				int min = 5;
				
				int lineLength = (int) (Math.random() * (max - min + 1)) + min;
				
				Color color = new Color(random.nextInt(256), random.nextInt(256), random.nextInt(256));
				
				int x2, y2;
				while(true)
				{
					x2 = random.nextInt(width - 2*gap);
					y2 = random.nextInt(height - 2*gap);
					x2 += gap;
					y2 += gap;
					
					double distance = Math.sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
					if( distance > 0)
					{
						break;
					}
				}
				
				double a = (double) (x1 = x2) / (y1 - y2);
				double b = y1 - a * x1;
				
				boolean xMovementDirection;
				if(random.nextInt(2) == 0)
				{
					xMovementDirection = true;					
				}
				else
				{
					xMovementDirection = false;
				}
				
				
				square.setX(x1);
				square.setLineLength(lineLength);
				square.setColor(color);
				square.setA(a);
				square.setB(b);				
				square.setxMovementDirection(xMovementDirection);
				square.setMyJpanel(paint2);
				
				paint2.setSQuare(square);
				paint2.repaint();
				
				if(thread != null)
				{
					thread.interrupt();
					thread = null;
				}
				thread = new SquareThread();
				thread.setSquare(square);
				thread.setMyJPanel(paint2);
				thread.start();
				
				menu2.setSQuare(square);
				menu2.repaint();
				
				if(thread != null)
				{
					thread.interrupt();
					thread = null;
				}
				thread = new SquareThread();
				thread.setSquare(square);
				thread.setMyJPanel(panel);
				thread.start();
				
				
			}
		});	
		
		btnSearch.addActionListener(new ActionListener() {			
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
					for(int i=0; i < vecCustomer.size(); i++)
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
		String filePath = "data/customer.csv";
		vecCustomer = new Vector<Customer>();

		try
		{
			FileInputStream fstream = new FileInputStream(filePath);
			DataInputStream in = new DataInputStream(fstream);
			InputStreamReader is = new InputStreamReader(in);
			BufferedReader br = new BufferedReader(is);			
			br.readLine();
			
			while(true)
			{		
				String strLine;
				strLine = br.readLine();
				if(strLine == null)
				{
					break;
				}
				
				Customer customer = new Customer();
				StringTokenizer tokenizer = new StringTokenizer(strLine, ",");				
				int columCounter = 0;
				while(tokenizer.hasMoreTokens())
				{
					String token = tokenizer.nextToken();
					if(columCounter == 0)						
					{
						customer.setGender(token);
					}
					else if(columCounter == 1)
					{
						customer.setName(token);
					}
					else if(columCounter == 2)
					{
						customer.setAddress(token);
					}
					columCounter++;
				}
				vecCustomer.add(customer);				
			}
			
			br.close();
			is.close();
			in.close();
			fstream.close();			
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}		
	}
}
