library(rstan)

mod <- rstan::stan_model("cont.stan",
  allow_undefined = TRUE,
  includes = paste0(
    '\n#include "',
    file.path(getwd(), "external.hpp"), '"\n'
  ),
  auto_write = FALSE, save_dso = FALSE
)
dat <- list(y = 10)
fit <- rstan::sampling(mod, data = dat)

# Write cpp code to file
model_cpp <- mod@model_cpp[[2]]
cat(model_cpp, file = "out.cpp")

# Find the current_statement_begin__ updates
source("../r/linefinder.R")
csb <- current_statement_begins("out.cpp")
print(csb)
