void setup() 
{ 
  pinMode(12,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  
}

void loop()
{
  int l2 = analogRead(0)>=40?1:0;
  int l1 = analogRead(1)>=40?1:0;
  int m = analogRead(2)>=40?1:0;
  int r1 = analogRead(3)>=40?1:0;
  int r2 = analogRead(5)>=40?1:0;

  
  /*****************************FORWARD********************************/
  
  if ((l1==1)&&(l2==1)&&(r1==1)&&(r2==1)&&(m==0))
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    }

  /*************************LEFT ACCELERATE****************************/
    
  if((l1==1)&&(l2==1)&&(r1==0)&&(r2==1))
    {
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      delay(150);
      
    }
  /*************************RIGHT ACCELERATE****************************/
    
    if((l2==1)&&(l1==0)&&(r1==1)&&(r2==1))
    {
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      delay(150);      
    }

  /***************************DEAD END**********************************/
    /*
    if((l2==0)&&(r2==0)&&(m==1)&&(l1==0)&&(r1==0))
    { 
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
    }


    /*************************LEFT CUM STRAIGHT****************************/
    
    if((l2==0)&&(l1==0)&&(r1==1)&&(r2==1))
    {
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      delay(300);
    }
    
    
    /*************************RIGHT CUM STRAIGHT****************************/
    
    if((l2==1)&&(l1==1)&&(r1==0)&&(r2==0))
    {      
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      delay(300);
    }
    
    /*************************CROSS ROAD****************************/
    
    if((l2==0)&&(r2==0)&&(m==0)&&(l1==0)&&(r1==0))
    {
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      }
}  
