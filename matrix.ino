#include <Adafruit_NeoPixel.h>
#include "BluetoothSerial.h"


BluetoothSerial SerialBT;
char temp='0';

Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(8, 32, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(8, 33, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(8, 25, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(8, 26, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip5 = Adafruit_NeoPixel(8, 27, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip6 = Adafruit_NeoPixel(8, 14, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip7 = Adafruit_NeoPixel(8, 12, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip8 = Adafruit_NeoPixel(8, 13, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel* arr[8] = {&strip1, &strip2, &strip3, &strip4, &strip5, &strip6, &strip7, &strip8};

void setup() {
  SerialBT.begin("ESP32test"); 
  for (int i = 0; i < 8; i++) {
    arr[i]->begin();
    arr[i]->show();
  }
  Serial.begin(115200);
}
void func(int x,int y,int r=0,int g=0,int b=255){
  arr[x]->setPixelColor(y, arr[x]->Color(r, g, b));
  arr[x]->show();
}
void off(){
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
  arr[i]->setPixelColor(j, arr[i]->Color(0,0,0));
  arr[i]->show();}}
}
void smile(){
  arr[0]->setPixelColor(2, arr[0]->Color(0,0,255));arr[0]->setPixelColor(5, arr[0]->Color(0,0,255));
  arr[0]->setPixelColor(1, arr[0]->Color(0,0,255));arr[0]->setPixelColor(6, arr[0]->Color(0,0,255));
  arr[1]->setPixelColor(2, arr[1]->Color(0,0,255));arr[1]->setPixelColor(5, arr[1]->Color(0,0,255));
  arr[1]->setPixelColor(1, arr[1]->Color(0,0,255));arr[1]->setPixelColor(6, arr[1]->Color(0,0,255));
  arr[3]->setPixelColor(0, arr[3]->Color(0,0,255));arr[3]->setPixelColor(7, arr[3]->Color(0,0,255));
  arr[4]->setPixelColor(0, arr[4]->Color(0,0,255));arr[4]->setPixelColor(7, arr[4]->Color(0,0,255));
  arr[5]->setPixelColor(1, arr[5]->Color(0,0,255));arr[5]->setPixelColor(6, arr[5]->Color(0,0,255));
  arr[6]->setPixelColor(2, arr[6]->Color(0,0,255));arr[6]->setPixelColor(5, arr[6]->Color(0,0,255));
  arr[7]->setPixelColor(3, arr[7]->Color(0,0,255));arr[7]->setPixelColor(4, arr[7]->Color(0,0,255));
  for (int i = 0; i < 8; i++) {
    
    arr[i]->show();
  }
}
void still(){
  arr[0]->setPixelColor(2, arr[0]->Color(0,0,255));arr[0]->setPixelColor(5, arr[0]->Color(0,0,255));
  arr[0]->setPixelColor(1, arr[0]->Color(0,0,255));arr[0]->setPixelColor(6, arr[0]->Color(0,0,255));
  arr[1]->setPixelColor(2, arr[1]->Color(0,0,255));arr[1]->setPixelColor(5, arr[1]->Color(0,0,255));
  arr[1]->setPixelColor(1, arr[1]->Color(0,0,255));arr[1]->setPixelColor(6, arr[1]->Color(0,0,255));
  for (int i = 0; i < 8; i++) {
    arr[4]->setPixelColor(i, arr[4]->Color(0,0,255));
    
  }
  for (int i = 0; i < 8; i++) {
    
    arr[i]->show();
  }
}
void sad(){
    arr[0]->setPixelColor(2, arr[0]->Color(0,0,255));arr[0]->setPixelColor(5, arr[0]->Color(0,0,255));
    arr[0]->setPixelColor(1, arr[0]->Color(0,0,255));arr[0]->setPixelColor(6, arr[0]->Color(0,0,255));
    arr[1]->setPixelColor(2, arr[1]->Color(0,0,255));arr[1]->setPixelColor(5, arr[1]->Color(0,0,255));
    arr[1]->setPixelColor(1, arr[1]->Color(0,0,255));arr[1]->setPixelColor(6, arr[1]->Color(0,0,255));
    arr[3]->setPixelColor(3, arr[3]->Color(0,0,255));arr[3]->setPixelColor(4, arr[3]->Color(0,0,255));
    arr[4]->setPixelColor(2, arr[4]->Color(0,0,255));arr[4]->setPixelColor(5, arr[4]->Color(0,0,255));
    arr[5]->setPixelColor(1, arr[5]->Color(0,0,255));arr[5]->setPixelColor(6, arr[5]->Color(0,0,255));

  for (int i = 0; i < 8; i++) {
    
    arr[i]->show();
  }
}
void heart(){

  for(int x=0;x<255;x++){
  arr[0]->setPixelColor(2, arr[0]->Color(255-x,0,0));arr[0]->setPixelColor(5, arr[0]->Color(255-x,0,0));
  arr[1]->setPixelColor(1, arr[1]->Color(255-x,0,0));arr[1]->setPixelColor(6, arr[1]->Color(255-x,0,0));
  arr[2]->setPixelColor(0, arr[2]->Color(255-x,0,0));arr[2]->setPixelColor(7, arr[2]->Color(255-x,0,0));
  arr[1]->setPixelColor(3, arr[1]->Color(255-x,0,0));arr[1]->setPixelColor(4, arr[1]->Color(255-x,0,0));
  arr[3]->setPixelColor(0, arr[3]->Color(255-x,0,0));arr[3]->setPixelColor(7, arr[3]->Color(255-x,0,0));
  arr[4]->setPixelColor(0, arr[4]->Color(255-x,0,0));arr[4]->setPixelColor(7, arr[4]->Color(255-x,0,0));
  arr[5]->setPixelColor(1, arr[5]->Color(255-x,0,0));arr[5]->setPixelColor(6, arr[5]->Color(255-x,0,0));
  arr[6]->setPixelColor(2, arr[6]->Color(255-x,0,0));arr[6]->setPixelColor(5, arr[6]->Color(255-x,0,0));
  arr[7]->setPixelColor(3, arr[7]->Color(255-x,0,0));arr[7]->setPixelColor(4, arr[7]->Color(255-x,0,0));
  for (int i = 0; i < 8; i++) {
    
    arr[i]->show();
  }
  }

}
void rain(){
  int randomNumber = random(8);
  arr[0]->setPixelColor(randomNumber, arr[0]->Color(0,0,255));
  arr[0]->show();
  delay(70);
  arr[0]->setPixelColor(randomNumber, arr[0]->Color(0,0,0));
  arr[0]->show();
  for(int i=1;i<8;i++){
    arr[i]->setPixelColor(randomNumber, arr[i]->Color(0,0,255));
    
    arr[i]->show();delay(70);
    arr[i]->setPixelColor(randomNumber, arr[i]->Color(0,0,0));
    arr[i]->show();
  }
}

void loop() {
if (SerialBT.available()) {
   char receivedChar = SerialBT.read();
   Serial.print("Received: ");
   Serial.println(receivedChar);
   if(receivedChar=='1'){
      off();
      temp='1';
   }
   else if(receivedChar=='2'){
      temp='2';
      off();
   }
   else if(receivedChar=='3'){
    temp='3';off();
    
   }
   else if(receivedChar=='4'){
      temp='4';off();
      
   }
   else if(receivedChar=='5'){
      temp='5';off();
      
   }
   else if(receivedChar=='0'){
      temp='0';off();
      
   }


}

    
     if(temp=='1'){rain();}
   else if(temp=='2'){smile();}
   else if(temp=='3'){heart();}
   else if(temp=='4'){still();}
   else if(temp=='5'){sad();}
   else if(temp=='0'){off();}
   

  
}

