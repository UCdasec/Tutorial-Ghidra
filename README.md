# Reverse Engineering Tutorial (Ghidra)

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

Tutorial Ghidra Part 1, Installation
https://www.overleaf.com/read/xwcgkqvvgtdc#30d0d6 

Tutorial Ghidra Part 2, Analysis
https://www.overleaf.com/read/vpdzmzyyjdfx#31950a 

## Tutorial Videos  

We also provide a sequence of videos that complements the tutorial documents we provide above. 

Tutorial Ghidra Part 1, Installation
https://ceas.mediaspace.kaltura.com/media/Tutorial_Reverse_Engineering_Part1_Environment_Setup++/1_o6e952ov 

Tutorial Ghidra Part 2, Step 1, Intro to Code
https://ceas.mediaspace.kaltura.com/media/Tutorial_Reverse_Engineering_Part2_Step1_Intro_Code_Example/1_bb5m2tax 

Tutorial Ghidra Part 2, Step 2, Initial Analysis
https://ceas.mediaspace.kaltura.com/media/Tutorial_Reverse_Engineering_Part2_Step2_Initial_Analysis/1_f7g1mt6n  

Tutorial Ghidra Part 2, Step 3, Ghidra UI
https://ceas.mediaspace.kaltura.com/media/Tutorial_Reverse_Engineering_Part2_Step3_Ghidra_UI/1_gq022mkd  

Tutorial Ghidra Part 2, Step 4, Passwork Craking
https://ceas.mediaspace.kaltura.com/media/Tutorial_Reverse_Engineering_Part2_Step4_Password_Cracking/1_kvveazpf  

Tutorial Ghidra Part 2, Step 5, Patching Code
https://ceas.mediaspace.kaltura.com/media/Tutorial_Reverse_Engineering_Part2_Step5_Patching_Code/1_3wtjaada 


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

## Contacts

This repo is maintained and contributed by the following members:  

Ibraham Konare, konareic@mail.uc.edu, undergrad student in Cybersecurity Engineering at UC

Ryan Evans evans2ra@mail.uc.edu, master student in Computer Sceince at UC 

Boyang Wang, boyang.wang@uc.edu, Associate Professor in ECE at UC

Research Group Webpage: https://homepages.uc.edu/~wang2ba/














