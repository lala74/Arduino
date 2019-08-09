#define PIN_RED       2
#define PIN_GREEN     3
#define PIN_BLUE      4
#define DELAY_TIME    3

int red_value = 0;
int green_value = 0;
int blue_value = 0;

void setup() {
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);
}
void loop() {
//  if (red_value > 255) {
//    red_value = 0; 
//  } else {
//    red_value += 1;
//  }
//
//  if (green_value > 255) {
//    green_value = 0; 
//  } else {
//    green_value += 2;
//  }
//
//  if (blue_value > 255) {
//    blue_value = 0; 
//  } else {
//    blue_value += 4;
//  }
//
//  RGB_color(red_value, green_value, blue_value);
//
//  delay(DELAY_TIME);

    for(red_value=0; red_value<255; red_value++) {
      RGB_color(red_value, green_value, blue_value);
      delay(DELAY_TIME);
    }
    for(green_value=0; green_value<255; green_value++) {
      RGB_color(red_value, green_value, blue_value);
      delay(DELAY_TIME);
    }
    for(blue_value=0; blue_value<255; blue_value++) {
      RGB_color(red_value, green_value, blue_value);
      delay(DELAY_TIME);
    }

    for(red_value=255; red_value>0; red_value--) {
      RGB_color(red_value, green_value, blue_value);
      delay(DELAY_TIME);
    }
    for(green_value=255; green_value>0; green_value--) {
      RGB_color(red_value, green_value, blue_value);
      delay(DELAY_TIME);
    }
    for(blue_value=255; blue_value>0; blue_value--) {
      RGB_color(red_value, green_value, blue_value);
      delay(DELAY_TIME);
    }
  
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(PIN_RED, 255 - red_light_value);
  analogWrite(PIN_GREEN, 255 - green_light_value);
  analogWrite(PIN_BLUE, 255 - blue_light_value);
}
