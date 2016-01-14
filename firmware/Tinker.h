/* Globals -------------------------------------------------------------------*/
// Allow for at least 9 servos.
struct usrservos {
   Servo servo;
   int pin;
} userservos[9];

int servosinuse = 0;

/* Function prototypes -------------------------------------------------------*/
int tinkerDigitalRead(String pin);
int tinkerDigitalWrite(String command);
int tinkerAnalogRead(String pin);
int tinkerAnalogWrite(String command);
int tinkerServoOpen(String pin);
int tinkerServoClose(String command);
int tinkerServoSet(String command);
int tinkerServoRead(String command);
