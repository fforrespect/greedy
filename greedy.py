while 1:
    # Ask the amount of change owed (in $) then convert it into cents
    change_owed = int(float(input("How much change is owed? "))*100)

    # Only allow for a positive (inc 0) number of cents to be inputted
    if 0 <= change_owed:
        break

# For each denomination, integer divide the amount of change owed by the denom, and add that to the number of coins needed.
# Subsequently, take the change left, and find how many of the next denom are needed for that amount of change.
coins = change_owed // 25
coins += (change_owed % 25) // 10
coins += ((change_owed % 25) % 10) // 5
coins += ((change_owed % 25) % 10) % 5 # // 1

print(int(coins))


