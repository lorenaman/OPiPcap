# OPiPcap: AirPcap alternative for WiFi packet sniffing in Windows platform

It is easy to capture wifi packets over the air in Linux and Mac OSX, but options are limited in Windows platform.
AirPcap from Riverbed seems only solution for Windows platform though a few other options are mentioned. 

But AirPcap costs beyond resonable expection, so here OPiPcap is trying to offer alternative affordable solution.

Hardware: 
 - Orange Pi Zero with Armbian OS(Some necessary packages installed)
 - Armbian compatible 2.4G or 2.4G/5G USB wifi adapter
 - Tested WiFi USB dongles
   1. River AirPcap NX, 2.4G/5G Dual band
   2. Alfa AWUS036NEH, 2.4G Single band
   3. Alfa AWUS036NHA, 2.4G Single band
   4. Netgear WNDA3100v1, 2.4/5G Dual band
   5. WTXUP 150N, 2.4G Single band
   
Software:
 - OPiPcap to control Orange Pi Zero, capture wifi packets, and display in Windows in real time.

How it works:
  - OPiPcap which is Python tkinter program runs in Windows and communicate with Orange Pi over SSH
  - OPiPcap talks with Orange Pi and update status in real time.
  - OPiPcap runs tcpdump on Orange Pi, transport traffic over SSH and feeds to Wireshark over PIPE in real time.
  
