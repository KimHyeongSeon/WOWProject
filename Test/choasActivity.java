package npp.a1234567;

/**
 * Created by user on 2016-12-02.
 */
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;

public class choasActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_choas);

    }
    public void mon1 (View v)
    {
        String url ="https://drive.google.com/uc?export=download&id=0B4lob-osMnV1anFxYk5vVmRET2s";
        Intent intent = new Intent(Intent.ACTION_VIEW, Uri.parse(url));
        startActivity(intent);
    }
    public void sa1 (View v)
    {
        String url="https://drive.google.com/uc?export=download&id=0B4lob-osMnV1NVBsQy1tVU1wLTQ";
        Intent intent = new Intent(Intent.ACTION_VIEW,Uri.parse(url));
        startActivity(intent);
    }
    public void sun1 (View v)
    {
        String url = "https://drive.google.com/uc?export=download&id=0B4lob-osMnV1ME9iZVU1RUNpS3M";
        Intent intent = new Intent(Intent.ACTION_VIEW, Uri.parse(url));
        startActivity(intent);
    }


}
