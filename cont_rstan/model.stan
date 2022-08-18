functions {
  real add_two(real x);
}

data {
  real y;
}
parameters {
  real m1;
}

transformed parameters {
  real m1_new = add_two(m1);
}

model {
  m1_new ~ normal(0.0, 1.0);
}

