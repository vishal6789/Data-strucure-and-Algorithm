#! /bin/bash 

echo "enter name"
read name

if test -d $name
then 
    echo $name is directory

else 
    echo "I don't know"    
fi    