/*
 * Rui Santos 
 * Complete Project Details https://randomnerdtutorials.com
 */

// include TFT and SPI libraries
#include <TFT.h>  
#include <SPI.h>

// pin definition for Arduino UNO
#define cs   14 //15 //5 // D1
#define dc   33 // 9 //4  // D2
#define rst  25 // 8 //2  // D4


// create an instance of the library
TFT TFTscreen = TFT(cs, dc, rst);

void setup() {

  Serial.println();
  Serial.print("MOSI=");Serial.println(MOSI);
  Serial.print("MOSI=");Serial.println(MISO);
  Serial.print("SDA =");Serial.println(SDA);
  Serial.print("SCK =");Serial.println(SCK);
  
  //initialize the library
  TFTscreen.begin();

  // clear the screen with a black background
  TFTscreen.background(0, 0, 0);
  //set the text size
  TFTscreen.setTextSize(2);
}

void loop() {

  //generate a random color
  int redRandom = random(0, 255);
  int greenRandom = random (0, 255);
  int blueRandom = random (0, 255);
  
  // set a random font color
  TFTscreen.stroke(redRandom, greenRandom, blueRandom);
  
  // print Hello, World! in the middle of the screen
  TFTscreen.text("Hello, World!", 6, 57);
  
  // wait 200 miliseconds until change to next color
  delay(2000);
}
