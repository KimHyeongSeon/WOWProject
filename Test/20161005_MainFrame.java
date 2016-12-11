package kr.ac.sunmoon;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JButton;
import java.awt.Toolkit;
import javax.swing.JTextArea;
import javax.swing.JScrollPane;
import javax.swing.JSeparator;
import javax.swing.JMenuBar;
import javax.swing.JMenu;
import javax.swing.JMenuItem;
import javax.swing.ImageIcon;
import javax.swing.JToolBar;
import javax.swing.UIManager;
import javax.swing.UnsupportedLookAndFeelException;
import javax.swing.JEditorPane;
import javax.swing.JTabbedPane;

public class MainFrame extends JFrame 
{

	private JPanel contentPane;

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
		
		JMenuBar menuBar = new JMenuBar();
		setJMenuBar(menuBar);
		
		JMenu menuFile = new JMenu("\uD30C\uC77C");
		menuBar.add(menuFile);
		
		JMenuItem mntmNewMenuItem = new JMenuItem("\uC0C8\uB85C \uB9CC\uB4E4\uAE30");
		mntmNewMenuItem.setIcon(new ImageIcon(MainFrame.class.getResource("/kr/ac/sunmoon/image/newIcon.png")));
		menuFile.add(mntmNewMenuItem);
		
		JMenuItem mntmNewMenuItem_1 = new JMenuItem("\uC800\uC7A5");
		mntmNewMenuItem_1.setIcon(new ImageIcon(MainFrame.class.getResource("/kr/ac/sunmoon/image/saveIcon.png")));
		
		menuFile.add(mntmNewMenuItem_1);
		
		JMenuItem menuItem = new JMenuItem("\uC5F4\uAE30");
		menuItem.setIcon(new ImageIcon(MainFrame.class.getResource("/kr/ac/sunmoon/image/openIcon.png")));
		menuFile.add(menuItem);
		
		menuFile.add(new JSeparator());
		
		JMenuItem mntmNewMenuItem_2 = new JMenuItem("\uC885\uB8CC");
		mntmNewMenuItem_2.setIcon(new ImageIcon(MainFrame.class.getResource("/kr/ac/sunmoon/image/exitIcon.png")));
		menuFile.add(mntmNewMenuItem_2);
		
		JMenu mnNewMenu = new JMenu("\uD3B8\uC9D1");
		menuBar.add(mnNewMenu);
		
		JMenuItem mntmNewMenuItem_3 = new JMenuItem("\uBE44\uC6B0\uAE30");
		mntmNewMenuItem_3.setIcon(new ImageIcon(MainFrame.class.getResource("/kr/ac/sunmoon/image/replace.png")));
		mnNewMenu.add(mntmNewMenuItem_3);
		
		
		
		
		
		
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(new BorderLayout(0, 0));
		
		JToolBar toolBar = new JToolBar();
		toolBar.setFloatable(false);
		contentPane.add(toolBar, BorderLayout.NORTH);
		
		JButton btnNewButton = new JButton("");
		btnNewButton.setIcon(new ImageIcon(MainFrame.class.getResource("/kr/ac/sunmoon/image/newIcon.png")));
		toolBar.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("");
		btnNewButton_1.setIcon(new ImageIcon(MainFrame.class.getResource("/kr/ac/sunmoon/image/openIcon.png")));
		toolBar.add(btnNewButton_1);
		
		JButton btnNewButton_2 = new JButton("");
		btnNewButton_2.setIcon(new ImageIcon(MainFrame.class.getResource("/kr/ac/sunmoon/image/saveIcon.png")));
		toolBar.add(btnNewButton_2);
		
		toolBar.add(new JToolBar.Separator());
		
		JButton btnNewButton_3 = new JButton("");
		btnNewButton_3.setIcon(new ImageIcon(MainFrame.class.getResource("/kr/ac/sunmoon/image/exitIcon.png")));
		toolBar.add(btnNewButton_3);
		
		JTabbedPane tabbedPane = new JTabbedPane(JTabbedPane.TOP);
		contentPane.add(tabbedPane, BorderLayout.CENTER);
		
		JPanel panel = new JPanel();
		tabbedPane.addTab("memo 1", null, panel, null);
		panel.setLayout(new BorderLayout(0, 0));
		
		JScrollPane scrollPane_1 = new JScrollPane();
		panel.add(scrollPane_1, BorderLayout.CENTER);
		
		JEditorPane editorPane_1 = new JEditorPane();
		scrollPane_1.setViewportView(editorPane_1);
		
		JPanel panel_1 = new JPanel();
		tabbedPane.addTab("memo 2", null, panel_1, null);
		panel_1.setLayout(new BorderLayout(0, 0));
		
		JScrollPane scrollPane = new JScrollPane();
		panel_1.add(scrollPane, BorderLayout.CENTER);
		
		JEditorPane editorPane = new JEditorPane();
		scrollPane.setViewportView(editorPane);
	}

}
