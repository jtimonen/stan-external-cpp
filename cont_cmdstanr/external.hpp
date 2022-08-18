#include <stan/model/model_header.hpp>
#include <ostream>

namespace model_model_namespace {

// double
double add_two(const double &x, std::ostream* pstream__) {
  return x + 2.0;
}

// var
stan::math::var add_two(const stan::math::var& x, std::ostream* pstream__) {
  double x_ = x.val();
  double f = x_ + 2.0;
  return stan::math::make_callback_vari(
    f, [x](const auto& vi) mutable { x.adj() += vi.adj_;}
  );
}


} // namespace
