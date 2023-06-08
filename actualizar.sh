﻿#!/bin/bash


dvswitch=$(awk "NR==18" /home/pi/status.ini)
if [ "$dvswitch" = 'DVSWITCH=OFF' ];then
sudo systemctl stop ysfgateway.service
sudo systemctl stop dmr2ysf.service
sudo systemctl stop analog_bridge.service
sudo systemctl stop ircddbgateway.service
sudo systemctl stop md380-emu.service
sudo systemctl stop mmdvm_bridge.service
sudo systemctl stop nxdngateway.service
sudo systemctl stop p25gateway.service
else
echo "no hace nada"  
fi

sudo chmod 777 -R /var/www/html

ambe3003=$(awk "NR==24" /home/pi/status.ini)
if [ "$ambe3003" = 'AMBE3003=OFF' ];then
sudo systemctl stop AMBEServer3003 
else
sudo systemctl start AMBEServer3003 
fi

# path usuario
usuario="/home/pi"
usuario="$usuario"
SCRIPTS_version="PI-ADER"
actualizacion=$(awk "NR==2" /home/pi/version-fecha-actualizacion)
version="PI-ADER"
version=$version$actualizacion

#pone todos los status de inicio en OFF
sed -i "1c D-STAR=OFF" $usuario/status.ini
sed -i "2c BlueDV=OFF" $usuario/status.ini
sed -i "3c YSF=OFF" $usuario/status.ini
sed -i "4c DV4mini=OFF" $usuario/status.ini
sed -i "5c MMDVM=OFF" $usuario/status.ini
sed -i "6c MMDVMPLUS=OFF" $usuario/status.ini
sed -i "7c MMDVMBM=OFF" $usuario/status.ini#
sed -i "8c SVXLINK=OFF" $usuario/status.ini
sed -i "9c dstarrepeater=OFF" $usuario/status.ini
sed -i "10c MMDVMLIBRE=OFF" $usuario/status.ini
sed -i "11c AMBE_SERVER=OFF" $usuario/status.ini
sed -i "12c SOLOFUSION=OFF" $usuario/status.ini
sed -i "13c SOLODSTAR=OFF" $usuario/status.ini
sed -i "14c YSF2DMR=OFF" $usuario/status.ini
sed -i "15c DMR2YSF=OFF" $usuario/status.ini
sed -i "16c DMR2NXDN=OFF" $usuario/status.ini
sed -i "17c NXDN=OFF" $usuario/status.ini
#sed -i "18c DVSWITCH=OFF" $usuario/status.ini
sed -i "19c DMRGateway=OFF" $usuario/status.ini
#sed -i "22c NEXTIONDRIVER=OFF" $usuario/status.ini

#Actualiza todos los iconos y Quita todos los iconos verdes que se quedan al cerrar la imagen
sudo cp $usuario/Desktop/Activar_dvswitch.desktop $usuario/.local #deja el icono en el estado que se reinició

cd $usuario/$SCRIPTS_version/Desktop
cp * $usuario/Desktop
sudo chmod 777 -R $usuario/Desktop

sudo cp $usuario/.local/Activar_dvswitch.desktop $usuario/Desktop #deja el icono en el estado que se reinició


