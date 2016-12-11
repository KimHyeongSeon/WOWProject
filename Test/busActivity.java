import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;

import java.io.File;
import java.io.FileInputStream;

public class busActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_bus);


    }
    public void ch (View v)
    {
        Intent intent = new Intent(getApplicationContext() , choActivity.class);
        startActivity(intent);
    }
    public void onyang(View v)
    {
        String url ="https://drive.google.com/uc?export=download&id=0B4lob-osMnV1ZllHT1BvUXExMVU";
        Intent intent = new Intent(Intent.ACTION_VIEW,Uri.parse(url));
        startActivity(intent);
    }
    public void campus (View v)
    {
        String url ="https://drive.google.com/uc?export=download&id=0B4lob-osMnV1d3VXMlI0NzJmcmM";
        Intent intent = new Intent(Intent.ACTION_VIEW,Uri.parse(url));
        startActivity(intent);
    }
    public void choa (View v)
    {
        Intent intent = new Intent(getApplicationContext() , choasActivity.class);
        startActivity(intent);
    }



}
