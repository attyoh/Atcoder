n, m = gets.split.map(&:to_i)
  
G = Array.new(n) { Array.new }
m.times do |i|
  a, b = gets.split.map(&:to_i)
  a -= 1
  b -= 1
  G[a].push b
  G[b].push a
end

ans = 0
n.times do |i|
  if G[i].count{|j| i > j} == 1
    ans += 1 
  end
end
puts ans
