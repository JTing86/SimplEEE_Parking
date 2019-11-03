
int a = 14;  //For displaying segment "a"
int b = 15;  //For displaying segment "b"
int c = 16;  //For displaying segment "c"
int d = 17;  //For displaying segment "d"
int e = 18;  //For displaying segment "e"
int f = 19;  //For displaying segment "f"
int g = 2;   //For displaying segment "g"

void setup() {
  pinMode(a, OUTPUT);  //A
  pinMode(b, OUTPUT);  //B
  pinMode(c, OUTPUT);  //C
  pinMode(d, OUTPUT);  //D
  pinMode(e, OUTPUT);  //E
  pinMode(f, OUTPUT);  //F
  pinMode(g, OUTPUT);  //G

}
void displayDigit(int digit)
{
  //Conditions for displaying segment a
  if (digit != 5 && digit != 6)
    digitalWrite(a, LOW);

  //Conditions for displaying segment b
  if (digit != 1 && digit != 4)
    digitalWrite(b, LOW);

  //Conditions for displaying segment c
  if (digit != 1 && digit != 2 && digit != 3 && digit != 7)
    digitalWrite(c, LOW);

  //Conditions for displaying segment d
  if (digit != 1 && digit != 0 && digit != 7)
    digitalWrite(d, LOW);

  //Conditions for displaying segment e
  if (digit != 1 && digit != 3 && digit != 4 && digit != 5 && digit != 7 && digit != 9)
    digitalWrite(e, LOW);

  //Conditions for displaying segment f
  if (digit != 1 && digit != 4 && digit != 7)
    digitalWrite(f, LOW);

  //Conditions for displaying segment g
  if (digit != 2)
    digitalWrite(g, LOW);

}
void turnOff()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void Print(char str[])
{
  int res = 0; // Initialize result

  // Pick a starting point
    for (int i=0; str[i] !='\0'; i++)
      {
        if (str[i] == '1')
        res++;
      }
    turnOff();
    displayDigit(res);
}

void loop()
{
   char str[] = "01010011";
   Print(str);
}
