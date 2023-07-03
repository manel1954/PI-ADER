                
#!/bin/bash  
                        #Colores
ROJO="\033[1;31m"
VERDE="\033[1;32m"
BLANCO="\033[1;37m"
AMARILLO="\033[1;33m"
CIAN="\033[1;36m"
GRIS="\033[0m"
MARRON="\33[38;5;138m"
                        clear
                        echo "${GRIS}"
                        cd /home/pi/PI-ADER   
                        xterm -geometry 87x6+652+138 -bg black -fg white -fa ‘verdana’ -fs 9x -T ACTUALIZANDO -e git pull                                      
                        sh /home/pi/PI-ADER/ejecutar_ImagenActualizada.sh &
                        mv qt_* /home/pi/PI-ADER/qt
                        chmod 777 -R /home/pi/PI-ADER/qt






