package npp.a1234567;

/**
 * Created by user on 2016-12-02.
 */
import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;

public class bonActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_bon);

    }
    public void co (View v)
    {
        Intent intent = new Intent(getApplicationContext() , coActivity.class);
        startActivity(intent);
    }
    public void ame (View v)
    {
        Intent intent = new Intent(getApplicationContext() , ameActivity.class);
        startActivity(intent);
    }

}
