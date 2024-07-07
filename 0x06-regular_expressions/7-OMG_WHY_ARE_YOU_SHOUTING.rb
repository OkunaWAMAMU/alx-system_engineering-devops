#!/usr/bin/env ruby

pattern = /[A-Z]/

input = ARGV[0]

# Using scan method to find all capital letters and join them
matches = input.scan(pattern).join

puts matches
