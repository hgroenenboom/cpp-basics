## 1. Setup

### Actions
open a terminal and navigate to the folder containing this README file. (use the `cd` a.k.a. 'change directory' terminal command for navigation).
then run the setup script to install homebrew and Visual Studio Code.

### Result
You should now have homebrew available from your terminal; open a terminal and type `brew` and hit enter to confirm this.
You should now have VSCode installed on your Mac, open the program from your program list to see if it runs, you can already explore this program or leave it be for now, we will start with only using the terminal (CLI / command-line interface).

### Example
```bash
cd ~/Desktop/cpp-basics/1
./setup.sh
```

### Information
This repository focusses on C++ development on MacOS devices.

The C++ compiler were using is the GNU GCC compiler. This is already installed on every MacOS Intel device. There are several C++ compilers and the differences between them are important, but not interesting for us yet. For now its useful to know that the GNU GCC compiler is the most widely used C++ compiler, being open source and being available on Linux and MacOS.  

### Other information
The script uses two tools to help us get set up: Homebrew and VSCode. 

Homebrew is a 'package manager' for MacOS. A package manager is a convenient tool which lets you quickly install applications and packages from a command line interface (CLI) such as terminal. 

VSCode is a multipurpose code editor. It has support for many languages and can easily be extended with extensions. It also has nice terminal integrations, this makes it a very useful environment for developers that regularly switch between languages or tools. 
