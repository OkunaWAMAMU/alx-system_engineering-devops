#!/usr/bin/env ruby

pattern = /hbtt*n/  # Adjust the regex as per your requirement

input = ARGV[0]

# Using scan method to find matches
matches = input.scan(pattern)

# Joining matches together
puts matches.join
``
