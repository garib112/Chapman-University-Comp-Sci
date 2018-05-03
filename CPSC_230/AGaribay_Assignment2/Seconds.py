# this program should tell the time in a 24 hour clock when given the seconds

import math

seconds_str = input("Enter the amount of time in seconds"
                    "(The number cannot exceed 86,400):")
seconds_int = int(seconds_str)

sec_min = seconds_int // 60
hours = sec_min //60
mins = sec_min % 60
sec = seconds_int % 60


print("The time is",hours,"hours",mins,"mins and",sec,"seconds")
                  
