int val1 = 0;
int val2 = 0;
const int sensor1_pin = 5;
const int sensor2_pin = 4;

void setup() {
  Serial.begin(9600);
  pinMode(sensor1_pin, OUTPUT);
  pinMode(sensor2_pin, OUTPUT);
}

int sensorRead1() {
  digitalWrite(sensor1_pin, HIGH); // sensor1 turn On
  digitalWrite(sensor2_pin, LOW); // sensor2 turn Off
  return analogRead(A0);
}

int sensorRead2() {
  digitalWrite(sensor1_pin, LOW); //  sensor1 turn Off
  digitalWrite(sensor2_pin, HIGH); // sensor2 turn on
  return analogRead(A0);
}

void loop() {
  val1 = sensorRead1(); // Read Analog value of first sensor
  delay(200);
  val2 = sensorRead2(); // Read Analog value of second sensor
  delay(200);
  Serial.println("sensor 1 reading = ");
  Serial.print(val1);
  Serial.print(", sensor 2 reading = ");
  Serial.println(val2);
}
