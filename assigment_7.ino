 int n;
 int z;
 int d;
 void setup()
 {
   
   Serial.begin(9600);
   Serial.println(z);
   
 }
 
 void loop ()
     { 
       if (Serial.available() > 0)
       {
          d= Serial.parseInt(); // this frunction serial.parseint except only the number 
          for(int n=1; n<=9; n++)
          {
              (z = n*d) ;//the result of this equeation will be showen in the end 
            Serial.print(n);  
            Serial.print(" ");
            Serial.print("*");// only print **
            Serial.print(" ");
            Serial.print(" ");
            Serial.print(d);
            Serial.print("=");// it will only print =
            Serial.println(z);
            delay(500);// this delay will make the printing slower so we can se it 
            if (log (d) >= 1)
            {
             Serial.print(n);
             Serial.print("*"); 
             Serial.print("=");// it will only print =
             Serial.println(z); 
            }
          }
     }    
     }
