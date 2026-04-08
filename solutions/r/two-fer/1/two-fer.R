two_fer <- function(name =  NULL) {
  if (is.null(name) || nchar(name) == 0) {
    name <- "you" 
  }
  return (paste0("One for ",name,", one for me."))
}
