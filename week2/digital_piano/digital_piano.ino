void loop() {
  if (digitalRead(8)) tone(5, 262);
  else if (digitalRead(9)) tone(5, 294);
  else if (digitalRead(10)) tone(5, 330);
  else if (digitalRead(11)) tone(5, 349);
  else noTone(5);
}
bool isMajor = true;
// Inside loop():
if (digitalRead(12) == LOW) { // Mode toggle button
  isMajor = !isMajor;
  delay(250); // Simple debounce
}
// Use isMajor to pick between majorNotes[] and minorNotes[]
