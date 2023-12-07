# PasswordGenerator


## This C++ program generates a random password of a specified length using characters from the ASCII character set.
<ul>
  <li>It creates a vector keyboardCharacters to store characters from ASCII code 33 to 122 (excluding 123).</li>
  <li>The characters are then shuffled using random_shuffle to create a more random distribution.</li>
  <li>The program prompts the user to enter the desired length of the password, ensuring that the input is valid (an integer between 8 and 20).</li>
  <li>It uses a random number generator to select characters from the shuffled vector and prints the generated password.</li>
  
</ul>
