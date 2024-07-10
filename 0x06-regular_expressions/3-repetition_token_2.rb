#!/usr/bin/env ruby

pattern = /hbt+n/

input = ARGV[0]

# Using scan method to find matches and join them together
matches = input.scan(pattern).join

puts matches
