#!/usr/bin/env ruby

pattern = /^h.n$/

input = ARGV[0]

# Using match method to check if input matches the pattern
if input.match?(pattern)
  puts input
else
  puts ""
end
