<img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="C++" width="80" align="right" />

# C++

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=cplusplus&logoColor=white)
![Focus](https://img.shields.io/badge/focus-OOP%20%26%20CP-blue)
![Status](https://img.shields.io/badge/status-ongoing-yellow)

Where things get object-oriented. C++ here is used for two purposes: learning object-oriented programming properly, and competitive programming.

---

## 📌 What This Folder Covers

The programs in this folder move beyond "how do I write logic" into "how do I structure it." Topics include:

- Classes, objects, and how data and behaviour live together
- Access control — public, private, and why the distinction matters
- Constructors and object initialisation
- Member functions and working on an object's own data
- Static members shared across all objects of a class
- Inheritance and building hierarchies of related types
- Virtual functions and runtime polymorphism
- Arrays of objects and managing collections of them

Alongside these, competitive programming solutions are added as I work through problems.

---

## 🧭 How This Folder Is Organised

Files here are named after the concept or problem they demonstrate rather than numbered in a strict sequence. That's deliberate — C++ topics in this folder are more modular than C's, and most can be read on their own.

That said, if you're new to OOP, a sensible path is:

1. Start with a simple class holding data and one or two functions
2. Move to constructors and how objects get initialised
3. Then access control and why `private` exists
4. Then static members
5. Then inheritance
6. Then virtual functions and polymorphism

Read in roughly that conceptual order and each idea will make sense before the next one needs it.

---

## 🖥️ Running the Code

You'll need a C++ compiler (G++ is standard):

```bash
g++ filename.cpp -o program
./program
```

On Windows:

```bash
g++ filename.cpp -o program.exe
program.exe
```

---

## 🎯 How to Get the Most Out of It

- **Draw the objects.** OOP becomes far clearer when you sketch what's stored where and who can access it.
- **Break encapsulation on purpose.** Try accessing a `private` member from outside and read the error. That error *is* the lesson.
- **Add a class of your own** to an existing hierarchy and see what you're forced to implement.

---

## 💡 A Note for Beginners

If you're coming straight from C, resist the urge to write C++ as "C with `cout`." The value of this language is in structure — classes, inheritance, polymorphism — not just nicer input and output. Start with the class-based files rather than treating this as a syntax upgrade.

---

[← Back to main repository](../README.md)
