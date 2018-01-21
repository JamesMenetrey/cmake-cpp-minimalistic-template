# CMake C/C++ Minimalistic Template

This solution aims to be a simple, well-designed implementation of CMake, subdivided into projects and using
git submodules to import dependencies.


## Solution layout of the template
```
root
├── app (executable project)
│   └── include
│   └── src
│   └── test
│       └── src
│       └── CMakeLists.txt (configuration of the test)
│   └── CMakeLists.txt (configuration of the project)
│
├── lib (dependencies)
│   └── google-test
│   └── ...
│
├── vectorLib (library project)
│   └── include
│   └── src
│   └── test
│       └── src
│       └── CMakeLists.txt (configuration of the test)
│   └── CMakeLists.txt (configuration of the project)
│
└── CMakeLists.txt (configuration of the solution)
```

The solution is segregated by projects, to subdivide the code base, bringing more abstraction and reducing 
the compile time of the whole solution. Thus, each project has the same internal layout (such as ``app`` and ``vectorLib``):

```
project
├── include
├── src
├── test
│   └── src
│   └── CMakeLists.txt
└── CMakeLists.txt
```

Finally, there is a folder called ``lib`` at the root of the solution for external dependencies, such as Google test.


## CMakeLists files governance

The solution has several ``CMakeLists.txt`` to respect the single responsibility principle and therefore, prevent 
to have a single big file that contains all the configuration. Each of them are completely documented and easy to 
read/understand.


## Building

Once ``git`` and ``cmake`` installed, execute the following commands:

```
git clone --recursive git@github.com:ZenLulz/cmake-cpp-minimalistic-template.git
cd cmake-cpp-minimalistic-template
mkdir build && cd build
cmake ..
make
```


## Running the unit tests

This repository uses Google test library to execute the unit tests. They can be run by executing the binary located 
under ``build/vectorLib/test``.


## References

### General architecture and layout tutorials

- Modern C++ CI: [Article](https://juan-medina.com/2017/07/01/moderncppci/) / [Github](https://github.com/LearningByExample/ModernCppCI)
- [StackOverflow: C++ project organisation (with gtest, cmake and doxygen)](https://stackoverflow.com/q/13521618/2780334)
- [JetBrains: Quick CMake Tutorial](https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html)
- [The Ultimate Guide to Modern CMake](https://rix0r.nl/blog/2015/08/13/cmake-guide/)
- [Programming C++ With The 4 Cs: Clang, Cmake, Clion And Conan](http://blog.conan.io/2016/05/10/Programming-C++-with-the-4-Cs-Clang,-CMake,-CLion-and-Conan.html)
- [StackOverflow: CMake how to correctly create dependencies between targets](https://stackoverflow.com/q/4905089/2780334)
- [StackOverflow: what is the difference between include_directories and target_include_directories in CMake?](https://stackoverflow.com/q/31969547/2780334)

### Github repositories

- [CppProjectTemplate: Basic, but working, C++ project using CMake, boost and Doxygen](https://github.com/Barthelemy/CppProjectTemplate)
- [cppbase: A template for a simple CMake-based C++ project](https://github.com/kartikkumar/cppbase)

### CLion

- [CLion: Getting started with Google Test](https://www.jetbrains.com/help/clion/google-test-support.html)


## License

Distributed under the MIT License (See accompanying file /LICENSE).