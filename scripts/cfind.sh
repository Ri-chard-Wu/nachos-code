

#!/bin/sh
 
if [ ${1} = "-p" ]
then
    grep -R ${2} ~/NachOS-4.0_MP1/code/
elif [ ${1} = "-f" ]
then
    find ~/NachOS-4.0_MP1/code/ -name ${2}
else
    echo "Unsupported flag ${1}"
fi