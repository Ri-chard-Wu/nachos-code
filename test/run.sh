
#!/bin/sh

if [ ! $# -eq 0 ]
then
    flag=${1}
else    
    flag=""
fi


echo ""
echo ""

if [ ${flag} = "-n" ] || [ ${flag} = "-b" ];
then

    echo "================================="
    echo "=         Build NachOS          ="
    echo "================================="

    cd ~/NachOS-4.0_MP1/code/build.linux
    make clean
    make

    echo "================================="
    echo "=     Finished build NachOS     ="
    echo "================================="

fi



if [ ${flag} = "-t" ] || [ ${flag} = "-b" ];
then
    
    
    echo "================================="
    echo "=      Build test program       ="
    echo "================================="
    
    cd ~/NachOS-4.0_MP1/code/test
    python3 ./tb-generator/tb-generator.py 2>tb-generator-stderr.out
    make clean
    make 2>make-stderr.out

    echo "================================="
    echo "=  Finished build test program  ="
    echo "================================="
fi

echo "================================="
echo "=       Run test program        ="
echo "================================="

rm file*.txt

# echo "[stderr from fileIO_test1]" 1>stderr.out
# ../build.linux/nachos -e fileIO_test1 2>>stderr.out

# echo "[stderr from fileIO_test2]" 1>>stderr.out
# ../build.linux/nachos -e fileIO_test2 2>>stderr.out

../build.linux/nachos -e tb 2>nachOS-prog-stderr.out

echo "================================="
echo "=       Print stderr out        ="
echo "================================="

echo "[tb-generator stderr out]:"

echo ""
cat tb-generator-stderr.out
echo ""

echo "[make stderr out]:"

echo ""
cat make-stderr.out
echo ""

echo "[nachOS-prog stderr out]:"

echo ""
cat nachOS-prog-stderr.out
echo ""


echo "================================="
echo "=             Done              ="
echo "================================="
echo ""
echo ""