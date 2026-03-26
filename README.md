# TurnSpeed AI Detector

A machine learning project to detect button press speed using embedded systems and Edge Impulse.

## Description

The **TurnSpeed AI Detector** measures the duration of button presses and classifies them using a neural network model trained in **Edge Impulse**. The project combines embedded systems programming (Arduino/STM32) with AI, allowing real-time detection of different press speeds.

- Reads button press duration in seconds.
- Sends data via serial to Edge Impulse.
- Trains a classification model to distinguish between different types of presses (e.g., `speed press`, `fast press`).
- Can be deployed on microcontrollers for real-time inference.

## Features

- Continuous or manual button press data collection.
- Real-time streaming to Edge Impulse for training.
- Easy-to-train neural network using Flatten and Classification blocks.
- Supports deployment on Arduino/STM32 boards.

## Project Structure
TurnSpeed-AI-Detector/
│
├─ src/ # Embedded code (Arduino/STM32)
│ └─ TurnSpeed.ino
│
├─ data/ # CSV or JSON dataset from Edge Impulse
│ └─ speed_press_*.csv
│
├─ model/ # Exported Edge Impulse model for deployment
│ └─ model.h / model.cpp
│
└─ README.md # Project documentation

## Getting Started

### Prerequisites

- Arduino IDE or STM32 development environment.
- Edge Impulse account: [https://studio.edgeimpulse.com](https://studio.edgeimpulse.com)
- Microcontroller (Arduino, STM32, etc.)
- USB connection to your board.

### Instructions

1. **Upload the code** in `src/TurnSpeed.ino` to your board.  
2. **Open Edge Impulse Data Forwarder** to collect button press data:  

```bash
edge-impulse-data-forwarder --frequency 2
Record samples in Edge Impulse Studio with appropriate labels (e.g., speed press).
Add processing block: Flatten → select axis speed.
Add learning block: Classification → configure output layer with number of labels.
Train the neural network with your dataset.
Export the trained model for deployment to your microcontroller.
Usage
Press the button to record your speed samples.
Edge Impulse classifies the type of press in real-time.
Use the trained model for real-time AI inference on your board.
License

This project is MIT Licensed. See LICENSE
 for details.

Author

Sharan K U – Electronics & Communication Engineer | Embedded Systems Enthusiast
