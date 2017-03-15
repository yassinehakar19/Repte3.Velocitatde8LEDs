/**********************************************************************************
**                                                                               **
**                            Velocitat de 8 LEDs                                **
**                                                                               **
**                                 Programa2                                     **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 5;
const int led1 = 6;        
const int led2 = 7;
const int led3 = 8;         
const int led4 = 9;        
const int led5 = 10;      
const int led6 = 11;        
const int led7 = 12;      
const int pot0 = A0;       

int velocitat = 20;          // velocitat de l'acció en ms
int valPot0;                 // guardar valor del potenciòmetre

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);  
  velocitat = valPot0;     
  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);             // es queden leds velocitat ms en aquest estat
  
  digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);     

  digitalWrite(led0, LOW);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);    


  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);    

  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, HIGH);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat); 

  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, HIGH);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat); 

  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, HIGH);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);    


  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);  

  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);
  
  delay(velocitat); 

 digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);
  
  delay(velocitat);

   digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);  

   digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, HIGH);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);  

  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, HIGH);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);  

   digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, HIGH);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);  

   digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);  

  digitalWrite(led0, LOW);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);  

   digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);
  
  delay(velocitat);  
 
}

//********** Funcions *************************************************************
