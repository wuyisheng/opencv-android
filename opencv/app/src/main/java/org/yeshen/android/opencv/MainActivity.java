package org.yeshen.android.opencv;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

import org.yeshen.android.cv.YeshenCv;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        new YeshenCv().init();
    }
}