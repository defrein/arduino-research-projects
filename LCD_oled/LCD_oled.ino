#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Display dimensions
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Create an instance of the display
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    // Wait for the serial port to be available
  }

  // Initialize the display with the I2C address 0x3C
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  display.clearDisplay();

  // Display the running text
  String text = "I love you bby";
  
  int16_t x1, y1; // Start position (not used, so can be set to zero)
  uint16_t textWidth, textHeight;
  display.getTextBounds(text, 0, 0, x1, y1, textWidth, textHeight);

  int startX = SCREEN_WIDTH;

  for (int x = startX; x > -textWidth; x--) {
    display.clearDisplay();
    display.setCursor(x, (SCREEN_HEIGHT - textHeight) / 2); // Center text vertically
    display.println(text);
    display.display();
    delay(10); // Adjust delay for scrolling speed
  }
}
