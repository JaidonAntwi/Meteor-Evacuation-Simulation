Meteor Evacuation Simulation (C++)
- A console-based C++ program that simulates a meteor impact scenario and determines whether an evacuation can be completed in time based on user input and calculated physics.


Description:
- The Meteor Evacuation Simulation is a C++ application designed to analyze a hypothetical meteor threat to the International Space Station (ISS). The program prompts the user to input a meteor’s diameter and its distance from the ISS, then calculates the meteor’s speed and estimated time to impact. Based on this time, the program determines whether evacuation is not possible, possible, or probable.


- This project demonstrates core C++ concepts such as:
	•	Modular program design using header files
	•	Pass-by-reference for efficient data handling
	•	Input validation using loops
	•	Conditional logic for decision-making
	•	Console formatting and color output using the Windows API

The program runs repeatedly until the user chooses to exit, making it an interactive and user-friendly experience.


Getting Started: 

Dependencies:
To compile and run this program, you will need:
	•	Windows OS (uses windows.h for console color output)
	•	A C++ compiler 
	•	A C++ IDE or editor (Code::Blocks or VS Code)


Installing:
1. Clone the repository:
- git clone https://github.com/yourusername/meteor-evacuation-simulation.git

2. Navigate into the project directory:
- cd meteor-evacuation-simulation

3. Be sure that main.cpp and MeteorEvacuationFunctions.h are within the same directory.

Executing Program:
- Follow the on-screen prompts:
	•	Enter meteor diameter (meters)
	•	Enter distance from ISS (miles)
	•	View calculated results and evacuation status
	•	Choose whether to run the simulation again


Authors:
Jaidon Antwi
GitHub: JaidonAntwi


Version History:
0.1
- Initial release
- Implemented meteor physics calculations
- Added evacuation status logic
- Included input validation and looping execution
