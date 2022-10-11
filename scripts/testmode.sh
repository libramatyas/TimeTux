cd ../build_dir
g++ ../src/timetux.cpp
echo Built
cd ../debugging
touch editme.txt
echo "================================================================================"
echo "| Test mode enabled                                                            |"
echo "| - file for testing was created (editme.txt)                                  |"
echo "| - if you saw any glitches / bugs please run g++ main.cpp to see them         |"
echo "| - scripts and code originally made by Czechian#8900 / github.com/libramatyas |"
echo "| - MOVE ALL FILES YOU WANT TO EDIT TO /DEBUGGING/                             |"
echo "================================================================================"
../build_dir/./a.out
#https://youtu.be/GooKnqtKCjY?t=364