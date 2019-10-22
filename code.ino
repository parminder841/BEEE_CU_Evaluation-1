int last=LOW;
int x;
void setup()
{ 
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(8,INPUT); 
        
}

void loop()
{
  int read= digitalRead(8);
  if(read!=last)
  {
  		digitalWrite(4,HIGH);
  }
    else{
    digitalWrite(2,HIGH); 
    delay(50);
    digitalWrite(2,LOW);
    delay(50);
    digitalWrite(4,LOW);
   
      
    }
  
  
}
