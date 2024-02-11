int in1=1;
int in2=2;
int in3=3;
int in4=4;
int ena=5;
int enb=6;
char reading;
void setup()
{
  Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
    reading=Serial.read();
    if(reading=='f')
    {
      analogWrite(ena,255);
      digitalWrite(in1,1);
      digitalWrite(in2,0);
      analogWrite(enb,255);
      digitalWrite(in3,1);
      digitalWrite(in4,0);

  
    }
    
    else if(reading=='b')
    {
      analogWrite(ena,255);
      digitalWrite(in1,0);
      digitalWrite(in2,1);
      analogWrite(enb,255);
      digitalWrite(in3,0);
      digitalWrite(in4,1);
  
    }
    else if(reading=='l')
    {
      analogWrite(ena,0);
      digitalWrite(in1,0);
      digitalWrite(in2,0);
      analogWrite(enb,255);
      digitalWrite(in3,1);
      digitalWrite(in4,0);
      
  
    }
    else if(reading=='r')
    {
      analogWrite(ena,255);
      digitalWrite(in1,1);
      digitalWrite(in2,0);
      analogWrite(enb,0);
      digitalWrite(in3,0);
      digitalWrite(in4,0);
 
  
    }
    else if(reading=='s')
    {
      analogWrite(ena,0);
      digitalWrite(in1,0);
      digitalWrite(in2,0);
      analogWrite(enb,0);
      digitalWrite(in3,0);
      digitalWrite(in4,0);
      
      
  
    }
    else
    {
      Serial.println("error");
  
    }
  }
}