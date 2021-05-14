String inString = "";
const int end_sign = '\n';

void loop() {
    int inChar = Serial.read();
    if (inChar == -1)  // No character
        return;

    if (inChar == end_sign) {
        Serial.print("\"");
        Serial.print(inString);
        Serial.println("\"");
        inString = "";
    } else {
        inString += (char)inChar;
    }
}
