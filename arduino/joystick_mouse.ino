const int vrx = A0;  
const int vry = A1;  
const int sw = 2;  

int xdirection = 0;
int ydirection = 0;
int swstate;

void setup(){
  Serial.begin(9600);
  pinMode(sw,INPUT_PULLUP);
}

void loop(){

  xdirection = analogRead(vrx);
  ydirection = analogRead(vry);
  swstate = digitalRead(2);

  int xmap = map(xdirection,0,1023,0,768); // height  
  int ymap = map(ydirection,0,1023,1366,0); // width

  Serial.print(xmap);
  Serial.print("x"); // 0x....
  Serial.println("");
  
  Serial.print(ymap);
  Serial.print("y"); // 0y.....
  Serial.println("");

  if(swstate == 0){
    Serial.println("#6");// #6
  }

delay(200);
}



