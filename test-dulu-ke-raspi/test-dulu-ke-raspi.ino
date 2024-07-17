
void setup()
{
    Serial.begin(9600);
    while (!Serial)
    {
        ; // wait for serial port to connect. Needed for native USB
    }
}

void loop()
{
    if (Serial.available() > 0)
    {
            Serial.write("A", 1);
    }
}
