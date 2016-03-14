/*
   Tinker library PLUS servo lib exposure.

   Wiring interface by Particle.io(???)

   Servo library interface by: Scott Beasley - 2016
   ---------------------------------------------------------------------

   GNU General Public License

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

/* Function prototypes -------------------------------------------------------*/
int tinkerDigitalRead(String pin);
int tinkerDigitalWrite(String command);
int tinkerAnalogRead(String pin);
int tinkerAnalogWrite(String command);
int tinkerServoOpen(String pin);
int tinkerServoClose(String command);
int tinkerServoSet(String command);
int tinkerServoRead(String command);
void init_tinker_servo (void);

// Allow for at least 9 servos.
typedef struct userservos {
   Servo servo;
   int pin;
} USERSERVOS;

extern USERSERVOS userservos[8];

extern int servosinuse;
