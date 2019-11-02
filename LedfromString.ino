
int myPins[] = {13, 12, 11};


void setup() {
  Serial.begin(9600);
  for (int i=0; i<3; i++)
  {
  pinMode(myPins[i], OUTPUT); 
  }
}

//String myString = {"111"}; //read the string
//main
void loop () {
  //Find the value of gotten from Rasp
  while(Serial.available() > 0 ){
    //Read string
    String a_String = Serial.readString();
    disp_Led(a_String);
    
    } 
 }
 
void disp_Led (String str){
  String myString = str;
  for (int i=0; i<myString.length(); i++)
  {
    //myString.substring(i)
      if (myString.substring(i) == "0") {
    //digitalWrite(myPins[i], LOW);
    Serial.println(1);
     }else if(myString.substring(i) == "1") {
    //digitalWrite(myPins[i], HIGH);
    Serial.println(0);
      }

     }
  
  }
    

  








