


#define LOCK_1 14
#define LOCK_2 27
#define LOCK_3 26
#define LOCK_4 25


void head_lock(int t);
void head_unlock(int t);


void setup(){

  Serial.begin(115200);
  pinMode(LOCK_1, OUTPUT);
  pinMode(LOCK_2, OUTPUT);
  pinMode(LOCK_3, OUTPUT);
  pinMode(LOCK_4, OUTPUT);
  digitalWrite(LOCK_1, LOW);
  digitalWrite(LOCK_2, LOW);
  digitalWrite(LOCK_3, LOW);
  digitalWrite(LOCK_4, LOW);
  delay(3000);

}


void loop(){

  head_unlock(2000);
  delay(3000);
  head_lock(1000);
  delay(3000);

  
}



void head_lock(int t){
  digitalWrite(LOCK_1, LOW);
  digitalWrite(LOCK_2, LOW);
  digitalWrite(LOCK_3, LOW);
  digitalWrite(LOCK_4, LOW);
  delay(t);
}


void head_unlock(int t){
  digitalWrite(LOCK_1, HIGH);
  Serial.println("Lock-1");
  delay(t);

  
  digitalWrite(LOCK_2, HIGH);
  Serial.println("Lock-2");
  delay(t);
  
  digitalWrite(LOCK_3, HIGH);
  Serial.println("Lock-3");
  delay(t);
  
  digitalWrite(LOCK_4, HIGH);
  Serial.println("Lock-4");
  delay(t);

}
