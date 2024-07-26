#!/bin/bash

get_wifi_status() {
  if [ "$(cat /sys/class/net/wlan0/operstate)" = "up" ]; then
    echo "󰤨"  # Connected WiFi icon
  else
    echo "󰤭"  # Disconnected WiFi icon
  fi
}

get_wifi_status