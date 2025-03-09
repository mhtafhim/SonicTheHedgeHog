# Sonic The Hedgehog 2D Game
A simple 2D Sonic game developed using C++ and the iGraphics framework (a custom OpenGL wrapper). This project was created as part of a second-semester Software Development Lab course.

## Project Overview
This is a 2D side-scrolling game inspired by the classic *Sonic the Hedgehog* franchise, featuring smooth animations and responsive controls as demonstrated in our gameplay video.


## Video Demonstration
Check out our gameplay demonstration video below:

[![Sonic 2D Game Demo](https://img.youtube.com/vi/DKLH6pvGK_Q/0.jpg)](https://www.youtube.com/watch?v=DKLH6pvGK_Q)

<iframe width="560" height="315" src="https://www.youtube.com/embed/DKLH6pvGK_Q" frameborder="0" allowfullscreen></iframe>



## Game Features
### **Character Controls:**
- Fluid left/right movement with momentum physics
- Jump mechanics with variable heights
- Classic Sonic animations for running, jumping, and idle states

### **Gameplay Elements:**
- Multiple environment obstacles and platforms
- Collectable rings that increase your score
- Enemy characters with collision detection
- Health/life system with visual indicators
- Background scrolling with parallax effects
- Game state transitions (menu, gameplay, game over)

### **User Interface:**
- Interactive main menu with play options
- Score counter
- Life indicator
- In-game instructions

## Technical Details
- **Language:** C++
- **Graphics Framework:** iGraphics (custom OpenGL wrapper)
- **IDE:** Visual Studio 2013
- **Libraries Used:**
  - OpenGL
  - GLUT (OpenGL Utility Toolkit)
  - GLaux for image loading

## About iGraphics Framework
iGraphics is a simplified wrapper for OpenGL designed specifically for 2D graphics programming in educational contexts. It provides:

- Simple functions for drawing basic shapes (rectangles, circles, lines)
- Easy image loading and rendering capabilities
- Text rendering functions
- Input handling for keyboard and mouse
- Timer functions for animation
- Sound playback capabilities

The framework abstracts away many of the complexities of raw OpenGL, allowing beginners to focus on game logic rather than graphics programming details.

## Project Structure
The project is organized into several components:
- `iMain.cpp` - Main game logic and entry point
- `iGraphics.h` - Graphics framework header
- `background.h` - Background rendering and management
- `enemy.h` - Enemy character logic and collision detection
- `menu.h` - Menu screens and user interface
- `obstacle.h` - Game obstacles and platform generation
- `sonic.h` - Player character controls and animation
- Multiple asset folders containing sprites and images

## Building the Project

### Prerequisites
1. Visual Studio 2013 (or later version with backward compatibility)
2. OpenGL libraries
3. GLUT libraries
4. GLaux library (part of legacy OpenGL)

### Environment Setup for iGraphics
1. **Install Visual Studio 2013**
   - Download from the Microsoft website or use your institutional license

2. **Setup OpenGL and GLUT**:
   - The required OpenGL files are included in the project repository
   - Copy `glut32.dll` to your Windows system directory (usually `C:\Windows\System32`)
   - For 64-bit systems, also copy to `C:\Windows\SysWOW64\`

3. **Project Configuration**:
   - The Visual Studio project is already configured with the correct library paths
   - Include directories are set to look for headers in the project's `OpenGL` folder
   - Library directories are set to look for libs in the project's `OpenGL\lib` folder

### Steps to Build and Run
1. Clone or download this repository to your local machine
2. Open the solution file `final project file.sln` in Visual Studio 2013
3. Ensure all linked libraries are properly set up (they should be pre-configured)
4. Build the solution by pressing `F7` or navigating to `Build > Build Solution`
5. Run the game by pressing `F5` or clicking the green play button
6. If you encounter any DLL errors, ensure the GLUT DLL is properly installed as mentioned above

### Troubleshooting Common Issues
- **Missing DLL errors**: Ensure `glut32.dll` is copied to the system directories
- **Linker errors**: Check that the project settings include the OpenGL, GLUT, and GLaux libraries
- **Black screen**: Verify that all image assets are in the correct directory structure

## Controls
- **Arrow Keys:** Move Sonic left and right
- **Up Arrow / Spacebar:** Jump
- **Escape:** Pause game / access menu
- **Enter:** Select menu options
- **R:** Restart level (when game is over)
- **M:** Mute/unmute sound (if implemented)

## Game Mechanics
- Collect rings to increase your score
- Avoid enemies or jump on them to defeat them
- Losing all lives results in game over
- The game progressively increases in difficulty as you advance

## Development Team
This project was developed as a second-semester Software Development Lab assignment.

## Acknowledgements
- Thanks to our instructors and peers who provided guidance and feedback
- The iGraphics framework developers for providing the OpenGL wrapper
- Inspiration from SEGA's *Sonic the Hedgehog* franchise