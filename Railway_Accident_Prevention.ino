#include <Servo.h>

Servo myservo;  // Create a servo object
int trigPin = 10;  // Define the trigger pin for the ultrasonic sensor
int echoPin = 11;  // Define the echo pin for the ultrasonic sensor
int threshold = 20;  // Set the threshold distance in cm for object detection
int servoPosition = 0;  // Variable to store the servo position

void setup() {
  myservo.attach(9);  // Attach the servo to pin 9
  myservo.write(servoPosition);  // Move the servo to its initial position
  Serial.begin(9600);  // Initialize serial communication

  pinMode(trigPin, OUTPUT);  // Set the trigger pin as an output
  pinMode(echoPin, INPUT);   // Set the echo pin as an input
}

void loop() {
  long duration, distance;

  // Clear the trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Set the trigger to HIGH for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo pin
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in cm
  distance = duration * 0.034 / 2;  // Speed of sound is 0.034 cm/µs

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < threshold) {
    // Object detected
    myservo.write(90);  // Rotate servo to 90 degrees (counterclockwise)
    Serial.println("Object detected");
    delay(1000);  // Delay for 1 second before returning
  } else {
    // No object detected
    myservo.write(0);  // Return servo to its original position
    Serial.println("No object detected");
  }

  delay(3000);  // Add a small delay for stability
}
