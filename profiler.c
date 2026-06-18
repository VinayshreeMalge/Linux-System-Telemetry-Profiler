import subprocess
import os
import sys

def run_hardware_audit():
    print(f"--- Launching Profiler Engine on Host OS: {sys.platform} ---")
    binary_path = "./profiler_engine"

    if not os.path.exists(binary_path):
        print("Error: Compiled C execution engine binary not found!")
        return

    # Spawn the C binary as an isolated low-level system subprocess
    result = subprocess.run([binary_path], capture_output=True, text=True)

    # Process raw text stream output captured from the kernel space logs
    raw_lines = result.stdout.strip().split('\n')
    for index, line in enumerate(raw_lines):
        print(f"Iteration [{index + 1}] Captured Log -> {line}")

if __name__ == "__main__":
    run_hardware_audit()
