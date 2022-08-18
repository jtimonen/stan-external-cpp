library(cmdstanr)

uh <-  paste0("USER_HEADER=", file.path(getwd(), "external.hpp"))
mod <- cmdstan_model("model.stan",
                     cpp_options = list(uh),
                     include_paths = getwd(),
                     stanc_options = list("allow-undefined"),
                     force_recompile = TRUE)
mod$save_hpp_file()
fit <- mod$sample(mod, data = list())


