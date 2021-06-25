int sensorPin = A0; //memperkenalkan Program yang akan di baca
int sensorValue = 0;//Valeu awal dari sensor Ldr
//memperkenalkan LED Yang menjadi Indikator dari LDR 
const int pinLed1 = 2;
const int pinLed2 = 3;
const int pinLed3 = 4;

void setup(){

  Serial.begin(9600);//inisialisasi port serial
  pinMode(7,OUTPUT);//Inisialisasasi Lampu Hidup
  pinMode(2,OUTPUT);//Inisialisasasi Led Hidup
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
} 

void loop(){
  sensorValue=analogRead(sensorPin);//membaca nilai analog pin A5
  Serial.println(sensorValue);//Mencetak Hasil pada monitor serial
  float voltage =sensorValue *(5.0/1023.0);
  Serial.println(voltage);

  if(voltage<=1){
    digitalWrite (7,HIGH);
    digitalWrite (2,HIGH);
    digitalWrite (3,HIGH);}
    else{
      digitalWrite(7,LOW);
      digitalWrite(4,HIGH);
    }
    delay(1000);

 
  }
