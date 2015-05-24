
R = gets.chomp.to_i
size = R*2+10
t = []
size.times do |i|
  t[i] = []
  size.times do |j|
    t[i][j] = 0
  end
end

center = size/2;
t[1][center] = 1
t[2][center] = t[2][center+1] = t[2][center-1] = 1 

puts "#{size} size #{center} center"

modulo = ( 2**31 ) - 1

3.upto(R+1) do |i| 
  c = ( 2*i+1 )/2
  0.upto(c) do |j|
    t[i][center+j] = t[i-1][center+j] + t[i-1][center+j+1] + t[i-1][center+j-1];
    t[i][center+j] = t[i][center+j] % modulo
    t[i][center-j] = t[i-1][center-j] + t[i-1][center-j+1] + t[i-1][center-j-1];
    t[i][center-j] = t[i][center-j] % modulo
  end
end


sum = 0
start = center - (2*R+1)/2
fim = center + (2*R+1)/2 
start.upto(fim) do |i|
  sum = sum + t[R+1][i]
end

puts sum
sum = sum % modulo
puts sum

