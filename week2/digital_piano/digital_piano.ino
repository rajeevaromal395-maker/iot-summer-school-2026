void loop() {
  if (digitalRead(8)) tone(5, 262);
  else if (digitalRead(9)) tone(5, 294);
  else if (digitalRead(10)) tone(5, 330);
  else if (digitalRead(11)) tone(5, 349);
  else noTone(5);
  // Add this inside loop()
int pressedCount = digitalRead(8) + digitalRead(9) + digitalRead(10) + digitalRead(11);
if (pressedCount >= 2) {
  tone(5, 392); // Sol chord
} else {
  // ... keep your existing 4-key logic here ...
}
}
bool isMajor = true;
// Inside loop():
if (digitalRead(12) == LOW) { // Mode toggle button
  isMajor = !isMajor;
  delay(250); // Simple debounce
}
// Use isMajor to pick between majorNotes[] and minorNotes[]
bool isMajor = true;
// Inside loop():
if (digitalRead(12) == LOW) { // Mode toggle button
  isMajor = !isMajor;
  delay(250); // Simple debounce
}
// Use isMajor to pick between majorNotes[] and minorNotes[]
