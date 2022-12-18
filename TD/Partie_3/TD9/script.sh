#! /bin/bash

./sortie1
var=$?

if [ $var -eq 0 ]
then
  echo "Bonne valeur"
else
  echo "Mauvaise valeur"
fi
