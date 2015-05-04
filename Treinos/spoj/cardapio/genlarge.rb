def food_create
  ["","!"].shuffle[0] + ('a'..'z').to_a.shuffle[0..15].join
end

100.times do
  t = rand(1000)
  puts t
  t.times do
    puts "#{food_create} #{food_create}"
  end
end
