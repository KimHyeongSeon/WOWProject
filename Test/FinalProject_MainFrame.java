package kr.ac.sunmoon;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.EventQueue;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.FileWriter;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.Comparator;
import java.util.Random;
import java.util.StringTokenizer;
import java.util.Vector;
import javax.swing.BoxLayout;
import javax.swing.ButtonGroup;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.JScrollPane;
import javax.swing.JTabbedPane;
import javax.swing.JTextField;
import javax.swing.UIManager;
import javax.swing.UnsupportedLookAndFeelException;
import javax.swing.border.EmptyBorder;
import javax.swing.border.LineBorder;
import javax.swing.border.TitledBorder;

public class MainFrame extends JFrame {

	private JPanel contentPane;
	private JTextField txtStore;
	private JTextField txtFind;
	private Vector<Lotto> vecLotto;	
	String[] arry = new String[7];		
	int Rnumber = 0;
	
	
	/**
	 * 
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
		setTitle("Lotto");
		setIconImage(Toolkit.getDefaultToolkit().getImage("C:\\Users\\YYH\\workspace\\FinalProject\\src\\kr\\ac\\sunmoon\\loitte.png"));
		try
		{
			UIManager.setLookAndFeel("com.jtattoo.plaf.luna.LunaLookAndFeel");			
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
		
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setToolTipText("");
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		contentPane.setLayout(new BorderLayout(0, 0));
		setContentPane(contentPane);
		
		JTabbedPane tabbedPane = new JTabbedPane(JTabbedPane.TOP);
		contentPane.add(tabbedPane, BorderLayout.CENTER);
		JPanel MenuStore = new JPanel();	
		tabbedPane.addTab("Store", null, MenuStore, null);
		JPanel MenuFind = new JPanel();	
		tabbedPane.addTab("Find", null, MenuFind, null);
		MenuFind.setLayout(new BorderLayout(0, 0));
		
		JPanel panel = new JPanel();
		MenuFind.add(panel, BorderLayout.NORTH);
		GridBagLayout gbl_panel = new GridBagLayout();
		gbl_panel.columnWidths = new int[]{0, 0};
		gbl_panel.rowHeights = new int[]{0, 0};
		gbl_panel.columnWeights = new double[]{1.0, Double.MIN_VALUE};
		gbl_panel.rowWeights = new double[]{1.0, Double.MIN_VALUE};
		panel.setLayout(gbl_panel);
		
		JPanel panel_1 = new JPanel();
		GridBagConstraints gbc_panel_1 = new GridBagConstraints();
		gbc_panel_1.fill = GridBagConstraints.BOTH;
		gbc_panel_1.gridx = 0;
		gbc_panel_1.gridy = 0;
		panel.add(panel_1, gbc_panel_1);
		panel_1.setLayout(new BorderLayout(0, 0));
		
		JPanel panel_2 = new JPanel();
		panel_1.add(panel_2, BorderLayout.NORTH);
		panel_2.setLayout(new BorderLayout(0, 0));
		
		txtFind = new JTextField();
		panel_2.add(txtFind);
		txtFind.setColumns(10);
		
		JButton btnFind = new JButton("\uAC80\uC0C9");
		panel_2.add(btnFind, BorderLayout.EAST);
		
		JPanel panel_3 = new JPanel();
		FlowLayout flowLayout = (FlowLayout) panel_3.getLayout();
		flowLayout.setAlignment(FlowLayout.LEFT);
		panel_1.add(panel_3, BorderLayout.SOUTH);
		
		JRadioButton rbtnTurn = new JRadioButton("\uD68C\uCC28");
		rbtnTurn.setSelected(true);
		panel_3.add(rbtnTurn);
		
		JRadioButton rbtnNum = new JRadioButton("\uBC88\uD638");
		panel_3.add(rbtnNum);
		
		ButtonGroup btnGroup = new ButtonGroup();
		btnGroup.add(rbtnTurn);
		btnGroup.add(rbtnNum);
		
		
		
		JComboBox cboxSort = new JComboBox();
		cboxSort.setModel(new DefaultComboBoxModel(new String[] {"\uC624\uB984\uCC28\uC21C", "\uB0B4\uB9BC\uCC28\uC21C"}));
		panel_3.add(cboxSort);
		
		JScrollPane FindScrollPane = new JScrollPane();
		MenuFind.add(FindScrollPane);
		
		JPanel panel_4 = new JPanel();
		FindScrollPane.setViewportView(panel_4);
		panel_4.setLayout(new BorderLayout(0, 0));
		
		JPanel FindResultPanelNorth = new JPanel();
		panel_4.add(FindResultPanelNorth, BorderLayout.NORTH);
		
		JPanel FindResultPanel = new JPanel();
		panel_4.add(FindResultPanel, BorderLayout.CENTER);
		FindResultPanel.setLayout(new BoxLayout(FindResultPanel, BoxLayout.Y_AXIS));
		MenuStore.setLayout(new BorderLayout(0, 0));
		JPanel MenuRan = new JPanel();	
		tabbedPane.addTab("RANDOM", null, MenuRan, null);
		MenuRan.setLayout(new BorderLayout(0, 0));
		
		JButton btnRandom = new JButton("\uB85C\uB610\uBC88\uD638\uC0DD\uC131");
		MenuRan.add(btnRandom, BorderLayout.NORTH);
		
		JPanel RandomResultPanel = new JPanel();
		MenuRan.add(RandomResultPanel, BorderLayout.CENTER);
		MenuStore.setLayout(new BorderLayout(0, 0));
		MenuStore.setLayout(new BorderLayout(0, 0));
		
		JPanel StorePanel = new JPanel();
		MenuStore.add(StorePanel, BorderLayout.NORTH);
		GridBagLayout gbl_StorePanel = new GridBagLayout();
		gbl_StorePanel.columnWidths = new int[]{0, 0};
		gbl_StorePanel.rowHeights = new int[]{0, 0};
		gbl_StorePanel.columnWeights = new double[]{1.0, Double.MIN_VALUE};
		gbl_StorePanel.rowWeights = new double[]{1.0, Double.MIN_VALUE};
		StorePanel.setLayout(gbl_StorePanel);
		
		JPanel StoreInputPanel = new JPanel();
		GridBagConstraints gbc_StoreInputPanel = new GridBagConstraints();
		gbc_StoreInputPanel.fill = GridBagConstraints.BOTH;
		gbc_StoreInputPanel.gridx = 0;
		gbc_StoreInputPanel.gridy = 0;
		StorePanel.add(StoreInputPanel, gbc_StoreInputPanel);
		StoreInputPanel.setLayout(new BorderLayout(0, 0));
		
		txtStore = new JTextField();
		StoreInputPanel.add(txtStore, BorderLayout.CENTER);
		txtStore.setColumns(10);
		
		JButton btnStore = new JButton("\uC800\uC7A5");
		btnStore.setEnabled(true);
		StoreInputPanel.add(btnStore, BorderLayout.EAST);
		
		JScrollPane StoreScrollPane = new JScrollPane();
		MenuStore.add(StoreScrollPane, BorderLayout.CENTER);
		
		JPanel StoreResultPanel = new JPanel();
		StoreResultPanel.setToolTipText("");
		StoreResultPanel.setBorder(new TitledBorder(null, "\uC785\uB825\uD655\uC778\uCC3D", TitledBorder.LEADING, TitledBorder.TOP, null, null));
		StoreScrollPane.setViewportView(StoreResultPanel);
		StoreResultPanel.setLayout(new BoxLayout(StoreResultPanel, BoxLayout.Y_AXIS));
		JLabel Slable = new JLabel("회차, 년도, 번호 1~6+B 를  ' ,(쉼표) ' 로 구분해서 집어 넣으세요");
		StoreResultPanel.add(Slable);
		
		
		JPanel Spanel = new JPanel();
		Spanel.setToolTipText("");
		StoreResultPanel.add(Spanel);
		

		btnStore.addActionListener(new ActionListener(){
			
			@Override
			public void actionPerformed(ActionEvent e) 
			{
				// TODO Auto-generated method stub
				String input = txtStore.getText();
				if(!input.equals(""))
				{
					StoreResultPanel.removeAll();
					try
					{
						FileWriter fstream = new FileWriter("data/lotto.csv", true);
						BufferedWriter out = new BufferedWriter(fstream);
						out.newLine();
						out.write(input);
						out.close();
					}
					catch(Exception ee)
					{
						ee.printStackTrace();
					}

					readLottoFile();
					
					for(int i=0; i < vecLotto.size(); i++)
					{
						Lotto veclotto = vecLotto.get(i);					
						
						JLabel Storeresult = new JLabel("회차 : " + veclotto.getTurn() + "회, 날짜 : " + veclotto.getDate() + ", 당첨숫자 : " + veclotto.getNumber1() + ", " + veclotto.getNumber2() + ", " + veclotto.getNumber3() + ", " + veclotto.getNumber4() + ", " + veclotto.getNumber5() + ", " + veclotto.getNumber6() + ", " + veclotto.getNumberB());
						StoreResultPanel.add(Storeresult);
					}
					
				}
				
				
				
				
				
				
				StoreResultPanel.revalidate();
				StoreResultPanel.repaint();
			}
		});
		


		vecLotto = new Vector<Lotto>(); //구글링하다가 찾아서 넣어봣습니다.
		btnFind.addActionListener(new ActionListener() {			
			@Override
			public void actionPerformed(ActionEvent e) 
			{
				// TODO Auto-generated method stub				
				FindResultPanel.removeAll();	
				FindResultPanelNorth.removeAll();
				readLottoFile();
				
				String keyword = txtFind.getText();
				boolean isTurn = rbtnTurn.isSelected();
				boolean isNum = rbtnNum.isSelected();
				int searchOption = cboxSort.getSelectedIndex();

				if (searchOption == 0)
				{
					Collections.sort(vecLotto, new AscCompare());
				} 
				else 
				{
					Collections.sort(vecLotto, new DecCompare());
				}
				if(isTurn || isNum)
				{
					
					int num = 0;
					for(int i=0; i < vecLotto.size(); i++)
					{
						Lotto veclotto = vecLotto.get(i);

						if (isTurn && keyword.equals(String.valueOf(vecLotto.get(i).getTurn())))
						{			
							JLabel FindResult = new JLabel("회차 : " + veclotto.getTurn() + "회, 날짜 : " + veclotto.getDate() + ", 당첨숫자 : " + veclotto.getNumber1() + ", " + veclotto.getNumber2() + ", " + veclotto.getNumber3() + ", " + veclotto.getNumber4() + ", " + veclotto.getNumber5() + ", " + veclotto.getNumber6() + ", " + veclotto.getNumberB());
							FindResultPanel.add(FindResult);

							
						}												
						else if ((isNum && keyword.equals(veclotto.getNumber1())) || (isNum && keyword.equals(veclotto.getNumber2())) || (isNum && keyword.equals(veclotto.getNumber3())) || (isNum && keyword.equals(veclotto.getNumber4())) || (isNum && keyword.equals(veclotto.getNumber5())) || (isNum && keyword.equals(veclotto.getNumber6())) || (isNum && keyword.equals(veclotto.getNumberB())) )
						{
							if (searchOption == 0)
							{
								JLabel FindResult = new JLabel("회차 : " + vecLotto.get(i).getTurn() + "회, 날짜 : " + vecLotto.get(i).getDate() + ", 당첨숫자 : " + vecLotto.get(i).getNumber1() + ", " + vecLotto.get(i).getNumber2() + ", " + vecLotto.get(i).getNumber3() + ", " + vecLotto.get(i).getNumber4() + ", " + vecLotto.get(i).getNumber5() + ", " + vecLotto.get(i).getNumber6() + ", " + vecLotto.get(i).getNumberB());
								FindResultPanel.add(FindResult);
							}
							else
							{
								JLabel FindResult = new JLabel("회차 : " + veclotto.getTurn() + "회, 날짜 : " + veclotto.getDate() + ", 당첨숫자 : " + veclotto.getNumber1() + ", " + veclotto.getNumber2() + ", " + veclotto.getNumber3() + ", " + veclotto.getNumber4() + ", " + veclotto.getNumber5() + ", " + veclotto.getNumber6() + ", " + veclotto.getNumberB());
								FindResultPanel.add(FindResult);
							}
							num ++;
						}
					}

					if (isNum)
					{

						JLabel numResult = new JLabel(keyword + "가 나온 횟수 : " + num + "회");
						FindResultPanelNorth.add(numResult);
					}					
				}

				FindResultPanel.revalidate();
				FindResultPanel.repaint();			
			}
				
		});		
		
		RandomResultPanel.setLayout(new BorderLayout(0, 0));		
		MyJPanel Rpanel = new MyJPanel();
		Rpanel.setLayout(new BoxLayout(Rpanel, BoxLayout.Y_AXIS));
		RandomResultPanel.add(Rpanel);
		
		
		JPanel panel_5 = new JPanel();
		MenuRan.add(panel_5, BorderLayout.SOUTH);
		panel_5.setLayout(new BorderLayout(0, 0));
			
		JButton btnReset = new JButton("RESET");
		panel_5.add(btnReset, BorderLayout.EAST);


		
		btnReset.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) 
			{
				Rpanel.resetCircle();
				Rpanel.repaint();
				Rnumber = 0;
			}
		});
		
		

		readLottoFile();		
		btnRandom.addActionListener(new ActionListener() {

	         @Override
	         public void actionPerformed(ActionEvent e) {
	            // TODO Auto-generated method stub
	            Circle circle = new Circle();
	            Random random = new Random();

	            Color color = new Color(random.nextInt(50) * 3 + 100, random.nextInt(50) * 3 + 100, random.nextInt(50) * 3 + 100);
	            String num = String.valueOf(random.nextInt(45) + 1);

	            int width = Rpanel.getWidth();
	            int height = Rpanel.getHeight();
	            int gap = 10;
	            int x = (Rnumber * width / 8) - gap;
	            int y = (height / 2 - 25 - 2 * gap);
	            int lineLength = width / 8;
	            x += gap;
	            y += gap;

	            if (Rnumber < 7) 
	            {
	               arry[Rnumber] = String.valueOf(num);
	            }

	            
	            if (Rnumber == 0) 
	            {
	               Rpanel.removeAll();
	               Rpanel.resetCircle();
	               Rpanel.repaint();
	               Rpanel.revalidate();
	            }
	            
	            circle.setX(x);
	            circle.setY(y);
	            circle.setLineLength(lineLength);
	            circle.setColor(color);
	            circle.setNum(num);

	            Rpanel.addCircle(circle);
	            Rpanel.repaint();

	            if (Rnumber == 6) 
	            {
	               for (int i = 0; i < vecLotto.size(); i++) 
	               {
	                  Lotto lotto = vecLotto.get(i);
	                  try 
	                  {
	                     int count = 0;
	                     for(int j = 0; j < 7; j++) 
	                     {
	                        switch(j) 
	                        {	                        
	                        case 0:
	                           if(lotto.getNumber1().equals(arry[j])) count++;
	                           break;
	                        case 1:
	                           if(lotto.getNumber2().equals(arry[j])) count++;
	                           break;
	                        case 2:
	                           if(lotto.getNumber3().equals(arry[j])) count++;
	                           break;
	                        case 3:
	                           if(lotto.getNumber4().equals(arry[j])) count++;
	                           break;
	                        case 4:
	                           if(lotto.getNumber5().equals(arry[j])) count++;
	                           break;
	                        case 5:
	                           if(lotto.getNumber6().equals(arry[j])) count++;
	                           break;
	                        case 6:
	                           if(lotto.getNumberB().equals(arry[j])) count++;
	                           break;
	                        }
	                     }
	                     if (count > 6)
	                     {
	                        Rpanel.resetCircle();
	                        JLabel success = new JLabel(lotto.getTurn() + "회째 로또에 당첨되었습니다.");	        
	                        success.setFont(new Font("바탕", Font.PLAIN, 20));
	                        
	                        Rpanel.add(success);
	                        Rpanel.repaint();
	                        Rpanel.revalidate();
	                     }
	                  } 
	                  catch (NullPointerException ex) 
	                  {
	                	  continue;
	                  }
	               }

	               circle.setRnum(Rnumber++);
	               Rnumber = 0;
	            }
	            else 
	            {
	               circle.setRnum(Rnumber++);
	            }
	         }
	      });

	   }
	
	final static class AscCompare implements Comparator<Lotto> 
	{ 
		
		@Override 	
		public int compare(Lotto arg0, Lotto arg1) 
		{ 		
		// TODO Auto-generated method stub 
			return arg0.getTurn() - arg1.getTurn(); 
		}	
	}
	
	final static class DecCompare implements Comparator<Lotto> 
	{ 
		
		@Override 	
		public int compare(Lotto arg1, Lotto arg0) 
		{ 		
			return arg0.getTurn() - arg1.getTurn(); 
		}	
	}
	
	public void readLottoFile()
	{
		vecLotto = new Vector<Lotto>();

		String filePath = "data/lotto.csv";
		

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

				Lotto lotto = new Lotto();				
				strLine = strLine.replaceAll(";", ","); //,대신 ;를 쓰는 라인이 발견됐음
				StringTokenizer tokenizer = new StringTokenizer(strLine, ",");				
				int columCounter = 0;				
				while(tokenizer.hasMoreTokens())
				{
					String token = tokenizer.nextToken();
					if(columCounter == 0)						
					{
						lotto.setTurn(Integer.parseInt(token));
					}
					else if(columCounter == 1)
					{
						lotto.setDate(token);
					}
					else if(columCounter == 2)
					{
						lotto.setNumber1(token);
					}
					else if(columCounter == 3)
					{
						lotto.setNumber2(token);
					}
					else if(columCounter == 4)
					{
						lotto.setNumber3(token);
					}
					else if(columCounter == 5)
					{
						lotto.setNumber4(token);
					}
					else if(columCounter == 6)
					{
						lotto.setNumber5(token);
					}
					else if(columCounter == 7)
					{
						lotto.setNumber6(token);
					}
					else if(columCounter == 8)
					{
						lotto.setNumberB(token);
					}		
					columCounter++;					
				}
				vecLotto.add(lotto);
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




