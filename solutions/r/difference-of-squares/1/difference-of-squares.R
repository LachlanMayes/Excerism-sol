difference_of_squares <- function(natural_number) {
  # Square of the sum: (1 + 2 + ... + n)^2
  square_sum <- sum(1:natural_number)^2
  
  # Sum of the squares: 1^2 + 2^2 + ... + n^2
  sum_squares <- sum((1:natural_number)^2)
  
  return(square_sum - sum_squares)
}
