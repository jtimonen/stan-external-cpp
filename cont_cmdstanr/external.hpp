#include <stan/model/model_header.hpp>
#include <ostream>

namespace hei_model_namespace {

// double
double add_two(const double &x, std::ostream* pstream__) {
  return x + 2.0;
}

// var
stan::math::var add_two(const stan::math::var& x, std::ostream* pstream__) {
  double x_ = x.val();
  double f = x_ + 2.0;
  double dfdx_ = 1.0;
  return stan::math::var(new stan::math::precomp_vv_vari(f, x.vi_, x.vi_, dfdx_, dfdx_));
}


} // namespace
