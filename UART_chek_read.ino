
//#include <SPI.h>
void setup() {
Serial1.begin(9600); //TX-PA9/RX-PA10
Serial.begin(9600); //USB (PA11/PA12)
pinMode(PA5, OUTPUT);
pinMode(PA6, OUTPUT);


digitalWrite(PA5, HIGH);
digitalWrite(PA6, LOW);
delay(1000);

}

void loop() {
byte message[] = {0xFF, 0x56, 0xAE, 0x35, 0xA9, 0x55, 0xF0 };
Serial1.write(message, sizeof(message));
Serial.println("Hi-3");
delay(1000);
}
