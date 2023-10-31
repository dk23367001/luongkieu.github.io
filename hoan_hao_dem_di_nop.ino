
int in3=9;
int in4=10;
int ctht1=3;
int ctht2=4;
int cbmua=7;
void setup() {
  Serial.begin(9600);
  
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ctht1,INPUT);
  pinMode(ctht2,INPUT);
  pinMode(cbmua,INPUT);
}

void loop() {
  

    int trangthaict1=digitalRead(ctht1);
    int trangthaict2=digitalRead(ctht2);
    int thcbmua=digitalRead(cbmua);
    Serial.print(trangthaict1);
    Serial.print(trangthaict2);


    if(thcbmua==1) //雨降がらない
    {
       if(trangthaict1!=1)
      {
        up();
      }
      else {stop();}
    }
    else //雨が降る
    {
      if(trangthaict2!=1)
    {
      down();
      }
      else {stop();}
    }
}
void up(){
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  }
 void down(){
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  }
 void stop(){
  
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  }
