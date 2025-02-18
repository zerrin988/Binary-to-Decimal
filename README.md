# **Binary to Decimal Conversion**  

## **Overview**  
This program converts a ***4-bit binary number*** to decimal using exponentiation. 
It first **reverses** the binary number and then computes its decimal equivalent using powers of `2`.  

## Input
You have to manually change the input from the code as there is no Input mechanism impletmented

## **How It Works**  

### **1. Reversing the Binary Array**  
- `binaryNum[4] = {1,1,1,0}` is reversed and stored in `trial[5]`.  
- This makes sure that the **least significant bit (LSB)** is processed first.  

### **2. Converting Binary to Decimal**  
- Uses the formula:  
  ```plaintext
  decimal = Σ (bit × 2^(position))
  ```
- **Example for `1110`:**  
  ```plaintext
  (0 × 2^0) + (1 × 2^1) + (1 × 2^2) + (1 × 2^3) = 14
  ```

## **Main Functions**  

### **`pow(2, i)`**  
Calculates the **power of 2** for each bit’s position.  

### **Loops**  
- **First `for` loop:** Reverses the binary array.  
- **Second `for` loop:** Converts binary to decimal using exponentiation.  

## **Notes**  
- **Hardcoded array size (`4`)**.  
- **Inefficient exponentiation (`pow(2, i)`)**: Bitwise shifting (`1 << i`) is faster but this code doesn't use that method.  

## **Compilation & Execution**  
```sh
gcc binary_to_decimal.c -o binary_to_decimal  
./binary_to_decimal  
```

## **Example Output**  
```sh
14 is the answer
```
-------------
## License
This project is open-source and available under the [MIT License](LICENSE).
