plink.exe -ssh -i id_rsa_putty.ppk orangepi@10.0.0.1 "sudo monitor_mode.sh wlan1 11"
plink.exe -ssh -i id_rsa_putty.ppk orangepi@10.0.0.1 "sudo tcpdump -i wlan1 -U -w - 2>/dev/null" | ("C:\Program Files\Wireshark\Wireshark.exe"  "-k" "-i" "-")
