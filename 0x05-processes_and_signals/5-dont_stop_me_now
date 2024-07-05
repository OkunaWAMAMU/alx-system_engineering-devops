#!/usr/bin/env bash
# This script stops the 4-to_infinity_and_beyond process

# Get the PID of the 4-to_infinity_and_beyond process
pid=$(pgrep -f 4-to_infinity_and_beyond)

# Kill the process if it is running
if [ -n "$pid" ]; then
  kill "$pid"
  echo "4-to_infinity_and_beyond process (PID: $pid) has been terminated."
else
  echo "4-to_infinity_and_beyond process is not running."
fi
