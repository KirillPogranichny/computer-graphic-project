# computer-graphic-project

<h3>Project Deployment Instructions
    for using Clion</h3>

   <h5>MacOS</h5>
    
    1) Install QT with Homebrew
    2) Enjoy
    
  
   <h5>Windows<h5>
    
    1) Install QT for desktop development
    2) Go to the properties of your computer
    3) Go to advanced system settings
    4) Click on the "Environment Variables" button
    5) Click on the "New" button in the bottom window called "System Variables"
    6) In the "Name" field type QTDIR
    7) In the "Value" field, specify the path to your mingw_64 compiler 
       For example: C:\Qt\6.2.3\mingw_64
    8) Click on the "Ok" button
    9) Find the variable named "Path" and click "Change" button
    10) Create a variable named %QTDIR%\lib (write with percent signs)
    11) Create a variable named %QTDIR%\bin (write with percent signs)
    12) Click on the "Ok" button
    13) Congratulations, you can work in CLion on Windows

    You can also watch this video, which clearly shows what to do:
    https://youtu.be/XiMplRfuFJc?t=271

   
   
   BTW if you wanna use some QT IDE, like QT Designer or QT Creator
       , include IDE in external tools