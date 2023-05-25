#!/bin/bash

cd /home/pi
sudo rm -R /home/pi/versionPI-ADER
git clone http://github.com/manel1954/versionPI-ADER

nueva_version=$(awk "NR==1" /home/pi/versionPI-ADER/versionPI-ADER.txt)

version_actual=$(awk "NR==101" /home/pi/status.ini)

if [ "$version_actual" = "$nueva_version" ];then
echo "no hace nada"
else
cd /home/pi/PI-ADER/qt
./qt_comprueba_version 
fi