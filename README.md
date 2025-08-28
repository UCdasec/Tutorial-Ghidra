# Ghidra Reverse Engineering Tutorial

This repository contains source code and compiled executables to help readers learn the basics of using **Ghidra** for reverse engineering.

## Repository Structure

```
Tutorial-Ghidra/
├── README.md               
├── bin/                   # Compiled executables (download these to follow tutorial)
│   └── Ghidra_EX_1
│   └── Ghidra_EX_2
│   └── Placeholder
├── src/                   # Source code (e.g., C/C++)
│   └── Ghidra_EX_1.cpp
│   └── Ghidra_EX_2.cpp
│   └── Placeholder  
```

## Tutorial Document 

We provide tutorial documents showing (1) how to install Linux VM and Ghidra; (2) how to utilize the code in this repo to run a reverse engineering project using Ghidra. The pdf of this tutorial can be found below 

https://www.overleaf.com/read/xwcgkqvvgtdc#30d0d6 (Tutorial Ghidra Part 1, Installation)

https://www.overleaf.com/read/vpdzmzyyjdfx#31950a (Tutorial Ghidra Part 2, Analysis)


## Instructions Notes

**Important:** All binaries are safe but should be run within a virtual machine, as they were not compiled for Windows.

### To execute the binary:

1. **Open a terminal** and navigate to the downloaded binary (e.g., `Ghidra_EX_1`):
   ```bash
   cd ~/Downloads/Ghidra_EX_1

2. Make the binary executable:
   ```bash
   chmod +x Ghidra_EX_1
   ```
3. Run it by using:
   ```bash
   ./Ghidra_EX_1
   ```