#pone todos los datos de DMR+ , Brandameiter, svxlink etc en panel_control.ini
bm=`sed -n '2p'  $usuario/MMDVMHost/MMDVMBM.ini`
plus=`sed -n '2p'  $usuario/MMDVMHost/MMDVMPLUS.ini`
dstar=`sed -n '2p'  $usuario/MMDVMHost/MMDVMDSTAR.ini`
fusion=`sed -n '2p'  $usuario/MMDVMHost/MMDVMFUSION.ini`
frbm=`sed -n '13p'  $usuario/MMDVMHost/MMDVMBM.ini`
frplus=`sed -n '13p'  $usuario/MMDVMHost/MMDVMPLUS.ini`
#BM
indi=$(awk "NR==2" $usuario/MMDVMHost/MMDVMBM.ini)
ide=$(awk "NR==3" $usuario/MMDVMHost/MMDVMBM.ini)
frec=$(awk "NR==13" $usuario/MMDVMHost/MMDVMBM.ini)
masterbm=$(awk "NR==232" $usuario/MMDVMHost/MMDVMBM.ini)
masterbm=`expr substr $masterbm 15 30`
sed -i "1c $indi" $usuario/info_panel_control.ini
sed -i "2c $ide" $usuario/info_panel_control.ini
sed -i "3c $frec" $usuario/info_panel_control.ini
sed -i "4c $masterbm" $usuario/info_panel_control.ini
#PLUS
indi=$(awk "NR==2" $usuario/MMDVMHost/MMDVMPLUS.ini)
ide=$(awk "NR==3" $usuario/MMDVMHost/MMDVMPLUS.ini)
frec=$(awk "NR==13" $usuario/MMDVMHost/MMDVMPLUS.ini)
masterplus=$(awk "NR==232" $usuario/MMDVMHost/MMDVMPLUS.ini)
masterplus=`expr substr $masterplus 15 30`
sed -i "11c $indi" $usuario/info_panel_control.ini
sed -i "12c $ide" $usuario/info_panel_control.ini
sed -i "13c $frec" $usuario/info_panel_control.ini
sed -i "14c $masterplus" $usuario/info_panel_control.ini
#Radio
indi=$(awk "NR==2" $usuario/MMDVMHost/MMDVM.ini)
ide=$(awk "NR==3" $usuario/MMDVMHost/MMDVM.ini)
frec=$(awk "NR==13" $usuario/MMDVMHost/MMDVM.ini)
masterradio=$(awk "NR==232" $usuario/MMDVMHost/MMDVM.ini)
masterradio=`expr substr $masterradio 15 30`
sed -i "6c $indi" $usuario/info_panel_control.ini
sed -i "7c $ide" $usuario/info_panel_control.ini
sed -i "8c $frec" $usuario/info_panel_control.ini
sed -i "9c $masterradio" $usuario/info_panel_control.ini
#YSF
master=$(awk "NR==39" $usuario/YSFClients/YSFGateway/YSFGateway.ini)
sed -i "21c $master" $usuario/info_panel_control.ini
#SVXLINK
svxlink=$(awk "NR==16" /usr/local/etc/svxlink/svxlink.d/ModuleEchoLink.conf)
sed -i "27c $svxlink" $usuario/info_panel_control.ini
#YSF2DMR
frec=$(awk "NR==2" $usuario/YSF2DMR/YSF2DMR.ini)
master=$(awk "NR==46" $usuario/YSF2DMR/YSF2DMR.ini)
tg=$(awk "NR==43" $usuario/YSF2DMR/YSF2DMR.ini)
sed -i "24c $frec" $usuario/info_panel_control.ini
sed -i "25c $master" $usuario/info_panel_control.ini
sed -i "26c $tg" $usuario/info_panel_control.ini
#MMDVMESPECIAL
masterespecial=$(awk "NR==232" $usuario/MMDVMHost/MMDVMESPECIAL.ini)
masterespecial=`expr substr $masterespecial 15 30`
#YSFGateway.ini
master=`grep -n -m 1 "^Startup=" $usuario/YSFClients/YSFGateway/YSFGateway.ini`
master=`echo "$master" | tr -d '[[:space:]]'`
buscar=":"
largo=`expr index $master $buscar`
largo=`expr $largo + 1`
largo1=`expr $largo - 2`
linea_YSFGateway=`expr substr $master 1 $largo1`
masterYSFGateway=$(awk "NR==$linea_YSFGateway" $usuario/YSFClients/YSFGateway/YSFGateway.ini)
masterYSFGateway=`echo "$masterYSFGateway" | tr -d '[[:space:]]'`
#ACTUALIZA EL  PANEL DE CONTROL"
sudo echo 20 > /sys/class/gpio/export
sudo echo 21 > /sys/class/gpio/export
sudo echo out > /sys/class/gpio/gpio20/direction
sudo echo out > /sys/class/gpio/gpio21/direction
sudo sleep 0.5
sudo echo 0 > /sys/class/gpio/gpio20/value
sudo echo 0 > /sys/class/gpio/gpio21/value
sudo echo 1 > /sys/class/gpio/gpio21/value
sudo sleep 1
sudo echo 0 > /sys/class/gpio/gpio20/value
sudo echo 1 > /sys/class/gpio/gpio20/value
sudo sleep 0.5
sudo echo 20 > /sys/class/gpio/unexport
sudo echo 21 > /sys/class/gpio/unexport
bm=`sed -n '2p'  $usuario/MMDVMHost/MMDVMBM.ini`
plus=`sed -n '2p'  $usuario/MMDVMHost/MMDVMPLUS.ini`
dstar=`sed -n '2p'  $usuario/MMDVMHost/MMDVMDSTAR.ini`
fusion=`sed -n '2p'  $usuario/MMDVMHost/MMDVMFUSION.ini`
frbm=`sed -n '13p'  $usuario/MMDVMHost/MMDVMBM.ini`
frplus=`sed -n '13p'  $usuario/MMDVMHost/MMDVMPLUS.ini`
sudo wget -post-data http://associacioader.com/prueba1.php?callBM=$bm'&'callPLUS=$plus'&'masterBM=$masterbm'&'masterPLUS=$masterplus'&'radio=$masterradio'&'version=$version'&'ESPECIAL=$masterespecial'&'YSFGateway=$masterYSFGateway                      
frecuencia=$(awk "NR==1" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_BM.desktop $usuario/
sed -i "12c Name=$frecuencia" $usuario/RXF_BM.desktop
cd $usuario
cp RXF_BM.desktop $usuario/Desktop
rm $usuario/RXF_BM.desktop

frecuencia=$(awk "NR==2" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_DMRPLUS.desktop $usuario/
sed -i "11c Name=$frecuencia" $usuario/RXF_DMRPLUS.desktop
cd $usuario
cp RXF_DMRPLUS.desktop $usuario/Desktop
rm $usuario/RXF_DMRPLUS.desktop

frecuencia=$(awk "NR==3" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_ESPECIAL.desktop $usuario/
sed -i "11c Name=$frecuencia" $usuario/RXF_ESPECIAL.desktop
cd $usuario
cp RXF_ESPECIAL.desktop $usuario/Desktop
rm $usuario/RXF_ESPECIAL.desktop

frecuencia=$(awk "NR==4" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_RADIO.desktop $usuario/
sed -i "11c Name=$frecuencia" $usuario/RXF_RADIO.desktop
cd $usuario
cp RXF_RADIO.desktop $usuario/Desktop
rm $usuario/RXF_RADIO.desktop

frecuencia=$(awk "NR==6" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_SOLOFUSION.desktop $usuario/
sed -i "11c Name=$frecuencia" $usuario/RXF_SOLOFUSION.desktop
cd $usuario
cp RXF_SOLOFUSION.desktop $usuario/Desktop
rm $usuario/RXF_SOLOFUSION.desktop

frecuencia=$(awk "NR==5" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_DSTAR.desktop $usuario/
sed -i "11c Name=$frecuencia" $usuario/RXF_DSTAR.desktop
cd $usuario
cp RXF_DSTAR.desktop $usuario/Desktop
rm $usuario/RXF_DSTAR.desktop

frecuencia=$(awk "NR==13" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_YSF2DMR.desktop $usuario/
sed -i "11c Name=$frecuencia" $usuario/RXF_YSF2DMR.desktop
cd $usuario
cp RXF_YSF2DMR.desktop $usuario/Desktop
rm $usuario/RXF_YSF2DMR.desktop

frecuencia=$(awk "NR==14" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_DMR2YSF.desktop $usuario/
sed -i "11c Name=$frecuencia" $usuario/RXF_DMR2YSF.desktop
cd $usuario
cp RXF_DMR2YSF.desktop $usuario/Desktop
rm $usuario/RXF_DMR2YSF.desktop

frecuencia=$(awk "NR==15" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_DMR2NXDN.desktop $usuario/
sed -i "11c Name=$frecuencia" $usuario/RXF_DMR2NXDN.desktop
cd $usuario
cp RXF_DMR2NXDN.desktop $usuario/Desktop
rm $usuario/RXF_DMR2NXDN.desktop

frecuencia=$(awk "NR==17" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_NXDN.desktop $usuario/
sed -i "11c Name=$frecuencia" $usuario/RXF_NXDN.desktop
cd $usuario
cp RXF_NXDN.desktop $usuario/Desktop
rm $usuario/RXF_NXDN.desktop


frecuencia=$(awk "NR==18" $usuario/INFO_RXF)
cd $usuario/Desktop/
cp RXF_DMRGATEWAY.desktop $usuario/
sed -i "11c Name=$frecuencia" $usuario/RXF_DMRGATEWAY.desktop
cd $usuario
cp RXF_DMRGATEWAY.desktop $usuario/Desktop
rm $usuario/RXF_DMRGATEWAY.desktop

# Dar permisos al Escritorio
sudo chmod 777 -R $usuario/Desktop
sleep 2

sudo rm /home/pi/PI-ADER/Desktop/st-data
sudo rm /home/pi/Desktop/st-data

