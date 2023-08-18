n = gets.to_i
a = Array.new(n+1, 0)
b = Array.new(n+1, 0)

(1..n).each do |i|
  c, p = gets.split.map(&:to_i)
  if c==1 then a[i] = p
  else b[i] = p
  end
end

n.times do |i|
  a[i+1] += a[i]
  b[i+1] += b[i]
end

q = gets.to_i
q.times do |i|
  l, r = gets.split.map(&:to_i)
  print(a[r]-a[l-1],' ')
  puts b[r]-b[l-1]
end