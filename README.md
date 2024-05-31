# CAN Project

## Overview

This project demonstrates the implementation of an embedded system using the CAN protocol with J1939 and CANopen stacks. It is written in C/C++ and utilizes open-source tools and libraries. The project is designed to run on a Linux system with SocketCAN support, and it provides basic functionalities for sending and receiving CAN messages using the J1939 and CANopen protocols.

## Features

- Implementation of J1939 protocol for CAN communication.
- Implementation of CANopen protocol for CAN communication.
- Basic functionalities to send and receive messages for both J1939 and CANopen.
- Structured and modular codebase for ease of understanding and extension.

## Requirements

- Linux (Ubuntu recommended)
- GCC
- CMake
- SocketCAN
- Can-utils
  
## File Structure

<img width="414" alt="Screenshot 2024-05-31 at 2 07 45 PM" src="https://github.com/MenakaGodakanda/can_project/assets/156875412/bb12a9c9-46ca-4542-98c6-378a02f83d79">

## Installation and Build Instructions

### Install necessary tools on Ubuntu:
1. Update and upgrade your system
```bash
sudo apt update
sudo apt upgrade
```

2. Install GCC
```bash
sudo apt install build-essential
```

3. Install CMake
```bash
sudo apt install cmake
```

4. Install can-utils and set up virtual CAN interface
```bash
sudo apt install can-utils
sudo modprobe vcan
sudo ip link add dev vcan0 type vcan
sudo ip link set up vcan0
```

5. Install libsocketcan for J1939 support
```bash
sudo apt install libsocketcan-dev
```

### Clone the repository:
```bash
git clone https://github.com/MenakaGodakanda/can_project.git
cd can_project
```

### Create a build directory and run CMake:
```bash
mkdir build
cd build
cmake ..
```

### Build the project:
```bash
make
```

## Usage

After building the project, an executable named `CANProject` will be created in the `build` directory. Run the executable to see the output of the J1939 and CANopen message send and receive functions.

```bash
./CANProject
```
When you run the `CANProject` executable, you should see the following output:<br><br>
![Screenshot 2024-05-31 134727](https://github.com/MenakaGodakanda/can_project/assets/156875412/c9b03e0e-66db-45de-84b4-5ab4a7fba076) <br>

Here's what each line represents:
- J1939: Sending message with ID 419385573: This indicates that the J1939 protocol has sent a message with a specific ID.
- J1939: Receiving message: This indicates that the J1939 protocol is receiving a message.
- CANopen: Sending message with ID 1537: This indicates that the CANopen protocol has sent a message with a specific ID.
- CANopen: Receiving message: This indicates that the CANopen protocol is receiving a message.

## Protocols

### J1939

J1939 is a higher-layer protocol developed by the Society of Automotive Engineers (SAE) that uses CAN as its physical layer. It is commonly used in commercial vehicles.

### CANopen

CANopen is a higher-layer protocol and profile specification for embedded control systems based on CAN. It is widely used in industrial automation.

## Verify and Debugging (optional)
### Verify Tool Installation
1. GCC: Ensure it outputs the GCC version information.
```bash
gcc --version
```

2. CMake: Ensure it outputs the CMake version information.
```bash
cmake --version
```

3. SocketCAN and Can-utils: Ensure it shows information about vcan0.
```bash
ip link show vcan0
```

4. libsocketcan:Ensure it lists headers like j1939.h.
```bash
ls /usr/include/socketcan
```

5. CANopenNode: The CANopenNode library should be compiled and installed in /usr/local/lib

### Rebuild
1. Clean the build directory:
```bash
rm -rf build
```

2. Create the build directory:
```bash
mkdir build
cd build
```

3. Run CMake to configure the project:
```bash
cmake ..
```

4. Build the project:
```bash
make
```

### Debugging
1. Check if libj1939.a and libcanopen.a are generated:
```bash
ls build/src/j1939
ls build/src/canopen
```

2. Check the linking step details by enabling verbose mode in CMake:
```bash
make VERBOSE=1
```

## License
This project is licensed under the MIT License.
