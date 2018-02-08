#!/bin/bash

[ "$#" -ne 2 ] && echo "Usage: $0 [wlan0|wlan1] channel_number" >&2 && exit 1
[ "$1" != "wlan0" ] && [ "$1" != "wlan1" ] && echo "Usage: $0 [wlan0|wlan1] channel_number" >&2 && exit 1 

intf=$1
channel=$2

#echo "configuring $intf to monitor mode..." 
sudo ifconfig "$intf" down
sudo iwconfig "$intf" mode monitor
#echo "configuring $intf channel to $channel..." 
sudo iwconfig "$intf" channel "$channel" 2> /dev/null

if [ $? -ne 0 ]
then
  echo "Error for wireless request: Set Frequency. Invalid argument..."
  exit 1
fi

sudo ifconfig "$intf" up

exit 0
