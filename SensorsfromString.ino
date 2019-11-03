#define trigPin1 12
#define echoPin1 13


#define trigPin2 8
#define echoPin2 9



void setup()

{ Serial.begin (9600);

pinMode(trigPin1, OUTPUT);
pinMode(trigPin2, OUTPUT);

pinMode(echoPin1, INPUT);
pinMode(echoPin2, INPUT);
}

void loop(){ 
long duration1, duration2, distance1, distance2;

digitalWrite(trigPin1,LOW);
digitalWrite(trigPin2,LOW);

delayMicroseconds(2);

digitalWrite(trigPin1, HIGH);
digitalWrite(trigPin2, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin1,LOW);
digitalWrite(trigPin2,LOW);

duration1 = pulseIn(echoPin1, HIGH);
duration2 = pulseIn(echoPin2, HIGH);

distance1 = (duration1/2) / 29.1;
distance2 = (duration2/2) / 29.1;

String myString = {"00"};
for (int i = 0; i<myString.length(); i++){
  if (i == 0){
    //for distance 1
          if (distance1 > 10 ){
              myString[i] = '1';
              Serial.print("Sensor1: ");
              Serial.print(myString[i]);
              Serial.println();
      }else {
        myString[i] = '0';
        Serial.print("Sensor1: ");
        Serial.print(myString[i]);
        Serial.println();
      }
    
    }else{
     
    //for distance 2
    Serial.println(distance2);
        if (distance2 > 5){
          myString[i] = '1';
          Serial.print("Sensor2: ");
          Serial.print(myString[i]);
          Serial.println();
    }else {
      
        myString[i]= '0';
          Serial.print("Sensor2: ");
          Serial.print(myString[i]);
          Serial.println();
      }
    }
  
   
 }



delay(500);

}
