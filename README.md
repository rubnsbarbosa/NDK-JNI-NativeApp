## Create an App with code C++ running on Android

> Installing Requested Components

To install:
1. NDK (ndk-bundle)
2. CMake

After implement your code in C++ you should put the path in CMake file - add_library:

> Provides a relative path to your source file(s).
>           src/main/cpp/native-lib.cpp
>           src/main/cpp/CalculateArea.cpp
>           )

After this you should go in build.gradle app - dependencies

> compile 'com.jakewharton:butterknife:8.5.1'
> annotationProcessor 'com.jakewharton:butterknife-compiler:8.5.1'

