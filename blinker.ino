#define button_pin 2
#define reset_pin 5
bool button_state;

#define green_LED 3
#define red_LED 4

int number_of_green_LED_blinks = 0;
int number_of_red_LED_blinks = 0;

unsigned long green_LED_blink_time = 250;
unsigned long previous_green_LED_time = 0;
bool green_LED_state = LOW;

unsigned long red_LED_blink_time = 250;
unsigned long previous_red_LED_time = 0;
bool red_LED_state = LOW;

void setup()
{}

void loop()
{}