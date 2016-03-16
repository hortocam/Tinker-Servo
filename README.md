Simple calling interface for GPIO pins and the servo libary.

Added four new function handlers:

/servoOpen
/servoClose
/servoSet
/servoRead

You are allowed up to eight servos open at any one time.

Functions overview:

/servoOpen - Takes a gpio pin i.e. D1. Returns a index to the server used. This index will be passed to the remaining functions to perform operation on the servo.
/servoClose - Takes a servo index returned by servoOpen. Calls servo.detach() for the pin assigned.
/servoSet - Takes a servo index and a angle (0-179).
/servoRead - Takes a servo index and returns the last value sent to the servo.

I am working on a browser based servo tester/driver now. It is in flux now. 
