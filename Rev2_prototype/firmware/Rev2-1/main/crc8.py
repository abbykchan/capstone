def compute_crc8_atm(datagram, initial_value=0):
    crc = initial_value
    # Iterate bytes in data
    for byte in datagram:
        # Iterate bits in byte
        for _ in range(0, 8):
            if (crc >> 7) ^ (byte & 0x01):
                crc = ((crc << 1) ^ 0x07) & 0xFF
            else:
                crc = (crc << 1) & 0xFF
            # Shift to next bit
            byte = byte >> 1
    return crc


print(hex(compute_crc8_atm([0xB4, 0x07, 0xB5, 0xD2, 0x3A])))
print(hex(compute_crc8_atm([0x3A, 0xD2, 0x07])))
