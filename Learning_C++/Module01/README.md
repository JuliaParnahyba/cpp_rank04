# 📚 Module 01 — Study Plan (Learning)

> This module will deepen your understanding of **Memory Allocation, Pointers to Members, References, and Switch Statements**.
> For each topic we will cover:
>
> 1. **Theory** (clear, concise, with day-to-day analogies)
> 2. **Practice tasks** (no code; problem statements and expected behaviors)
> 3. **Reading list** (trusted docs)

<br>

## 🔹 1) Memory Allocation (stack vs heap, lifetime & ownership)

### 🧠 Theory (short)

* **Stack** = automatic storage, scope-bound lifetime (constructed at scope entry, destroyed at scope exit).
* **Heap** = dynamic storage, lifetime controlled by you (`new`/`delete`, `new[]`/`delete[]`).
* **Ownership**: whoever “owns” a heap object must `delete` it; stack objects have no such burden.
* **RAII**: construction acquires resources; destruction releases them—deterministically.
* **C++98 notes**: `new` throws on failure; prefer initializer lists; avoid leaks/dangling/double-delete.

### 🎯 Practice (no code)

* **ex01 — Lifetime tracing**: Describe three scenarios and the expected destructor timing: 
    * (a) local object in a block, 
    * (b) `new` then `delete` later,
    * (c) factory that returns a pointer and a caller that forgets to `delete` (explain the leak symptoms/Valgrind result).
* **ex02 — Allocation choice**: Given 6 mini-scenarios, decide **stack or heap** and justify.
    * Temporary log,
    * Long-lived cache,
    * Unknown N items from input,
    * Big buffer used once
    * Object shared by two modules
    * Recursion
* **ex03 — Ownership map**: Draw who is responsible to `delete` in a simple call graph. Explain how you would document ownership in comments/API names.
    * Creator
    * Caller
    * Container
* **ex04 — Arrays at runtime**: Explain when `new[]/delete[]` are required (ex01 in this module). Describe the failure mode of mixing `new[]` with `delete`.
* **ex05 — Tooling**: Outline how you would verify “0 leaks” with Valgrind and what messages to expect for a missing `delete`.

### 📚 Read

* cppreference — *storage duration* & *new/delete*
* Valgrind User Manual (Memcheck quickstart)
* Stroustrup — *The C++ Programming Language* (storage & RAII)

<br>

## 🔹 2) Pointers to Members (data & function member pointers)

### 🧠 Theory (short)

* A **pointer to data member** points to a **field layout** within a class, not to a standalone object. It needs an **object instance** to read/write.
* A **pointer to member function** identifies **which method** to call, but you still need an **object** to actually invoke it. Syntax differs from regular function pointers and requires the `.*` or `->*` operator.

### 🎯 Practice (no code)

* **ex01 — Data member pointer**: Given a `struct` with two fields, describe how you would map a string key (“name”/“age”) to a **pointer to data member**, choose the field for update, and explain the effect on two different instances.
* **ex02 — Member function pointer dispatch**: Design a small “command table” (strings → member function pointers). Explain how you’d pick the right handler and which object receives the call.
* **ex03 — Object vs pointer invocation**: Explain when to use `obj.*pmf` vs `ptr->*pmf` in two scenarios:
    * Local object
    * Heap object
* **ex04 — Const-correctness**: Describe what changes when the object is `const` and the member function is `const`.
* **ex05 — Error spotting**: List the three most common mistakes:
    * Wrong type
    * Forgetting an instance to call on
    * Confusing free function pointer with pointer-to-member

### 📚 Read

* cppreference — *Pointer-to-member* (data and functions)
* Meyers — *Effective C++* (item on pointers to members / dispatch tables)

<br>

## 🔹 3) References (lvalue refs, const refs, ref vs pointer)

### 🧠 Theory (short)

* A **reference** is an alias; it must be **bound at initialization** and cannot be reseated.
* **`const T&`** can bind to temporaries (lifetime extension) and avoids copies in parameters.
* References vs Pointers: references always refer to something valid (no “null” in normal use), pointers can be reseated and be null; choose references for mandatory relationships.

### 🎯 Practice (no code)

* **ex01 — API signatures**: For each function idea, pick among `T`, `const T&`, `T&`, `const T*`, `T*` and justify.
    * print only
    * mutate object
    * heavy object read-only
* **ex02 — Copy vs reference semantics**: Describe what happens if you pass a large object by value versus `const&`.
    * Construction
    * Copies
    * Destructor timing
* **ex03 — Dangling reference**: Explain why returning a reference to a local object is UB; contrast with returning a reference to a static storage object.
* **ex04 — Overload behavior** (conceptual): Explain how `const` on a member function affects whether a reference to `const` object may call it.

### 📚 Read

* cppreference — *References* (lvalue references in C++98)
* Sutter — Guru of the Week (const correctness & references)

<br>

## 🔹 4) Switch Statements (syntax, enums, fall-through)

### 🧠 Theory (short)

* `switch` selects among **integral**/enum cases; each `case` is a **label**.
* **`break`** prevents fall-through; deliberate fall-through must be explicit and documented.
* Keep scopes straight: initialize variables inside **braces** within a case to avoid crossing labels unintentionally.
* Prefer enums for clarity; map inputs to enums before the switch when possible.

### 🎯 Practice (no code)

* **ex01 — Behavior mapping**: Design a `switch` for a small state machine (e.g., “Idle/Running/Paused/Stopped”). Specify expected outputs for each case and for `default`.
* **ex02 — Fall-through audit**: Given a textual description of cases with/without `break`, predict the exact sequence of outputs. Then redesign to avoid accidental fall-through.
* **ex03 — Enum hygiene**: Propose an unscoped enum in C++98 for menu options and explain why it improves readability vs raw ints.
* **ex04 — Declarations in cases**: Explain where you must add braces when declaring variables inside a `case` (to avoid jumping over initializations).

### 📚 Read

* cppreference — *switch statement*
* MISRA-style notes on fall-through (any coding standard discussion is helpful)

<br>

## 🧭 Extra topics to complement Module 01

* **RAII patterns** (deterministic cleanup),
* **Initializer lists** (constructor syntax you’ve used),
* **Const-correctness** (methods and parameters),
* **New/Delete correctness** (`new[]` vs `delete[]`),
* **Ownership documentation** (who deletes what).

<br>

## 🔗 Quick Links

* [https://en.cppreference.com/](https://en.cppreference.com/) (primary reference)
* [https://valgrind.org/](https://valgrind.org/) (Memcheck)
* “Effective C++”, Scott Meyers — Items on construction, const-correctness, resource management
* “The C++ Programming Language”, Bjarne Stroustrup — Storage duration & RAII
