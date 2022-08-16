library(rstan)

mod <- rstan::stan_model("cont.stan", allow_undefined = TRUE,
           includes = paste0('\n#include "', 
                             file.path(getwd(), 'external.hpp'), '"\n'),
           auto_write = FALSE, save_dso = FALSE)
dat <- list(y=10)
fit <- rstan::sampling(mod, data = dat)

# Write cpp code to file
cat(mod@model_cpp[[2]], file="out.cpp")
