#!/usr/bin/env ruby

pattern = /htbn+/

input = ARGV[0]

# Using scan method to find matches
matches = input.scan(pattern)

# Joining matches together
puts matches.join
