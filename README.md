<h2>This is empty project to run gtest in Clion on 3 May 2024.</h2>
<hr>
<span>Target of this project to faster create gtests in projects by cloning this repo</span>
<hr>
<img width="1440" alt="Screenshot 2024-05-03 at 23 22 49" src="https://github.com/MarzanIvan/gtest-clion-template/assets/87321166/4e37cd9d-813e-48da-b626-f4a805f6fb13">

<hr>
<span>structure of project:</span><br>
<ul>
  <li>CXXTEST</li>
  <ul>
    <li>
      <span>lib - content of zip file from https://github.com/google/googletest/releases</span>
    </li>
    <li>.gitignore</li>
    <li>CMakeLists.txt</li>
    <li>main.cxx</li>
  </ul>
</ul>
<hr>
<h2>To get option run 'All in CXXTEST_run' you need to do this</h2>
<ul>
  <li>In configuration bar click on 'More Actions'(it looks like three vertical dots)</li>
  <li>Choose 'Edit...' in Configuration</li>
  <li>Click on Google Test configuration</li>
  <li>Click on 'Add new run configuration...'</li>
  <ul>
    <li>Alow multiple instances</li>
    <li>Apply changes</li>
  </ul>
</ul>

<h2>Then you can see this configuration</h2>
<img width="467" alt="Screenshot 2024-05-03 at 23 45 12" src="https://github.com/MarzanIvan/gtest-clion-template/assets/87321166/644a75b4-3dfd-433e-87d0-70521f6a37ee">


<hr>
```
cmake_minimum_required(VERSION 3.27)
project(CXXTEST)
# CXX Properties ------------------------------------
set(CMAKE_CXX_STANDARD 14)
# set this flag when running coverage tests in Clion
set(CMAKE_CXX_FLAGS "--coverage")
# generate debug information
set(CMAKE_CXX_FLAGS "-g")
#----------------------------------------------------

add_subdirectory(lib)
add_executable(${CMAKE_PROJECT_NAME}_run main.cxx)
# to link source files and include google test include/ folder to search the files
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
# files to link with each other
target_link_libraries(${CMAKE_PROJECT_NAME}_run gtest gtest_main)
```
