// double
double add_two(const double &x, std::ostream* pstream__) {
  return x + 2.0;
}

// var
var add_two(const var& x, std::ostream* pstream__) {
  double x_ = x.val();
  double f = x_ + 2.0;
  double dfdx_ = 1.0;
  return var(new precomp_v_vari(f, x.vi_, dfdx_));
}

// double + double
double add_y(const double &x, const double &y, std::ostream* pstream__) {
  return x + y;
}

// var + double
var add_y(const var& x, const double &y, std::ostream* pstream__) {
  double x_ = x.val();
  double f = x_ + y;
  double dfdx_ = 1.0;
  return var(new precomp_v_vari(f, x.vi_, dfdx_));
}
