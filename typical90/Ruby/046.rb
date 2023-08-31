n = gets.to_i
a, b, c = [], [], []

a = gets.split.map(&:to_i)
b = gets.split.map(&:to_i)
c = gets.split.map(&:to_i)

an = Array.new(46, 0)
bn = Array.new(46, 0)
cn = Array.new(46, 0)

n.times do |i|
    an[a[i] % 46] += 1
    bn[b[i] % 46] += 1
    cn[c[i] % 46] += 1
end

ans = 0
46.times do |i|
    46.times do |j|
        46.times do |k|
            if (i + j + k) % 46 == 0
                ans += an[i] * bn[j] * cn[k]
            end
        end
    end
end

puts ans
