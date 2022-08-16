functions {
  int fib(int n);
  //int fib(int n) {
  //  if (n <= 0) reject("n must be positive");
  //  return n <= 2 ? 1 : fib(n - 1) + fib(n - 2);
  //}
}

data {
  int<lower=0> N;
}

transformed data  {
  int f = fib(N);
}

parameters {
  real mu;
}

model {
  mu ~ normal(f, 1.0);
}

