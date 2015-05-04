def atend(pedidos, i, discarded)

  not_take1 = !(pedidos[i][0] =~ /!/).nil?
  not_take2 = !(pedidos[i][1] =~ /!/).nil?
  symbol1 = pedidos[i][0].gsub("!","").to_sym
  symbol2 = pedidos[i][1].gsub("!","").to_sym

  if i == 0
    ret = discarded[symbol1].nil? || discarded[symbol1] == not_take1 || discarded[symbol2].nil? || discarded[symbol2] == not_take2 if i == 0
    #if ret 
    #  #puts "i #{i} hash1 #{discarded}"
    #end
    return ret
  end

  ret1 = false
  if discarded[symbol1].nil? || discarded[symbol1] == not_take1
    #puts "passou i #{i} hash1 #{discarded} symbol #{symbol1} not_take1 #{not_take1}"
    hash1 = discarded.clone
    hash1[symbol1] = not_take1 
    ret1 = atend(pedidos, i-1, hash1)
  end
  return true if ret1
  ret2 = false
  if discarded[symbol2].nil? || discarded[symbol2] == not_take2
    hash2 = discarded.clone
    hash2[symbol2] = not_take2 
    ret2 = atend(pedidos, i-1, hash2)
  end

  return ret1 || ret2 
end

def solve(n)
  pedidos = []
  ranking = {}
  n.times do |i|
    line = gets.chomp.split
    pedidos[i] = line 
    symbol1 = line[0].to_sym
    symbol2 = line[1].to_sym
    ranking[symbol1] = ranking[symbol1] ? ranking[symbol1] + 1 : 1
    ranking[symbol2] = ranking[symbol2] ? ranking[symbol2] + 1 : 1
  end

  ranking = ranking.sort_by{ |x,y| -y }
  puts ranking

  #discarded = {}
  #return atend(pedidos, n-1, discarded)

  #stack = []
  #stack.push 0
  #stack.push 1

  #cliente = (0..n-1).to_a.reverse

  #while( !cliente.empty? ) do
  #  op = stack.pop
  #  c = cliente.last
  #  choice = pedidos[c].last[op]
  #  symbol = choice.to_sym
  #  if choice =~ /^!/ 
  #    if discarded[symbol] != false 
  #      discarded[symbol] = true
  #      stack.push 0
  #      stack.push 1
  #      cliente.pop
  #    else
  #      
  #    end
  #  else 
  #    if discarded[symbol] != true 
  #      discarded[symbol] = false 
  #      stack.push 0
  #      stack.push 1
  #      cliente.pop
  #    else
  #    end
  #  end
  #end
end

inst = 1
n = gets
while( n ) do
  n = n.chomp.to_i
  puts "Instancia #{inst}"
  puts (solve(n) ? "sim" : "nao")
  puts ""
  n = gets
  inst += 1
end

