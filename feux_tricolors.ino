#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define button 12
#define timetoFinish 10000
#define timeToPass 1000
#define redOut 9
#define GreenOut 11
#define OrangeOut 10
#define TimeToStop 1000
#define TimeToPass 0
bool Redstate = true;

void setup() {
  pinMode(button,INPUT_PULLUP);
  pinMode(redOut, OUTPUT);
  pinMode(GreenOut, OUTPUT);
  pinMode(OrangeOut, OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}
  void Numbers1(){
  digitalWrite(b,1);
  digitalWrite(c,1);
  delay(TimeToStop);
  digitalWrite(b,0);
  digitalWrite(c,0);
  delay(TimeToPass);
};
void Numbers2(){
   digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(g,1);
  digitalWrite(e,1);
  digitalWrite(d,1);
  delay(TimeToStop);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(g,0);
  digitalWrite(e,0);
  digitalWrite(d,0);
  delay(TimeToPass);
  
};
void Numbers3(){
   digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(g,1);
  delay(TimeToStop);
  digitalWrite(a,0);
  digitalWrite(g,0);
  digitalWrite(c,0);
  digitalWrite(b,0);
  digitalWrite(d,0);
  delay(TimeToPass);
  
};
void Numbers4(){
   digitalWrite(g,1);
  digitalWrite(b,1);
  digitalWrite(f,1);
  digitalWrite(c,1);
  delay(TimeToStop);
  digitalWrite(g,0);
  digitalWrite(b,0);
  digitalWrite(f,0);
  digitalWrite(c,0);
  delay(TimeToPass);
  
};
void Numbers5(){
    digitalWrite(a,1);
  digitalWrite(g,1);
  digitalWrite(f,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  delay(TimeToStop);
  digitalWrite(a,0);
  digitalWrite(g,0);
  digitalWrite(f,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  delay(TimeToPass);
  
};
void Numbers6(){
     digitalWrite(a,1);
  digitalWrite(g,1);
  digitalWrite(f,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  delay(TimeToStop);
  digitalWrite(a,0);
  digitalWrite(g,0);
  digitalWrite(f,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  delay(TimeToPass);
  
};
void Numbers7(){
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(a,1);
  delay(TimeToStop);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(a,0);
  delay(TimeToPass);
};
  
void Numbers8(){

  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  delay(TimeToStop);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(TimeToPass);
};
void Numbers9(){
   digitalWrite(a,1);
   digitalWrite(b,1);
  digitalWrite(g,1);
  digitalWrite(f,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  delay(TimeToStop);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(g,0);
  digitalWrite(f,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  delay(TimeToPass);
  
};
void Numbers0(){
     digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(g,1);
  delay(TimeToStop);
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(g,0);
  delay(TimeToPass);
  }
  void red(){
    Redstate = true;
    // Red state
  digitalWrite(redOut, 1);
  Numbers9();
  Numbers8();
  Numbers7();
  Numbers6();
  Numbers5();
  Numbers4();
  Numbers3();
  Numbers2();
  Numbers1();
  digitalWrite(redOut, 0);
  delay(timeToPass);
  
  }
  void green(){ //Green state
  Redstate = false;
  digitalWrite(GreenOut, 1);
  Numbers9();
  Numbers8();
  Numbers7();
  Numbers6();
  Numbers5();
  Numbers4();
  Numbers3();
  Numbers2();
  Numbers1();
  digitalWrite(GreenOut, 0);
  delay(timeToPass);}
  void orange(){
  Redstate = true;
  digitalWrite(OrangeOut, 1);
  Numbers3();
  Numbers2();
  Numbers1();
  digitalWrite(OrangeOut, 0);
  delay(timeToPass);}
  
  void Red(){
    red();  
    green();
    orange();
  }
  void passFunc(){ 
    Red(); 
    int PushState = digitalRead(button);
    if(PushState == 1){
      if(Redstate == true){
      }else{
        Red();
        }
      
    
    }
  }
void loop() {
  passFunc();
}

