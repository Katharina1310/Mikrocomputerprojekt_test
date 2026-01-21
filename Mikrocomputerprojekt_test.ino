/*
  Mein erstes GitHub-Projekt
  Dieses Programm lässt die interne LED blinken und
  sendet einen Text an den Computer.
*/

// Die Pin-Nummer der eingebauten LED (meistens Pin 13)
const int ledPin = LED_BUILTIN;

void setup() {
  // Initialisiere den LED-Pin als Ausgang:
  pinMode(ledPin, OUTPUT);
  
  // Starte die serielle Kommunikation mit 9600 Baud:
  Serial.begin(9600);
  
  Serial.println("System gestartet. Das Blinken beginnt...");
}

void loop() {
  // LED einschalten
  digitalWrite(ledPin, HIGH);
  Serial.println("LED ist AN");
  delay(1000); // 1 Sekunde warten (1000 Millisekunden)

  // LED ausschalten
  digitalWrite(ledPin, LOW);
  Serial.println("LED ist AUS");
  delay(1000); // 1 Sekunde warten
}