def has_duplicates(array):
    existing_values =   {}
    for i in range (len(array)):
        if existing_values.get(array[i], None) == None:
            existing_values[array[i]] = array[i]
        else: return True
    return False

