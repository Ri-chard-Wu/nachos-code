
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
    make clean
    make

    echo "================================="
    echo "=  Finished build test program  ="
    echo "================================="
fi

echo "================================="
echo "=       Run test program        ="
echo "================================="

../build.linux/nachos -e fileIO_test2 2>stderr.out

echo "================================="
echo "=       Print stderr.out        ="
echo "================================="

cat stderr.out


echo "================================="
echo "=             Done              ="
echo "================================="
echo ""
echo ""