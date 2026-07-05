// Define Pins
const int redPin = 2;
const int yellowPin = 3;
const int greenPin = 4;
const int buttonPin = 7;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Using internal pull-up
  Serial.begin(9600);
}

void loop() {
  // Check for Pedestrian Button
  if (digitalRead(buttonPin) == LOW) {
    handlePedestrian();
  }

  // Traffic Light Sequence
  lightState("RED", redPin, 5000);
  lightState("YELLOW", yellowPin, 2000);
  lightState("GREEN", greenPin, 4000);
}

void lightState(String color, int pin, int duration) {
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  
  digitalWrite(pin, HIGH);
  Serial.print(millis());
  Serial.print(" ms: Light State -> ");
  Serial.println(color);
  delay(duration);
}

void handlePedestrian() {
  Serial.println("Pedestrian button pressed! Forcing RED.");
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(8000);
}
