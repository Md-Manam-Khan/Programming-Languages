<img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/java/java-original.svg" alt="Java" width="80" align="right" />

# Java

![Java](https://img.shields.io/badge/Java-ED8B00?style=flat&logo=openjdk&logoColor=white)
![Focus](https://img.shields.io/badge/focus-OOP%20%2F%20Android--oriented-blue)
![Status](https://img.shields.io/badge/status-ongoing-yellow)

Java is this repository's home for object-oriented programming taken seriously — where OOP isn't an optional style but the way the language is built. Since Android development runs on the same OOP backbone, this folder is deliberately shaped to double as a runway toward that: every concept here is one Android will eventually lean on directly.

---

## 📌 What This Folder Covers

Starting point: syntax, I/O, and the small stuff Java does differently from C. From there, the path moves into OOP proper and the pieces that matter most once Android enters the picture:

- Core syntax, variables, input and output
- Control flow and loops in Java's style
- Arrays and String handling
- Methods, parameters, and overloading
- Classes, objects, and constructors
- Encapsulation, access modifiers, and the `this` keyword
- Static members and class-level behaviour
- Inheritance, `super`, and method overriding
- Polymorphism, abstract classes, and interfaces
- Anonymous classes (the pattern behind most Android listeners)
- Exception handling, including custom exceptions
- Core collections: `ArrayList`, `HashMap`, and working with groups of objects
- Enums and generics basics

Nothing here is Android-specific code — no SDK, no XML layouts. It's the OOP foundation that makes Android code readable once you get there, built the same disciplined way the C folder builds fundamentals.

---

## 🧭 How This Folder Is Organised

Files are **not** numbered — they're prefixed with a lowercase four-letter sequence, incrementing like a counter: `aaaa`, `aaab`, `aaac`, `aaad`, and so on. That sequence is the learning order, exactly the same role the `000`–`215` numbers play in the C folder — read from `aaaa` upward and each file assumes only what came before it.

```text
aaaa_...
aaab_...
aaac_...
aaad_...
```

The filename after the prefix describes the concept in PascalCase, and — because Java requires the public class name to match the filename — that description also becomes the class name inside the file.

---

## 🖥️ Running the Code

You'll need the JDK installed:

```bash
javac FileName.java
java FileName
```

The filename must match the public class name inside it — Java enforces this, and it's one of the first things that catches beginners out.

---

## 🎯 How to Get the Most Out of It

- **Think in objects before you write.** Ask what things exist in the problem and what each one knows and does.
- **Don't fight the verbosity.** Java asks you to be explicit; that explicitness is what makes large programs readable later.
- **Build the same program twice** — once badly with everything in `main`, once properly with classes. The difference is the lesson.
- **Pay extra attention to interfaces and anonymous classes.** They look like a minor OOP feature here — they're the backbone of how Android code is written.

---

## 💡 A Note for Beginners

If you've done OOP in C++ already, Java will feel familiar but stricter. If this is your first object-oriented language, that strictness is a gift — it won't let you write structurally sloppy code without complaining.

---

## 🚧 Status

Early stage — core syntax and I/O are in place, and the folder is actively filling in toward full OOP coverage and the Android-relevant topics listed above.

---

[← Back to main repository](../README.md)
