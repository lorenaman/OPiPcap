#!/bin/bash
[ "$#" -ne 2 ] && echo "Usage: $0 [wlan0|wlan1] timeout" >&2 && exit 1
[ "$1" != "wlan0" ] && [ "$1" != "wlan1" ] && echo "Usage: $0 [wlan0|wlan1] timeout" >&2 && exit 1

intf=$1
timeout=$2
rm -rf *.csv; sync

# scan wifi network
monitor_mode.sh "$1" "11" || (echo "Failed to set Monitor mode in $intf" && exit 2)
sudo airodump-ng --band abg $intf -w site_survey -o csv 2> /dev/null &
PID=$!
sleep $timeout
sudo kill -TERM $PID
sudo killall airodump-ng

# parse result and output
sed '/Station/Q' *.csv | cut -d ',' -f1,4,6,9,14 | column -ts ',' > site_survey.csv
#line_limit=$(seq -s= $`wc -L site_survey.csv| cut -d ' ' -f1`|tr -d '[:digit:]')
sed '/ESSID/a \ ' site_survey.csv > final.csv
cat final.csv
exit 0
