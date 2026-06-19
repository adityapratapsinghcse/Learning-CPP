# 🚀 Learning C++: From Core Fundamentals to Advanced Concepts

Welcome to my personal C++ development ledger! This repository is a meticulously structured, from-scratch documentation of my journey mastering the C++ programming language. It tracks my deep dives into the language syntax, modern compilation behaviors, memory management paradigms, and clean architectural design patterns.

---

## 📂 Repository Architecture & Structure

The codebase is engineered to modularly separate concepts into isolated milestones, making it intuitive to navigate for both revision and architectural review.

```text
Learning-CPP/
│
├── 01_Basics_Functions_and_Files/      # Compilation mechanics and global structural units
│   ├── forward_declarations.cpp        # Function prototypes and linker resolution
│   ├── header_guards/                  # #ifndef and #pragma once implementations
│   └── multiple_files/                 # Handling compilation of isolated translation units
│
├── 02_Debugging_and_Diagnostics/        # Strategies for troubleshooting broken code
│   ├── semantic_analysis.cpp           # Resolving bugs that pass the compilation phase
│   └── debugging_tactics.md            # Execution tracing, watches, and call stack analysis
│
├── 03_Fundamental_Data_Types/          # Memory representations of native types
│   ├── type_casting.cpp                # Explicit conversions via static_cast<type>()
│   └── size_and_overflow.cpp           # Fixed-width integers (cstdint) and overflow behaviors
│
├── 04_Constants_and_Strings/           # High-performance text and value management
│   ├── constants_constexpr.cpp         # Compile-time optimizations (constexpr vs const)
│   └── string_views.cpp                # High-efficiency read-only strings via std::string_view
│
├── 05_Operators_and_Bitwise/           # Low-level bit-level manipulation and precedence
│   ├── operator_side_effects.cpp       # Sequence points, prefix vs postfix increment pitfalls
│   └── bitwise_manipulation.cpp        # Bit flags, masking operations, and std::bitset
│
├── 06_Scope_Duration_and_Linkage/     # Lifecycle and visibility of program variables
│   ├── variable_shadowing.cpp          # Risks of local namespaces overlapping outer blocks
│   └── inline_variables/               # Global constants and handling internal/external linkage
│
└── 07_Control_Flow_and_Random/         # Dynamic execution routing and numeric engines
    ├── branching_logic.cpp             # If-statements, constexpr-if, and switch fallthroughs
    └── random_engines.cpp              # Robust pseudo-randomness utilizing Mersenne Twister
