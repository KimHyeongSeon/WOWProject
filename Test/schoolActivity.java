import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;

public class schoolActivity extends AppCompatActivity 
{

    @Override
    protected void onCreate(Bundle savedInstanceState) 
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_school);

    }
    public void school1 (View v)
    {
        Intent intent = new Intent(getApplicationContext() , school1Activity.class);
        startActivity(intent);
    }
    public void school2 (View v)
    {
        Intent intent = new Intent(getApplicationContext() , school2Activity.class);
        startActivity(intent);
    }
    public void school3 (View v)
    {
        Intent intent = new Intent(getApplicationContext() , school3Activity.class);
        startActivity(intent);
    }
    public void school4 (View v)
    {
        Intent intent = new Intent(getApplicationContext() , school4Activity.class);
        startActivity(intent);
    }
    public void school5 (View v)
    {
        Intent intent = new Intent(getApplicationContext() , school5Activity.class);
        startActivity(intent);
    }
    public void school6 (View v)
    {
        Intent intent = new Intent(getApplicationContext() , school6Activity.class);
        startActivity(intent);
    }
    public void school7 (View v)
    {
        Intent intent = new Intent(getApplicationContext() , school7Activity.class);
        startActivity(intent);
    }
    public void school8 (View v)
    {
        Intent intent = new Intent(getApplicationContext() , school8Activity.class);
        startActivity(intent);
    }
    public void school9 (View v)
    {
        Intent intent = new Intent(getApplicationContext() , school9Activity.class);
        startActivity(intent);
    }
    public void school10 (View v)
    {
        Intent intent = new Intent(getApplicationContext() , school10Activity.class);
        startActivity(intent);
    }
}
