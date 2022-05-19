# example

to run
```
mkdir build
cd build
cmake ..
cmake --build .
../bin/project
```

Expected output
![image](https://user-images.githubusercontent.com/31745527/169374657-d4fc4eb0-339c-48b9-9b04-b313a4aa7ad8.png)
(two times output lile ```this is <address> dctor called once```. Both times address differ)
 
wrong output 
![image](https://user-images.githubusercontent.com/31745527/169375069-18e15512-9462-4ba0-aea3-7a18cd852442.png)
two times output like ```this is <addess> dctor called <word>```. <address> both time is the same, <word> changes
