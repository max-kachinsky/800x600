//Stealthx Niko
#define MOTOR_R 10
#define MOTOR_L 11
#define remote1 9 //полный вперёд
#define remote0 8 //полный назад
#define remote_l 7
#define remote_r 6
#define Vremote0 0
#define Vremote1 0
#define Vremote_l 0
#define Vremote_r 0




void setup(){
pinMode(MOTOR_R, OUTPUT);
pinMode(MOTOR_L, OUTPUT);
pinMode(remote0, INPUT);
pinMode(remote1, INPUT);
pinMode(remote_l INPUT);
pinMode(remote_r, INPUT);
analogWrite(MOTOR_R, 30);
analogWrite(MOTOR_L, 30);
delay(500);
analogWrite(MOTOR_R, 0);
analogWrite(MOTOR_L, 0);
delay(500);
}

void loop()
{
  Vremote1 = analogRead(remote1)
  Vremote0 = analogRead(remote0)
  Vremote_l = analogRead(remote_l)
  Vremote_r = analogRead(remote_r)



  if (Vremote1 < 255) {
    analogWrite(MOTOR_R, 255);
    analogWrite(MOTOR_L, 255);
  }

  /*if (remote0 == ) {
    analogWrite(MOTOR_R, 0);
    analogWrite(MOTOR_L, 0);
  }*/

  if (Vremote_r < 255) {
    analogWrite(MOTOR_R, 255);
  }

  if (Vremote_l < 255) {
    analogWrite(MOTOR_L, 255);
  }
  
}
