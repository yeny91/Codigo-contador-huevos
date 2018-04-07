//Este codigo nos permite contabilizar 2 huevos usando para posicion un fin de carrera
// CONEXIONES ELECTRICAS
// PIN 1 PULSADOR1 -->  5V
// Pin 2 PULSADOR1 --> D6 (DIGITAL 6 DEL ARDUINO MEGA)
// PIN 1 PULSADOR2 -->  5V
// Pin 2 PULSADOR2 --> D7 (DIGITAL 7 DEL ARDUINO MEGA)

// para realizar esta programacion nos basamos del siguiente tutorial 
// Tomado de https://tuelectronica.es/como-conectar-un-pulsador-en-arduino/




// this constant won't change:
const int  buttonPin1 = 6;    // the pin that the pushbutton is attached to
const int  buttonPin2 = 7;    // the pin that the pushbutton is attached to
const int ledPin = 13;       // the pin that the LED is attached to

// Variables will change:

int buttonState1 = 0;         // current state of the button
int buttonState2 = 0;         // current state of the button


void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin1, INPUT);
   pinMode(buttonPin2, INPUT);
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
  // read the pushbutton input pin:
  buttonState1 = digitalRead(buttonPin1);
   buttonState2 = digitalRead(buttonPin2);

 
 
    if ((buttonState1 == HIGH) &&( buttonState2 == HIGH )) {
      digitalWrite(ledPin, HIGH);      
      Serial.println(" 2 HUEVOS");
      delay(500);
    
    }
    else if ((buttonState1 == HIGH) || (buttonState2 == HIGH)) {
      digitalWrite(ledPin, HIGH);      
      Serial.println(" 1 HUEVOS");
      delay(500);
    
            
    }

        else  {
      digitalWrite(ledPin, LOW);      
      Serial.println(" 0 HUEVOS");
      delay(500);
    
            
    }  
   
    }
    

