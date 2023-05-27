#include <Arduino.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

void setupMPU6050()
{
  // Try to initialize
  if (!mpu.begin())
  {
    Serial.println("Failed to find MPU6050 chip");
    while (1)
    {
      delay(10);
    }
  }
  Serial.println("MPU6050 found!");

  // set accelerometer range to +-8G
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);

  // set gyro range to +- 500 deg/s
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);

  // set filer bandwidth to 21 Hz
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);

  delay(100);
}

float getRollAngle(float ay, float az)
{
  float roll = atan2f(ay, az); // radians
  return roll;
}

float getPitchAngle(float ax, float g){
  float pitch=asinf((ax/g));
  return pitch;
}

void readSensorValues()
{
  /*Get new sensor events with the readings*/
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  /*Print out the values*/
  Serial.print("Acceleration X: ");
  Serial.print(a.acceleration.x);
  Serial.print(", Y: ");
  Serial.print(a.acceleration.y);
  Serial.print(", Z: ");
  Serial.print(a.acceleration.z);
  Serial.println(" m/s^2");

  Serial.print("Rotation X: ");
  Serial.print(g.gyro.x);
  Serial.print(", Y: ");
  Serial.print(g.gyro.y);
  Serial.print(", Z: ");
  Serial.print(g.gyro.z);
  Serial.println(" rad/s");

  Serial.print("Temperature: ");
  Serial.print(temp.temperature);
  Serial.println(" degC");

Serial.print("Pitch: ");
  Serial.print(getPitchAngle(a.acceleration.x, 9.81));
  Serial.println(" rad");

  Serial.print("Roll: ");
  Serial.print(getRollAngle(a.acceleration.y, a.acceleration.z));
  Serial.println(" rad");

  Serial.println("");
}

void setup(void)
{
  Serial.begin(115200);
  setupMPU6050();
}

void loop()
{
  readSensorValues();
  delay(500);
}