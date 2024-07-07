#!/usr/bin/env ruby

pattern = /^\d{10}$/

input = ARGV[0].strip

# Using match method to check if input matches the pattern
if input.match?(pattern)
  puts input
else
  puts ""
end
