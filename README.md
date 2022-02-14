### BinaryFileApplication

A program for comparing binary files. Main features:

* lightweight GUI
* cross-platform
* ease of use <br><br>


[![CI - Windows](https://github.com/SergeyG22/BinaryFileApplication/actions/workflows/windows_builds.yml/badge.svg)](https://github.com/SergeyG22/BinaryFileApplication/actions/workflows/windows_builds.yml)<br>
[![CI - linux](https://github.com/SergeyG22/BinaryFileApplication/actions/workflows/linux_builds.yml/badge.svg)](https://github.com/SergeyG22/BinaryFileApplication/actions/workflows/linux_builds.yml)<br>
Not tested under MacOS (no distribution).



### Installing dependencies

Python interpreter and the Conan package manager must be installed.
CMake 3.13 or higher should also be installed.

To install Conan, enter the following command:

```
pip3 install conan 
```

To check that the Conan is installed correctly enter in cmd:

```
conan --version
```

Download the sources and install the required dependencies:

```
git clone https://github.com/SergeyG22/BinaryFileApplication.git
cd BinaryFileApplication
cd cmake
conan install ../scripts
```

To switch between Debug and Release builds:

```
cd cmake
conan install -s build_type=Debug ../scripts 
```
```
cd cmake
conan install -s build_type=Release ../scripts 
```

### Building from source

```
cd BinaryFileApplication
mkdir build
cd build
cmake ..
```

### Control panel

[Browse] - choose the path to folder one<br>
[Browse] - choose the path to folder two<br>
[Search] - find duplicate binary files<br>
[Clear] - clear the output window <br>

### Examples 

Run the program and select the example folder in the root of the source directory. Specify the path to binary_a and binary_b folders. Click [Search]. A list of duplicates will be displayed.

### Preview

![hippo](https://github.com/SergeyG22/BinaryFileApplication/blob/master/docs/images/animation.gif)


