import math

price_str = input ("Enter the price of your item:")
price_float = float(price_str)
salestax_str = input("Enter the sales tax in decimal form:")
salestax_float = float(salestax_str)

totalcost = price_float*salestax_float+price_float

print ("The total cost of your item is" ,totalcost,)

#price
#salestaxe = 8.5%

#price*sales_tax + price
#price(sales_tax+1)
