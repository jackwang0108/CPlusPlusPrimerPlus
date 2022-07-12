# C++ Primer Plus

I'm a Deep Learning and Robotic (ROS) developer. And I am adept in `Python`. Initially, I was thinking that since I'm not a heavy ROS developer, so it's enough for me to read and understand C++ codes for I don't need to write beautiful C++ codes. 

However, such point of view is quickly challenged when I re-implement `RandLA-Net`, where dowmsampling a point cloud of million points is needed. I finished python version of grid downsampling the point cloud, but only to find it takes about 30 minutes to process a point cloud, compared with thousands of point clouds of `Semantic-KITTI`.

Fortunately, I build the C++ code for point cloud downsampling offered by the author, finding that it takes ~0.5s to process a million-point point cloud. **It was at that time that I deeply realize that C++ is the foundation of a programmer, for its efficiency and its original concepts of OOP, especially for a CS students like me.**

C++ introduces and helps programmer mastering OOP concepts. And the importance is just the same as the leading of C to a new bee who do not have any programming experience before.

So, I decide to put aside Deep Learning coding take a month or so to read the renowned `C++ Primer Plus` by Stephen Prata to **lay a solid foundation for future programming**.

These is the reason of creating this repository,



## 1. Introduction

This repository contains codes of `C++ Primer Plus` by Stephen Prata. And all the code is formatted as a `CMake` project.

Each chapter is regarded as a mutually independent project, so, there is a `CMakeLists.txt` in each chapter folder. And in total, each chapter is also regarded as  a sub-project to the whole project in the root `CMakeLists.txt`.





## 2. Build



### 1. build whole project

You can build all code in the root directory:

```shell
git clone https://github.com/jackwang0108/CPlusPlusPrimerPlus.git
cd CPlusPlusPrimerPlus
mkdir build && cd build
cmake ..
make -j$(nproc)
```

And after build, code of each chapter will be put in `chapterX/bin/`

```shell
tree CPlusPlusPrimerPlus/ -L 3 -d -I build
```

The output (ignored `CPlusPlusPrimerPlus/**/build`) is

```shell
CPlusPlusPrimerPlus/
├── chapter10
│   ├── bin
│   └── include
├── chapter11
│   ├── bin
│   └── include
├── chapter12
│   ├── bin
│   └── include
├── chapter13
│   ├── bin
│   └── include
├── chapter14
│   ├── bin
│   └── include
├── chapter15
│   ├── bin
│   └── include
├── chapter16
│   └── bin
├── chapter17
│   └── bin
├── chapter18
│   ├── bin
│   └── include
├── chapter2
│   └── bin
├── chapter3
│   └── bin
├── chapter4
│   └── bin
├── chapter5
│   └── bin
├── chapter6
│   └── bin
├── chapter7
│   └── bin
├── chapter8
│   └── bin
└── chapter9
    ├── bin
    ├── include
    └── library
```





### 2. build each sub-project

Alternatively, you can build each sub-project independently

```shell
git clone https://github.com/jackwang0108/CPlusPlusPrimerPlus.git
cd CPlusPlusPrimerPlus/chapter2
mkdir build && cd build
cmake ..
make -j$(nproc)
```

And after build, code of the chapter`X` will be put in `chapterX/bin/`

```shell
tree -L 1 -d
```

The output is 

```shell
.
├── bin
└── build

2 directories
```





## 3. Tools

To simplify the boring building and testing, I've written some command line tools. You can activate the tools by running:

```shell
cd CPlusPlusPrimerPlus
source build_tools
```

And then, you can run the following command line tools: `cmakerun`, `cplusbuild` and `cplusrun`



Notes: the tools are tested under `Ubuntu`, but should work fine in other Linux platform.



### 1. cmakerun

`cmakerun` is a helper tool for `cmake`. **After build the codes**, you can run it under `chapterX/` or `chapterX/build`. It will offer completion and help you running the executable target.

```shell
source build_tools
cd chapter14
cmakerun <TAB><TAB>
```

And you will see the completion

```shell
CPlusPlusPrimerPlus/chapter14 (master)$ cmakerun
frnd2tmp    manyfrnd    pair        stacktem    stkoptr1    tempmemb    tempparm    tmp2tmp     twod        use_stuc    use_stui    workertest  workmi
```

Similarly, you can run under `build` directory, which is especially helpful when testing

```shell
source build_tools
cd chapter14/build
cmakerun <TAB><TAB>
```

```shell
CPlusPlusPrimerPlus/chapter14/build (master)$ cmakerun 
frnd2tmp    manyfrnd    pair        stacktem    stkoptr1    tempmemb    tempparm    tmp2tmp     twod        use_stuc    use_stui    workertest  workmi
```



After selecting the target to run, you will see

```shell
cmakerun manyfrnd pair
```

```shell
===================== Planning to run 2 files =====================
Run:
        manyfrnd
        pair
=========================== Start running =========================
Running in /home/jack/projects/CPlusPlusPrimerPlus/chapter14/build
/home/jack/projects/CPlusPlusPrimerPlus/chapter14/build/bin not exists, assuming in build...
/home/jack/projects/CPlusPlusPrimerPlus/chapter14/build/../bin detected!
Running: manyfrnd
        Source /home/jack/projects/CPlusPlusPrimerPlus/chapter14/build/../bin/manyfrnd
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
hfi1, hfi2: 10, 10
hfdb, hfi2: 10.5, 10
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Running: pair
        Source /home/jack/projects/CPlusPlusPrimerPlus/chapter14/build/../bin/pair
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Rating:  Eatery
5:      The Purpled Duck
4:      Jaquie's Frisco AI Fresco
5:      Cafe Souffle
3:      Bertie's Eats
Oops! Revised rating:
6:      Bertie's Fab Eats
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
```





