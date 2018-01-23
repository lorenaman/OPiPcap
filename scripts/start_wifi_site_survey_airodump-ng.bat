mode con: cols=120 lines=50
plink.exe -ssh -pw orangepi orangepi@10.0.0.1 "sudo monitor_mode.sh wlan1 11"-
plink.exe -X -ssh -pw orangepi orangepi@10.0.0.1 "rm -rf *.csv; sudo timeout 10 airodump-ng --band abg wlan1 -w site_survey -o csv 2> /dev/null; sed '/Station/Q' *.csv | cut -d ',' -f1,4,6,9,14 | column -ts ',' | less"
pause