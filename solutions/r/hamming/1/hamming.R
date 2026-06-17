# This is a stub function to take two strings
# and calculate the hamming distance
hamming <- function(strand_a, strand_b) {
  if (nchar(strand_a) != nchar(strand_b)) {
    stop("Strands must be of equal length.")
  }
  
  # Convert strings to character vectors
  vec_a <- strsplit(strand_a, "")[[1]]
  vec_b <- strsplit(strand_b, "")[[1]]
  
  # Sum the logical vector where elements are not equal
  return(sum(vec_a != vec_b))
}
