# RTOS-FreeRTOS
### Author – Fahim Akhtar

Comprehensive and scalable RTOS application suite based on FreeRTOS. This project demonstrates professional embedded architecture, including task modeling, deterministic execution, inter-task communication, memory strategies, and hardware abstraction for multiple MCU platforms.

## 🧿 Overview

This repository focuses on engineering real-time embedded applications and demonstrates the following key capabilities:

- Real-time scheduling
- Task-driven software architecture
- Synchronization primitives
- ISR safe communication
- Timing, determinism & system tick control
- Memory allocation strategies (heap_1 to heap_5)
- Peripheral + RTOS integration
- Scalable multi-MCU structure

The solutions emphasize **portability, modularity, maintainability, and platform independence**.

## 🛡️ Status & Development

| RTOS Feature      | Status         | Engineering Scope |
|-------------------|----------------|-------------------|
| Task Management   | 🔧 In-Progress | Priority control, execution model, suspend/resume, deletion |
| Scheduler         | 🔧 In-Progress | Preemptive, cooperative, tick config |
| Queues            | 🔧 In-Progress | Producer/consumer patterns |
| Semaphores        | 🔧 In-Progress | Binary, counting, mutex, recursive |
| Timers            | 🔧 In-Progress | Deadline, period & tick based execution |
| Interrupt Handling| 🔧 In-Progress | ISR→Task notifications, ISRs safe APIs |
| Memory Management | 🔧 In-Progress | Heap strategies, stack and runtime behavior |


## 📁 Repository Structure (Will update later)
```
RTOS-FreeRTOS/
├── stm32/                       # RTOS applications & configs for STM32 platform
├── arduino/                     # FreeRTOS on Arduino (future)
├── esp32/                       # FreeRTOS on ESP32 platform (future)
├── experiments/                 # Real hardware demos & peripheral integrations
└── docs/                        # Design notes, RTOS stack diagrams, debugging references
```

## 🧠 System Architecture & RTOS Components

### ✔ FreeRTOS Core Integration
- Task lifecycle: create → run → block → delete
- Scheduling behavior
- Tick management
- Idle and Timer task execution flow

### ✔ Communication & Synchronization
- Queues for message passing
- Semaphores for concurrency control
- Mutex for shared resources
- Event-driven task triggering

### ✔ RTOS + Hardware Interaction
- ISR safe RTOS APIs
- Interrupt pipelines
- GPIO/LED/task orchestration
- Timer-based task activation

### ✔ Memory & Runtime
- Configurable heap allocators
- Stack sizing strategies
- Trace/debug hooks

## 🧩 Practical Implementations

Planned & implemented examples include:

- Periodic task execution
- Task-to-task data transfer
- ISR→Task event flow (interrupt triggered scheduling)
- Producer–consumer queue design
- Shared peripheral protection using mutex
- Modular task creation framework
- Timer based scheduling mechanisms
- Debugging execution traces

(Examples increment over time as features evolve.)

## 🧰 Technical Stack

- **RTOS**: FreeRTOS Kernel (official)
- **MCUs**: STM32 → Arduino → ESP32
- **Toolchains**: ARM GCC, STM32CubeIDE
- **Debugging**: ST-Link SWD, SystemView/Ozone, Logic Analyzer
- **Language**: C

## 📐 Implementation Philosophy

This project is built with clean embedded architecture principles:

- Zero unnecessary abstraction
- Deterministic and safe design practices
- Hardware-aware RTOS integration
- Modular and reusable task model
- Separation of application and infrastructure code
- Emphasis on correctness, timing & reliability

The intent is not to showcase examples, but to demonstrate **professional embedded RTOS engineering**.

## 🔧 Hardware Requirements

Minimum:
- STM32 or equivalent MCU board
- SWD/JTAG debugger

Optional:
- Oscilloscope
- Logic Analyzer
- SystemView for trace logging

## 🧪 Testing & Debugging

Approaches include:
- Hardware level debugging
- Task execution trace
- Timing analysis
- Interrupt latency evaluation
- Context switching analysis

## 📌 Roadmap

- Expand MCU support
- Hardware abstraction integration
- TCP/IP or wireless task pipelines (ESP32)
- Driver integration under RTOS
- Low-power RTOS modes
