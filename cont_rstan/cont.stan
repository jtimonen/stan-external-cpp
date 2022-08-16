functions {
  real add_two(real x);
  real add_y(real x, real y);
}

data {
  real y;
}
parameters {
  real m1;
  real m2;
}

transformed parameters {
  real m1_new = add_two(m1);
  real m2_new = add_y(m2, y);
}

model {
  m1_new ~ normal(0.0, 1.0);
  m2_new ~ normal(0.0, 1.0);
}

