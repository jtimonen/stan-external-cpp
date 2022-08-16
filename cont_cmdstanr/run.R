library(cmdstanr)

uh <-  paste0("USER_HEADER=", file.path(getwd(), "external.hpp"))
sf <-  paste0("STANCFLAGS=--allow-undefined")
mod <- cmdstan_model("hei.stan",
                     cpp_options = list(uh,sf),
                     include_paths = getwd(),
                     stanc_options = list("allow-undefined"),
                     force_recompile = TRUE)
dat <- list(y=10)
fit <- mod$sample(mod, data = dat)

# Write cpp code to file
cat(mod@model_cpp[[2]], file="out.cpp")
