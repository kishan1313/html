function writeMyName(name) {
    if (name === 'Wrong') return false
  
    // Print the name variable
    console.log(name)
  
    return true
  }
  
  console.log(writeMyName('KISHAN'))
  
  // Output:
  // "Goal"
  // true
  
  console.log(writeMyName('Wrong'))
  
  // Output: false