### 2. cplusbuild

`cplusbuild` is a simple tool to build **single source file program**, which is helper for fast testing.

You should **run under sub-project directory**, and all target is put to `bin`

```shell
source build_tools
cd chapter3
cplusbuild <TAB><TAB>
```

And you will see

```shell
CPlusPlusPrimerPlus/chapter3 (master)$ cplusbuild 
arith.cpp     bondini.cpp   divide.cpp    floatnum.cpp  hexoct2.cpp   limits.cpp    morechar.cpp  
assign.cpp    chartype.cpp  exceed.cpp    fltadd.cpp    hexoct.cpp    modulus.cpp   typecast.cpp 
```

**Regular expression is supported.**

```shell
cplusbuild *.cpp
```

You will see

```shell
==================== Planning to build 14 files ====================
Target:
        arith.cpp
        assign.cpp
        bondini.cpp
        chartype.cpp
        divide.cpp
        exceed.cpp
        floatnum.cpp
        fltadd.cpp
        hexoct2.cpp
        hexoct.cpp
        limits.cpp
        modulus.cpp
        morechar.cpp
        typecast.cpp
========================== Start building =========================
Working in /home/jack/projects/C++PrimerPlus/chapter3
/home/jack/projects/C++PrimerPlus/chapter3/bin exists, redirecting...
Building: arith.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/arith
        success
Building: assign.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/assign
assign.cpp: In function ‘int main()’:
assign.cpp:11:14: warning: overflow in conversion from ‘double’ to ‘int’ changes value from ‘7.2e+12’ to ‘2147483647’ [-Woverflow]
   11 |   int debt = 7.2E12;
      |              ^~~~~~
        success
Building: bondini.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/bondini
        success
Building: chartype.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/chartype
        success
Building: divide.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/divide
        success
Building: exceed.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/exceed
        success
Building: floatnum.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/floatnum
        success
Building: fltadd.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/fltadd
        success
Building: hexoct2.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/hexoct2
        success
Building: hexoct.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/hexoct
        success
Building: limits.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/limits
        success
Building: modulus.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/modulus
        success
Building: morechar.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/morechar
        success
Building: typecast.cpp
        Destination /home/jack/projects/C++PrimerPlus/chapter3/bin/typecast
        success
============================= Success =============================
Build files:
        /home/jack/projects/C++PrimerPlus/chapter3/bin/arith
        /home/jack/projects/C++PrimerPlus/chapter3/bin/assign
        /home/jack/projects/C++PrimerPlus/chapter3/bin/bondini
        /home/jack/projects/C++PrimerPlus/chapter3/bin/chartype
        /home/jack/projects/C++PrimerPlus/chapter3/bin/divide
        /home/jack/projects/C++PrimerPlus/chapter3/bin/exceed
        /home/jack/projects/C++PrimerPlus/chapter3/bin/floatnum
        /home/jack/projects/C++PrimerPlus/chapter3/bin/fltadd
        /home/jack/projects/C++PrimerPlus/chapter3/bin/hexoct2
        /home/jack/projects/C++PrimerPlus/chapter3/bin/hexoct
        /home/jack/projects/C++PrimerPlus/chapter3/bin/limits
        /home/jack/projects/C++PrimerPlus/chapter3/bin/modulus
        /home/jack/projects/C++PrimerPlus/chapter3/bin/morechar
        /home/jack/projects/C++PrimerPlus/chapter3/bin/typecast
Run cplusrun
```





### 3. cplusrun

`cplusrun` is accompaniment of `cplusbuild`. After running `cplusbuild`, simple run `cplusrun` you can quickly run your testing codes.

```shell
cplusrun <TAB><TAB>
```

You will see

```shell
CPlusPlusPrimerPlus/chapter3 (master)$ cplusrun 
arith     assign    bondini   chartype  divide    exceed    floatnum  fltadd    hexoct    hexoct2   limits    modulus   morechar  typecast
```

And after selecting the target to run, you will see

```shell
cplusrun limits arith
```

```shell
C++PrimerPlus/chapter3 (master)$ cplusrun limits arith 
===================== Planning to run 2 files =====================
Run:
        limits
        arith
=========================== Start running =========================
Running in /home/jack/projects/C++PrimerPlus/chapter3
/home/jack/projects/C++PrimerPlus/chapter3/bin detected!
Running: limits
        Source /home/jack/projects/C++PrimerPlus/chapter3/bin/limits
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int is 4 bytes.
short is 2 bytes.
long is 8 bytes.
long long is 8 bytes.
Maximum values:
int: 2147483647
short: 32767
long: 9223372036854775807
long long: 9223372036854775807
Minimum int value = -2147483648
Bits per byte = 8
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Running: arith
        Source /home/jack/projects/C++PrimerPlus/chapter3/bin/arith
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter a number: 1
Enter another number: 2
hats = 1.000000; heads = 2.000000
hats + heads = 3.000000
hats - heads = -1.000000
hats * heads = 2.000000
hats / heads = 0.500000
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
```

