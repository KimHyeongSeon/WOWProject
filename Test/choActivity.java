package npp.a1234567;

/**
 * Created by user on 2016-12-02.
 */
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;

public class choActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_cho);

    }
    public void mon(View v)
    {
        String url ="https://drive.google.com/uc?export=download&id=0B4lob-osMnV1N3N3cFhmdndGamM";
        Intent intent = new Intent(Intent.ACTION_VIEW, Uri.parse(url));
        startActivity(intent);
    }
    public void sa (View v)
    {
        String url="https://drive.google.com/uc?export=download&id=0B4lob-osMnV1OTg3VndGZzJFTjQ";
        Intent intent = new Intent(Intent.ACTION_VIEW,Uri.parse(url));
        startActivity(intent);
    }
    public void sun (View v)
    {
        String url = "https://drive.google.com/uc?export=download&id=0B4lob-osMnV1dDl6a2Z2X2dHTDQ";
        Intent intent = new Intent(Intent.ACTION_VIEW, Uri.parse(url));
        startActivity(intent);
    }

}
