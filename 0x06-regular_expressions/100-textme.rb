#!/usr/bin/env ruby

log_entry = ARGV[0]

# Regular expression to match and extract 'from', 'to', and 'flags'
pattern = /\[from:(?<sender>[^\]]+)\] \[to:(?<receiver>[^\]]+)\] \[flags:(?<flags>[^\]]+)\]/

# Extracting sender, receiver, and flags using regex match
match_data = log_entry.match(pattern)

if match_data
  sender = match_data[:sender]
  receiver = match_data[:receiver]
  flags = match_data[:flags]
  
  # Output format as specified
  puts "#{sender},#{receiver},#{flags}"
else
  puts ""
end
