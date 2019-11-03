#define trigPin1 12
#define echoPin1 13






void setup()

{ Serial.begin (9600);

pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT);
}

void loop(){ 
long duration, distance;

digitalWrite(trigPin1,LOW);

delayMicroseconds(2);

digitalWrite(trigPin1, HIGH);


delayMicroseconds(10);

digitalWrite(trigPin1,LOW);

duration = pulseIn(echoPin1, HIGH);


distance = (duration*0.034)/2;

String myString;

  if (distance > 10 ){
    myString = '1';
    
  }else {

    myString = '0';


  }
  Serial.println(myString);
  delay(1000);
  }
