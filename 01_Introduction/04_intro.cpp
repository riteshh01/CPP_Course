/*

How Compilation Works in c++?

⁡⁣⁣⁢C++ code ko executable banane ke 4 major steps me convert kiya jata hai:⁡

⁡⁢⁣⁣1. Preprocessing⁡

Compiler sabse pehle:
	•	#include files ko expand karta hai
	•	macros replace karta hai
	•	comments remove karta hai

Output = pure expanded C++ code

⁡⁣⁣⁢Command: g++ -E main.cpp⁡


⁡⁢⁣⁣2. Compilation⁡

Preprocessed code → machine instructions me convert hota hai,
but abhi complete executable nahi banta.

Is stage me:
	•	syntax checking
	•	optimization
	•	assembly generation

Output = .o (object file)

⁡⁣⁣⁢Command: g++ -S main.cpp⁡


⁡⁢⁣⁣3. Assembly⁡

Assembler, .s file ko convert karta hai machine-level binary me.

Output = object file (.o)

⁡⁣⁣⁢Command: g++ -c main.cpp⁡


⁡⁢⁣⁣4. Linking⁡

Akhri step me:
	•	object files
	•	libraries (like iostream, STL)
	•	system code

sabko connect karke final executable banaya jata hai.

Output = a.out / main

⁡⁣⁣⁢Command: g++ main.o -o main⁡


C++ code goes through four stages: Preprocessing, Compilation, Assembly, and Linking. The compiler expands headers, translates code to machine instructions, converts it into object files, and finally links everything to produce a runnable executable.



*/