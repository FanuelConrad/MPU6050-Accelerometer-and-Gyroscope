# MPU6050 Interfacing with Arduino Uno

This repository contains a simple guide and example code for interfacing the MPU6050 accelerometer and gyroscope sensor with an Arduino Uno board.

## Prerequisites

To successfully interface the MPU6050 with Arduino Uno, you'll need the following:

- Arduino Uno board
- MPU6050 sensor module
- Jumper wires
- Arduino IDE (Integrated Development Environment) installed on your computer

## Hardware Setup

1. Connect the `VCC` pin of the MPU6050 to the `5V` pin on the Arduino Uno.
2. Connect the `GND` pin of the MPU6050 to the `GND` pin on the Arduino Uno.
3. Connect the `SDA` pin of the MPU6050 to the `A4` pin (analog pin 4) on the Arduino Uno.
4. Connect the `SCL` pin of the MPU6050 to the `A5` pin (analog pin 5) on the Arduino Uno.

Make sure to power off the Arduino Uno before making any connections.

## Software Setup

1. Install the Arduino IDE on your computer if you haven't already.
2. Open the Arduino IDE.
3. Go to **File** -> **Examples** -> **MPU6050** -> **Examples** -> **MPU6050_DMP6**. This will open the example code for using the MPU6050 sensor.
4. Connect your Arduino Uno board to your computer using a USB cable.
5. In the Arduino IDE, go to **Tools** -> **Board** and select **Arduino Uno**.
6. Select the appropriate **Port** under **Tools** -> **Port** to which your Arduino Uno is connected.
7. Click the **Upload** button to compile and upload the code to your Arduino Uno board.

## Testing

Once the code is successfully uploaded to your Arduino Uno, open the Serial Monitor in the Arduino IDE by clicking on the magnifying glass icon in the top right corner of the IDE. Set the baud rate to 115200.

You should see the sensor readings (accelerometer and gyroscope) being displayed in the Serial Monitor. You can move the sensor around to see the values change.

## Customization

Feel free to modify the example code according to your requirements. You can explore other example sketches provided by the MPU6050 library to access different functionalities of the sensor.

## Resources

For more information about the MPU6050 and its functionalities, you can refer to the following resources:

- [MPU6050 Datasheet](https://www.invensense.com/wp-content/uploads/2015/02/MPU-6000-Datasheet1.pdf)
- [Arduino MPU6050 Library](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/MPU6050)

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as per your needs.

Please note that this is a basic readme file and you may need to refer to additional resources or documentation for more advanced implementation and troubleshooting.
