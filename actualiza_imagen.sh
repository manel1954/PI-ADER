                
#!/bin/bash  
                        
                        cd /home/pi/PI-ADER                       
                        git pull                      
                        sh /home/pi/PI-ADER/ejecutar_ImagenActualizada.sh &
                        mv qt_* /home/pi/PI-ADER/qt
                        chmod 777 -R /home/pi/PI-ADER/qt






