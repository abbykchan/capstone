# SYDE 361 - Group 2 Circuit Prototype
The software for the teensy based environment monitoring system done as part of SYDE 361 during spring 2022 by Group 2. This includes Abby Chan, Adam Linton, Aidan Bowers, Emily Louie, and Keaton Lees.

The aim of the project was to:

> Design and test a personal environmental monitoring system and data visualization/storytelling experience aimed at educating engineering students about their relationship to the environments they experience as a student.

This repository houses the teensy code and circuit schematics for the system.

This project has the following structure:

The main entrypoint (where the `setup()` and `loop()` functions are located) is `src/main.cpp`. 

Source (.cpp) files are stored in `src/`, 
header (.h) files are stored in `include/`, 
and libraries, both internally developed and external, are stored in `lib/`.

`scripts/` contains python scripts that are used for comunication between the host PC and teensy.

It is recommended that this project is not viewed in the arduino ide, but rather another IDE such as vscode as headers, libraries and source files will not be viewable through the arduino ide.