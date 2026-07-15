# <p>Guessing Game</p>
<img width="128" height="128" alt="Guessing game in command line" src="https://github.com/user-attachments/assets/909d77fb-7ef7-4e0b-8851-6799a0eb81d4" />
  
A simple console game, where you enter the guessed number and see the result at the end game. The game has several difficulty levels and a custom range.

## Requirements
You will need one of the C++ compilers: [GCC](https://gcc.gnu.org/), [Clang](https://github.com/llvm/llvm-project/releases/) or [MSVC](https://visualstudio.microsoft.com/visual-cpp-build-tools/).

## Install and Run
1. Clone the repository to empty folder:
```bash
git clone https://github.com/Tanya57790/cpp-guessing-game.git
```
2. Move to your folder ```cd C:/your-folder```
3. Enter in the command line:
```bash
g++ *.cpp -o guessing_game // GCC
```
```bash
clang++ *.cpp -o guessing_game // Clang
```
The installation for MSVC is different and you will need the x64 Native Tools Command Prompt for VS 2022 or Developer Command Prompt for VS 2022 instead of the default command line:
```bash
cl /EHsc *.cpp /link /out:guessing_game.exe // MSVC
```
4. Run the generated .exe ```guessing_game``` in command line or MSVC.

## How to play
1. Select the game difficulty level in menu. 
2. Enter the guessed number and read the tips.
3. See the result at the end game.

## Author
<a href="https://github.com/Tanya57790">Tanya57790</a>

## License
MIT License
