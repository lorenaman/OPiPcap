plink.exe -ssh -pw orangepi orangepi@10.0.1.1 "sudo monitor_mode.sh wlan1 1"
plink.exe -ssh -pw orangepi orangepi@10.0.1.1 "sudo tcpdump -i wlan1 -U -w - 2>/dev/null" | ("C:\Program Files\Wireshark\Wireshark.exe" "-f" "-k" "-i" "-")
pause
