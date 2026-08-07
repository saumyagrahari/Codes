# Two customer IDs with same value
customer_id_1 = 1001
customer_id_2 = 1001

print("customer_id_1:", customer_id_1)
print("customer_id_2:", customer_id_2)

print("\nMemory address of customer_id_1:", id(customer_id_1))
print("Memory address of customer_id_2:", id(customer_id_2))

print("\nAre they the same object?", customer_id_1 is customer_id_2)