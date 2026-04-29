# Reverse Engineering Tutorial

This repository contains source code and compiled executables to help readers learn the basics of using **Ghidra** for reverse engineering. Additional similar steps using other tools, including **Binary Ninja** and **IDA (Free)**, are also included.

## Repository Structure

```
Tutorial-Ghidra/
├── README.md
├── bin/                   # Compiled executables (download these to follow tutorial)
│   └── Ghidra_EX_1
│   └── Ghidra_EX_2
│   └── example_1_password
│   └── example_1_patch_ghidra
│   └── example_1_patch_binja
│   └── example_1_patch_ida
├── src/                   # Source code (e.g., C/C++)
│   └── Ghidra_EX_1.cpp
│   └── Ghidra_EX_2.cpp
│   └── example_1_password.c
├── document/              # Tutorial documents
│   └── RE_Tutorial_Part1.pdf
│   └── RE_Tutorial_Part2.pdf
│   └── RE_Tutorial_Part3.pdf
```

## Tutorial Document

We provide tutorial documents showing (1) how to install Linux VM and Ghidra; (2) how to utilize the C++ code in this repo to run a reverse engineering project using Ghidra/Binary Ninja; (3) how to utilize the C code in this repo to run a reverse engineering project using Ghidra/Binary Ninja/IDA; The pdfs of this tutorial can be found below

Tutorial Ghidra Part 1, Installation
https://www.overleaf.com/read/xwcgkqvvgtdc#30d0d6

Tutorial Ghidra Part 2, Analysis (C++ Code)
https://www.overleaf.com/read/vpdzmzyyjdfx#31950a

Tutorial Ghidra Part 3, Analysis (C Code)
TBD

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

Tutorial Ghidra Part 2, Step 4, Password Cracking
https://ceas.mediaspace.kaltura.com/media/Tutorial_Reverse_Engineering_Part2_Step4_Password_Cracking/1_kvveazpf

Tutorial Ghidra Part 2, Step 5, Patching Code
https://ceas.mediaspace.kaltura.com/media/Tutorial_Reverse_Engineering_Part2_Step5_Patching_Code/1_3wtjaada

## Instructions Notes

**Important:** All binaries are safe but should be run within a virtual machine, as they were not compiled for Windows.

### To execute the binary:

1. **Open a terminal** and navigate to the downloaded binary (e.g., `Ghidra_EX_1`):

   ```bash
   cd ~/Downloads/Ghidra_EX_1

   ```

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

Max Shapiro, tsvyetmx@mail.uc.edu, undergrad student in Computer Science at UC

Ryan Evans evans2ra@mail.uc.edu, master student in Computer Sceince at UC

Boyang Wang, boyang.wang@uc.edu, Associate Professor in ECE at UC

DaSec Lab Webpage: https://homepages.uc.edu/~wang2ba/
