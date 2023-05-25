#!/bin/bash
sudo killall MMDVMPLUS
cd /home/pi/Desktop
sudo cp Abrir_MMDVMPLUS.desktop /home/pi

sed -i "4c Exec=sh -c 'cd /home/pi/PI-ADER;sh ejecutar_dmrplus.sh'" /home/pi/Abrir_dmrplus.desktop
sed -i "5c Icon=/home/pi/PI-ADER/ICO_DMRPLUS_OFF.png" /home/pi/Abrir_dmrplus.desktop
sed -i "10c Name[es_ES]=Abrir DMR+" /home/pi/Abrir_dmrplus.desktop
sed -i "6c MMDVMPLUS=OFF" /home/pi/status.ini

cd /home/pi
sudo cp Abrir_dmrplus.desktop /home/pi/Desktop

sudo rm /home/pi/Abrir_dmrplus.desktop

