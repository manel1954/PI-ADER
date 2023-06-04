#!/bin/bash
#Colores
ROJO="\033[1;31m"
VERDE="\033[1;32m"
BLANCO="\033[1;37m"
AMARILLO="\033[1;33m"
CIAN="\033[1;36m"
GRIS="\033[0m"
MARRON="\33[38;5;138m"
NEGRO="\33[0;30m"
clear
echo ""
echo -n "${AMARILLO}"
# recupera los iconos pero no los que se han quedado con e icono de un libro
# y quita los semaforos que se queden encendidos por error al reiniciar
#cp /home/pi/Desktop/*.desktop /home/pi
#cp /home/pi/PI-ADER/Desktop/*.desktop /home/pi/Desktop
#
#cp /home/pi/icons.screen0-1904x1023.rc /home/pi/.config/xfce4/desktop
#xfdesktop --reload
#
#cp /home/pi/*.desktop /home/pi/Desktop
#sudo rm /home/pi/*.desktop
#sudo chmod 777 -R /home/pi/Desktop
echo "        Esperar a que se reorganicen los iconos"
# recupera los iconos que se han borrado y se han convertido en icono de un libro
# pero no quita los semaforos que se queden encendidos por error al reiniciar
cp /home/pi/PI-ADER/Desktop/*.* /home/pi/Escritorio
sudo chmod 777 -R /home/pi/Escritorio


# AÑADIDO PROVISIONALMENTE
# sh clonando_carpeta_qt.sh



# cp /home/pi/icons.screen0-1904x1064.rc /home/pi/.config/xfce4/desktop
cp /home/pi/icons.screen0-1904x1037.rc /home/pi/.config/xfce4/desktop

xfdesktop --reload                              