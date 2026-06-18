# Linux System Telemetry Profiler (C & Python Core)

An automated low-level performance profiling framework designed to extract hardware-level core execution matrix data directly from the Linux operating system kernel.

## Architectural Architecture Execution
- **C Engine Layer:** Interacts directly with the `/proc/stat` system architecture data to log real-time telemetry metrics.
- **Python Automation Layer:** Manages execution logic via the `subprocess` infrastructure, capturing, cleansing, and formatting raw hardware streams.

## Verified Hardware Execution Log Output
```text
--- Launching Profiler Engine ---
Iteration [1] Captured Log -> [KERNEL TELEMETRY DATA] cpu  47512 3421 18451 984512
Iteration [2] Captured Log -> [KERNEL TELEMETRY DATA] cpu  47590 3421 18490 984600
```
