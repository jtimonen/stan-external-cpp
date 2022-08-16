library(cmdstanr)
library(rstan)

#model <- cmdstanr::cmdstan_model("fib.stan")


mod <- rstan::stan_model("fib.stan", allow_undefined = TRUE,
           includes = paste0('\n#include "', 
                             file.path(getwd(), 'fib.hpp'), '"\n'),
           auto_write = FALSE, save_dso = FALSE)
dat <- list(N=5)
fit <- rstan::sampling(mod, data = dat)

# Write cpp code to file
cat(mod@model_cpp[[2]], file="out.cpp")
