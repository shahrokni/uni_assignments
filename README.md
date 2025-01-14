# University Assignments

This repository has been created by senior software engineer **Seyed Mahmoud Shahrokni** (**_Mahmoud_**).
The main collaborator of the Repo is Mr. **Seyed Reza Shahrokni** (**_Reza_**) as a junior C++ developer.
All pull requests should be reviewed and confirmed by **_Mahmoud_** before they get merged into the main branch.
In the following section you can find a comprehensive list of exercises which must be completed by **_Reza_**.

# How should you add your exercise to the repository?

As it has been already discussed a repository is a place in which you develop and maintain your project or simply a **_Version Control_**
A _version control_ like Git has two parts which are server and client. The Repository maintainer, in this case **Mahmoud**, gives you access to the repo, so you can **contribute**

For the **very first time** you need to **clone** the repository. Clone operation is like downloading the project from server.

To clone the repository you can run the following command:

```
local_address/uni_assignment$ git clone https://github.com/shahrokni/uni_assignments.git
```

# How to build?

To **ease and automate** the compiling process, a file has been created in `.vscode` folder.
This file is recognized and read by `Visual Studio Code` every time you press `Ctrl + Shift + B`
This configuration file tells `Visual Studio Code` how to compile the program using `g++` and where to put the executable output

## What is the project structure?

The project structure includes a main.cpp which is _the main entrance point of the application_. Other `CPP` files will be located under their own dedicated folder. For instance, `draw_static_square/draw_static_square.cpp`
This means, whenever you are done with your new exercise, you need to add it to the mentioned file in order to have it built by `g++`
So, open the following file and add your work here, if you are finished already `.vscode/tasks.json`

**_Example_**

```json
 "args": [
        "-g",
        "-o",
        "${workspaceFolder}/main",
        "${workspaceFolder}/main.cpp",
        "${workspaceFolder}/draw_static_square/draw_static_square.cpp"
      ],
```

You also need to update `main.cpp` and call your desired function from there.
Now, as soon as you press `Ctrl + Shift + B`, if there is no compiler error, the executable file should be updated and rebuilt. (main)
To run and see the results you can simply run the following command

```
./main
```

# What is debugging?

Debugging is one of the most important aspects of software development. Simply speaking, debugging lets you know what happens under the hood, when the application is running.

## With debugging you can:

- Find out why and where your application logic goes wrong
- Fix your application's issues
- Comprehend complex logics

## How to debug?

A file called launch.json has been already added to the project under the `.vscode` folder. This file instructs how the debugger should start working.

- Set some `breakpoints`
- Press `Ctrl + Shift + B` and make sure the built output is updated
- Press `Ctrl + Shift + D`
- Press `F5`

![Debugger example](public/debug-example.png)

# Exercises

- [x] Static square (10.10) / draw_static_square.c
- [x] Dynamic square (Nested For loop structure) / draw_dynamic_square_with_for.c
- [ ] Dynamic square (Nested While loop structure) / draw_dynamic_square_with_while.c
- [x] What happens if we use float or double in for loop? / count_with_double_loop.c
- [ ] Half pyramid (Nested For loop structure)
- [ ] Half pyramid (Nested While loop structure)
- [ ] Full pyramid (For loop structure)
- [ ] Full pyramid (While loop structure)
- [ ] Empty square (For loop structure)
- [ ] Empty square (While loop structure)
- [ ] Characters are only numbers
- [ ] Lower and upper case detector
- [ ] Blinking names (rEzA, mAhMoUd)
- [ ] Print student's scores
- [ ] Count even numbers (1D)
- [ ] Students and average of scores
- [ ] Shopping cart with 20% discount
- [ ] Print shopping cart's items
- [ ] Print shopping cart's price
- [ ] Reverse number
- [ ] Base 10 to 2 conversion
- [ ] Base 2 to 10 conversion
- [ ] Count even numbers (2D)
- [ ] Moving on the grid (print i and j)
- [ ] Queen hit
- [ ] Simple crypto
- [ ] Time validation
- [ ] Printing information (seyed.mahmoud.shahrokni.1990)
- [ ] Basic calculator with main operations
- [ ] Check-mate detector
