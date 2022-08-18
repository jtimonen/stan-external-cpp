trimmer <- function(line){
  line <- trimws(line)
  substr(line, 29, nchar(line)-1)
}

current_statement_begins <- function(cpp_file){
  lines <- readLines(cpp_file)
  line_nums <- grep("current_statement_begin__ =", lines)
  lines <- lines[line_nums]
  lines <- unlist(lapply(lines, trimmer))
  list(
    cpp_line_nums = line_nums,
    stan_line_nums = as.numeric(lines)
  )
}

