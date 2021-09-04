//Name: Karthik Gogisetty
//College: Manipal Institute of Technology 
//Year: Third

// NIGHT WALKIE
// My device instructions:

// - left buzzer gives indication to move left 
// - right buzzer for right 
// - two buzzers for 180 degree shift!


#include <Servo.h>
//initialisations

Servo myservo;

int trigPin = 7;
int echoPin = 8;
long D;                        //distance
long T;                        //TimePeriod
const int leftBuzzer = 10;
const int rightBuzzer = 12;

byte maxDist = 150;                               //Maximum sensing distance (Objects further than this distance are ignored)
float timeOut = 2*(maxDist+10)/100/340*1000000;   //Maximum time to wait for a return signal
byte stopDist = 50;

void setup() {
  // put your setup code here, to run once:
  
  myservo.attach(9);          
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(leftBuzzer, OUTPUT);
  pinMode(rightBuzzer, OUTPUT);
  
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int turnDir = checkDirection();                 //Check the left and right object distances and get the turning instruction
  Serial.print(turnDir);
  switch (turnDir)                                //Turn left, turn around or turn right depending on the instruction
  {
    case 0: 
    //Turn left - Left buzzer
      tone(leftBuzzer, 1/get_timePeriod()); 
      delay(1000);
      noTone(leftBuzzer);
      delay(1000);  
      break;
      
    case 1:                                       
    //Turn around - Both buzzers
      tone(leftBuzzer, 100);
      tone(rightBuzzer, 100); 
      delay(1000);
      noTone(leftBuzzer);
      noTone(rightBuzzer);
      delay(1000);
      break;
      
    case 2:                                       
    //Turn right - Right Buzzer
      tone(rightBuzzer, 1/get_timePeriod()); 
      delay(1000);
      noTone(rightBuzzer);
      delay(1000);     
      break;
  }
}


int getDistance()                                   //Measure the distance to an object
{
  unsigned long pulseTime;                          //Create a variable to store the pulse travel time
  int distance;                                     //Create a variable to store the calculated distance
  digitalWrite(trigPin, HIGH);                         //Generate a 10 microsecond pulse
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pulseTime = pulseIn(echoPin, HIGH, timeOut);         //Measure the time for the pulse to return
  distance = (float)pulseTime * 340 / 2 / 10000;    //Calculate the object distance based on the pulse time
  return distance;
}


int checkDirection()                                            //Check the left and right directions and decide which way to turn
{
  int distances [2] = {0,0};                                    //Left and right distances
  int turnDir = 1;                                              //Direction to turn, 0 left, 1 reverse, 2 right
  //myservo.write(180);                                         //Turn servo to look left
  //delay(5);
  distances [0] = getDistance();                                //Get the left object distance
  //myservo.write(0);                                           //Turn servo to look right
  //delay(5);
  distances [1] = getDistance();                                //Get the right object distance
  if (distances[0]>=200 && distances[1]>=200)                   //If both directions are clear, turn left
    turnDir = 0;
  else if (distances[0]<=stopDist && distances[1]<=stopDist)    //If both directions are blocked, turn around
    turnDir = 1;
  else if (distances[0]>=distances[1])                          //If left has more space, turn left
    turnDir = 0;
  else if (distances[0]<distances[1])                           //If right has more space, turn right
    turnDir = 2;
  return turnDir;
}

int get_timePeriod()
{
  unsigned long pulseTime;                          //Create a variable to store the pulse travel time
  int distance;                                     //Create a variable to store the calculated distance
  digitalWrite(trigPin, HIGH);                         //Generate a 10 microsecond pulse
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pulseTime = pulseIn(echoPin, HIGH, timeOut);
  return pulseTime;
}
