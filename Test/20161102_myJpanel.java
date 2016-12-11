package kr.ac.sunmoon;

import java.awt.Graphics;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;
import java.util.Vector;

import javax.swing.JPanel;

public class myJpanel extends JPanel 
{
	private Vector<MyPoint> vecSrartPoint;
	private Vector<MyPoint> vecEndPoint;
	
	private MyPoint startPoint;
	private MyPoint endPoint;
	private boolean isPressed
	;
	
	


	
	public void paintComponent (Graphics g)
	{
		super.paintComponent(g);
		
		
		if (isPressed) //점선 그리는 부분
		{
			int lengthX = (startPoint.getX() - endPoint.getX());
			int lengthY = (startPoint.getY() - endPoint.getY());
			double thershold = 0;
			int length = 10; //점선 길이
			double len = Math.sqrt(lengthX*lengthX + lengthY*lengthY);
			while(thershold < 1 - length / len) 
			{
				int x1 = (int) ((startPoint.getX()) - lengthX*(thershold + length / len / 2)); // 점선의 간격
				int y1 = (int) ((startPoint.getY()) - lengthY*(thershold + length / len / 2));
				int x2 = (int) ((startPoint.getX()) - lengthX*(thershold + length / len)); // 점선의 크기
				int y2 = (int) ((startPoint.getY()) - lengthY*(thershold + length / len));

				thershold = thershold + length/len;
				
				g.drawLine(x1, y1, x2, y2);
			}
		}
		
		
		for (int i = 0; i < vecSrartPoint.size(); i++) // 선그리는 부분
		{
			int x1 = vecSrartPoint.get(i).getX();
			int y1 = vecSrartPoint.get(i).getY();
			int x2 = vecEndPoint.get(i).getX();
			int y2 = vecEndPoint.get(i).getY();	
			
			g.drawLine(x1, y1, x2, y2);
		}
	}
	

	public myJpanel() 
	{
		vecSrartPoint = new Vector<MyPoint>();
		vecEndPoint = new Vector<MyPoint>();
		
		addMouseMotionListener(new MouseMotionListener() 
		{
			
			@Override
			public void mouseMoved(MouseEvent e) 
			{
			}
			
			@Override
			public void mouseDragged(MouseEvent e) 
			{
				int x = e.getX();
				int y = e.getY();
				
				endPoint.setX(x);
				endPoint.setY(y);
				if(!isPressed) isPressed = true;
				repaint();
			}
		});

		
		addMouseListener(new MouseListener() 
		{
			
			@Override
			public void mouseReleased(MouseEvent e) 
			{
				// TODO Auto-generated method stub
				int x = e.getX();
				int y = e.getY();

				vecSrartPoint.add(startPoint);
				vecEndPoint.add(endPoint);

				isPressed = false;
				
				repaint();
			}
			
			@Override
			public void mousePressed(MouseEvent e) 
			{
				// TODO Auto-generated method stub
				int x = e.getX();
				int y = e.getY();

				startPoint = new MyPoint();
				startPoint.setX(x);
				startPoint.setY(y);		
				
				endPoint = new MyPoint();
			}
			
			@Override
			public void mouseExited(MouseEvent e) 
			{
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void mouseEntered(MouseEvent e) 
			{
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void mouseClicked(MouseEvent e) 
			{
				// TODO Auto-generated method stub
				
			}
		});

	}

}
/**
	
		g.setColor(Color.red);
		g.fillArc(100,50,100,100,326,180);  
		g.setColor(Color.blue);
		g.fillArc(100,50,100,100,326,-180);  
		g.setColor(Color.blue);
		g.fillArc(146,89,50,50,326,180);  
		g.setColor(Color.red);
		g.fillArc(104,61,50,50,326,-180);  
		
		
		
		g.setColor(Color.red);
		g.fillArc(this.getWidth()/2-50, this.getHeight()/2-60, 100, 100, 326, 180);  
		g.setColor(Color.blue);
		g.fillArc(this.getWidth()/2-50, this.getHeight()/2-60, 100, 100, 326, -180); 
		g.setColor(Color.blue);
		g.fillArc(this.getWidth()/2-4, this.getHeight()/2-21, 50, 50, 326, 180); 
		g.setColor(Color.red);
		g.fillArc(this.getWidth()/2-46, this.getHeight()/2-49 ,50, 50, 326, -180); 	
		
		
**/
