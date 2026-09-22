<img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/devicon/devicon-original.svg" alt="Assembly" width="80" align="right" />

# Assembly

![Assembly](https://img.shields.io/badge/Assembly-6E4C13?style=flat&logo=gnubash&logoColor=white)
![Architecture](https://img.shields.io/badge/architecture-8086-lightgrey)
![Status](https://img.shields.io/badge/status-ongoing-yellow)

The lowest level in this repository. Assembly is where the abstractions disappear and you work directly with registers, memory, and interrupts.

---

## 📌 What This Folder Covers

These programs implement familiar problems — the same kind you'd solve in a few lines of C — but without loops, functions, or variables as you know them. Topics covered include:

- Data and code segment setup
- Registers and moving values between them
- Memory addressing and working through arrays
- Loops built from counters and conditional jumps
- Comparison and branching
- DOS interrupts for output
- Stack operations

---

## 🧭 How This Folder Is Organised

Files are named after the problem they solve. There's no strict numbering here, because each program is largely self-contained — but the concepts do stack. Reading any one file end to end will show you the full structure of an 8086 program, since there's no way to hide setup and teardown the way higher-level languages do.

---

## 🖥️ Running the Code

These target 8086 assembly and are typically assembled with **MASM** or **TASM**, and run in **DOSBox** on a modern machine:

```bash
masm filename.asm
link filename.obj
filename.exe
```

Setup varies by toolchain — if you're new to this, DOSBox with MASM is the most commonly documented route.

---

## 🎯 How to Get the Most Out of It

- **Trace registers by hand.** Write down what `AX`, `BX`, `CX` and `SI` hold after each line. It's slow, and it's the only way this really clicks.
- **Compare against C.** Take the equivalent C program and map each assembly block to a line of it.
- **Use a debugger.** Stepping instruction by instruction and watching registers change teaches more than reading ever will.

---

## 💡 A Note for Beginners

This is the hardest folder here, and that's expected. Assembly isn't difficult because the instructions are complex — each one does almost nothing. It's difficult because *you* have to manage everything the compiler normally handles for you.

Don't start here. Come to this folder after C makes sense, and it'll reframe everything you already know about how programs actually run.

---

[← Back to main repository](../README.md)
