int led = 2;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;



int ldr = A5;

int ir = A0;
int ir1 = A1;
int ir2 = A2;
int ir3 = A3;
int ir4 = A4;



void setup() 
{
  Serial.begin (9600);
  
  pinMode (led,OUTPUT);
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  
  
  pinMode (ldr,INPUT);
  
  pinMode (ir,INPUT);
  pinMode (ir1,INPUT);
  pinMode (ir2,INPUT);
  pinMode (ir3,INPUT);
  pinMode (ir4,INPUT);
 
 
  

}
void loop() 
{
 Serial.println(analogRead(A5));
  int ldrStatus = analogRead (ldr);
    if (ldrStatus <=500)
     {
       
       digitalWrite(led, HIGH);
       analogWrite(led,255/5);
       
       digitalWrite(led1, HIGH);
       analogWrite(led1,255/5);
       
       digitalWrite(led2, HIGH);
       analogWrite(led2,255/5); 
       
       digitalWrite(led2, HIGH);
       analogWrite(led2,255/5); 
       
       
        if (analogRead(A0)<300)       // IR 1 CODE    
               {
                digitalWrite(led,HIGH);
                analogWrite(led,255);       
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led,HIGH);
                  analogWrite(led,255/5);
                  
                }
       
       
       if (analogRead(A1)<300)       // IR 1 CODE    
               {
                digitalWrite(led1,HIGH);
                analogWrite(led1,255);       
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led1,HIGH);
                  analogWrite(led1,255/5);
                  
                }
          
          if (analogRead(A2)<300)           // IR 2 CODE
               {
                digitalWrite(led2,HIGH);
                analogWrite(led2,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led2,HIGH);
                   analogWrite(led2,255/5); 
                  
                }
                
           if (analogRead(A3)<300)           // IR 2 CODE
               {
                digitalWrite(led3,HIGH);
                analogWrite(led3,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led3,HIGH);
                   analogWrite(led3,255/5); 
                  
                }
                
            if (analogRead(A4)<300)           // IR 2 CODE
               {
                digitalWrite(led4,HIGH);
                analogWrite(led4,255); 
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led4,HIGH);
                   analogWrite(led4,255/5); 
                  
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
