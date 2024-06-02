# CAN Project - Version 1
This project demonstrates the implementation of J1939 and CANopen protocols using C/C++.

## Features of the project:
1. CAN Protocol Integration: Implements both `J1939` and `CANopen` protocols for Controller Area Network (CAN) communication, commonly used in automotive and industrial applications.

2. Message Sending and Receiving: Provides functionalities to send and receive messages for both J1939 and CANopen protocols, facilitating data exchange over the CAN bus.

3. SocketCAN Support: Utilizes SocketCAN, a set of open-source CAN drivers and a networking stack, which is integrated into the Linux kernel, allowing seamless CAN communication on Linux systems.

4. Modular Design: The project is structured with separate modules for J1939 and CANopen, making it easy to understand, maintain, and extend. Each module has its own source and header files.

5. C/C++ Implementation: Written in C/C++ to leverage the performance and low-level hardware access capabilities of these languages, crucial for embedded systems development.

6. Cross-Platform Development: Although targeted for Linux, the code is portable and can be adapted to other platforms that support CAN communication with minimal modifications.

7. Open-Source Tools: The project uses open-source tools like GCC for compiling, CMake for building the project, and can-utils for CAN utilities, making it accessible and cost-effective.

8. Example Code: Includes example code in the main.cpp file to demonstrate the usage of J1939 and CANopen APIs, providing a starting point for users to develop their own CAN applications.

9. Educational Resource: Serves as an educational resource for those learning about CAN communication and embedded systems programming, with clear and well-documented code.

10. Scalability: Designed to be scalable, allowing users to add more complex CAN operations and integrate additional CAN protocols or custom functionalities as needed.

## Model-based Diagram:

Model-based diagram of the CAN Project involves illustrating the various components and their interactions. The combination of block diagrams and flowcharts represent the structure and flow of the project. Below is the high-level block diagram of the project architecture and a detailed flowchart for the main function's operations.

### Project Architecture
<img width="239" alt="Screenshot 2024-06-02 at 12 59 50 PM" src="https://github.com/MenakaGodakanda/can_project/assets/156875412/16695e6d-d4a3-463d-9654-a10be5e0f270"><br>

In this diagram:
- CAN Project: The main project container.
  - main.cpp: The main entry point of the application.
  - J1939 Module: Contains the J1939 protocol implementation.
    - j1939.h: Header file with function declarations.
    - j1939.c: Source file with function implementations.
  - CANopen Module: Contains the CANopen protocol implementation.
    - canopen.h: Header file with function declarations.
    - canopen.c: Source file with function implementations.

### Main Function Flow
<img width="334" alt="Screenshot 2024-06-02 at 12 57 56 PM" src="https://github.com/MenakaGodakanda/can_project/assets/156875412/c32b0a17-606c-4654-8a8e-ce029439bae0"><br>

In this diagram:
- Start: The entry point of the main function.
- Initialize ID, Data, Length: Initializes variables for message ID, data array, and data length.
- J1939 Send Message: Calls the j1939_send_message() function to send a J1939 message.
- J1939 Receive Message: Calls the j1939_receive_message() function to receive a J1939 message.
- CANopen Send Message: Calls the canopen_send_message() function to send a CANopen message.
- CANopen Receive Message: Calls the canopen_receive_message() function to receive a CANopen message.
- End: The main function ends.

## Project Structure:
<img width="414" alt="Screenshot 2024-05-31 at 2 07 45 PM" src="https://github.com/MenakaGodakanda/can_project/assets/156875412/b15a6d03-73de-4ded-8a57-b989ee583431">


## Coding Details:
This project implements a CAN protocol integration.

### Main Program (main.cpp)
- The main.cpp file is the entry point of the project. 
- It demonstrates how to use the J1939 and CANopen functionalities by calling their respective send and receive functions.
- Header Inclusions: Includes headers for J1939 and CANopen protocols.
- Main Function: Initializes message ID, data, and length, and calls the send and receive functions for both protocols.

### Header File for J1939 Protocol (j1939.h)
- The header file for the J1939 protocol declares the functions to send and receive J1939 messages.
- Header Guards: Prevent multiple inclusions of the same header file.
- C++ Compatibility: Ensures compatibility with C++ compilers by using extern "C".
- Function Declarations: Declares j1939_send_message and j1939_receive_message functions.

### J1939 Protocol Implementation (j1939.c)
- The source file for the J1939 protocol implements the send and receive functions.
- Header Inclusion: Includes the J1939 header file.
- Send Function: Implements j1939_send_message to print a message indicating the ID of the message being sent.
- Receive Function: Implements j1939_receive_message to print a message indicating a message reception.

### Header File for CANopen Protocol (canopen.h)
- The header file for the CANopen protocol declares the functions to send and receive CANopen messages.
- Header Guards: Prevent multiple inclusions of the same header file.
- C++ Compatibility: Ensures compatibility with C++ compilers by using extern "C".
- Function Declarations: Declares canopen_send_message and canopen_receive_message functions.

### CANopen Protocol Implementation (canopen.c)
- The source file for the CANopen protocol implements the send and receive functions.
- Header Inclusion: Includes the CANopen header file.
- Send Function: Implements canopen_send_message to print a message indicating the ID of the message being sent.
- Receive Function: Implements canopen_receive_message to print a message indicating a message reception.

### Root CMake Configuration (CMakeLists.txt)
- The root CMake configuration file defines the overall project structure and specifies how to build it.
- CMake Minimum Version: Specifies the minimum required version of CMake.
- Project Name: Defines the name of the project.
- C++ Standard: Sets the C++ standard to C++11.
- Include Directories: Specifies the directory for header files.
- Subdirectories: Adds the J1939 and CANopen subdirectories.
- Executable and Linking: Defines the executable and links it with the J1939 and CANopen libraries.

### J1939 CMake Configuration (CMakeLists.txt)
- The CMake configuration file for the J1939 module.
- Library Definition: Defines a static library j1939 from the j1939.c source file.
- Include Directories: Specifies the include directory for the J1939 headers, making them accessible to other parts of the project.

### CANopen CMake Configuration (CMakeLists.txt)
- The CMake configuration file for the CANopen module.
- Library Definition: Defines a static library canopen from the canopen.c source file.
- Include Directories: Specifies the include directory for the CANopen headers, making them accessible to other parts of the project.

### Summary
- This project provides a simple yet comprehensive example of implementing and using J1939 and CANopen protocols in a CAN-based embedded system. 
- The modular structure, clear coding practices, and detailed CMake configurations make it an excellent starting point for learning and developing more complex CAN communication applications. 
- The example code in main.cpp demonstrates basic usage, while the well-organized directory structure ensures ease of maintenance and extension.
