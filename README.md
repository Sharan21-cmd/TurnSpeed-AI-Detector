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
