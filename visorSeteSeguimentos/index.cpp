const int A = 7;
const int B = 6;
const int C = 4;
const int D = 2;
const int E = 1;
const int F = 9;
const int G = 10;

const int PT =5;
boolean ligaBotao = false;
const int l = 1, d = 0;

void setup(){
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(PT, OUTPUT);
}

void loop() {
 
  
   //0
    digitalWrite(A, l);
    digitalWrite(B, d);
    digitalWrite(C, d);
    digitalWrite(D, d);
    digitalWrite(E, d);
    digitalWrite(F, d);  
  delay(1000);
  
  //1
    digitalWrite(A, d);
    digitalWrite(B, d);
    digitalWrite(C, d);
    digitalWrite(D, d);
    digitalWrite(E, d);
    digitalWrite(F, l);  
    digitalWrite(G, d);
  delay(1000);
  
   //2
    digitalWrite(A, d);
    digitalWrite(B, l);
    digitalWrite(C, d);
    digitalWrite(D, d);
    digitalWrite(E, d);
    digitalWrite(F, l);  
    digitalWrite(G, d);
  delay(1000);
    
  //3
    digitalWrite(A, l);
    digitalWrite(B, l);
    digitalWrite(C, d);
    digitalWrite(D, d);
    digitalWrite(E, d);
    digitalWrite(F, l);  
    digitalWrite(G, d);
    delay(1000);
  
    //4
    digitalWrite(A, d);
    digitalWrite(B, l);
    digitalWrite(C, d);
    digitalWrite(D, d);
    digitalWrite(E, d);
    digitalWrite(F, l);  
    digitalWrite(G, l);

    delay(1000);
  
   //5
    digitalWrite(A, l);
    digitalWrite(B, l);
    digitalWrite(C, d);
    digitalWrite(D, d);
    digitalWrite(E, d);
    digitalWrite(F, l);  
    digitalWrite(G, l);

    delay(1000);
  
   //6
    digitalWrite(A, d);
    digitalWrite(B, d);
    digitalWrite(C, d);
    digitalWrite(D, d);
    digitalWrite(E, d);
    digitalWrite(F, d);  
    digitalWrite(G, l);
 
    delay(1000);
  
    //7
    digitalWrite(A, d);
    digitalWrite(B, d);
    digitalWrite(C, d);
    digitalWrite(D, d);
    digitalWrite(E, l);
    digitalWrite(F, d);  
    digitalWrite(G, l);
  
    delay(1000);
  
    //8
   digitalWrite(A, d);
    digitalWrite(B, d);
    digitalWrite(C, l);
    digitalWrite(D, d);
    digitalWrite(E, l);
    digitalWrite(F, d);  
    digitalWrite(G, l);
   
    delay(1000);
  
    //9
   digitalWrite (A, d);
    digitalWrite(B, d);
    digitalWrite(C, l);
    digitalWrite(D, l);
    digitalWrite(E, l);
    digitalWrite(F, d);  
    digitalWrite(G, l);
  
    delay(1000);
  
     //10
    digitalWrite(A, l);
    digitalWrite(B, d);
    digitalWrite(C, l);
    digitalWrite(D, l);
    digitalWrite(E, l);
    digitalWrite(F, d);  
    digitalWrite(G, l);
   
    delay(1000);
  
     //11
    digitalWrite(A, d);
    digitalWrite(B, d);
    digitalWrite(C, l);
    digitalWrite(D, l);
    digitalWrite(E, l);
    digitalWrite(F, l);  
    digitalWrite(G, l);
   
    delay(1000);
  
   //12
    digitalWrite(A, d);
    digitalWrite(B, l);
    digitalWrite(C, l);
    digitalWrite(D, l);
    digitalWrite(E, l);
    digitalWrite(F, l);  
    digitalWrite(G, l);
 
    delay(1000);
}

