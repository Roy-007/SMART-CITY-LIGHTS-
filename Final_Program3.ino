int ir1=A1;
int ir2= A2;
int ir3= A3;
int ir4= A4;
 
int led1=3;
int led2 = 10;
int led3 = 5;
int led4 = 6;

int ldr = A0;

int proxy1=0;
int proxy2=0;
int proxy3=0;
int proxy4=0;



void setup() 
{

  Serial.begin (9600);

  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);
  pinMode(ir4,INPUT);


  pinMode (ldr,INPUT);


  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);


}


void loop(){


  Serial.println(analogRead(A0));
  int ldrStatus = analogRead (ldr);
    if (ldrStatus <=500)
     {
       digitalWrite(led1, HIGH);
       

       digitalWrite(led2, HIGH);
       

       digitalWrite(led3, HIGH);
       

       digitalWrite(led4, HIGH);
       

        proxy1=digitalRead(ir1);
        proxy2=digitalRead(ir2);
        proxy3=digitalRead(ir3);
        proxy4=digitalRead(ir4);
        



if(proxy1==LOW)
{
  digitalWrite(led1,HIGH);
  
}
else
{
  digitalWrite(led1,LOW);
  

}
 if(proxy2==LOW)
{
  digitalWrite(led2,HIGH);
  

}
else
{
  digitalWrite(led2,LOW);
  

}
if(proxy3==LOW)
{
  digitalWrite(led3,HIGH);
  
  
}
else
{
  digitalWrite(led3,LOW);
  

}
if(proxy4==LOW)
{
  digitalWrite(led4,HIGH);
  

}
else
{
  digitalWrite(led4,LOW);
  

}
        }     
     else 
       {
         digitalWrite(led1, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led3, LOW);
         digitalWrite(led4, LOW);
          
      }
    

}
