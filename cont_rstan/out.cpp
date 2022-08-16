// Code generated by Stan version 2.21.0

#include <stan/model/model_header.hpp>

namespace model1f124caaeccd_cont_namespace {

using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;

static int current_statement_begin__;

stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model1f124caaeccd_cont");
    reader.add_event(24, 22, "end", "model1f124caaeccd_cont");
    return reader;
}

template <typename T0__>
typename boost::math::tools::promote_args<T0__>::type
add_two(const T0__& x, std::ostream* pstream__);

template <typename T0__, typename T1__>
typename boost::math::tools::promote_args<T0__, T1__>::type
add_y(const T0__& x,
          const T1__& y, std::ostream* pstream__);

class model1f124caaeccd_cont
  : public stan::model::model_base_crtp<model1f124caaeccd_cont> {
private:
        double y;
public:
    model1f124caaeccd_cont(rstan::io::rlist_ref_var_context& context__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, 0, pstream__);
    }

    model1f124caaeccd_cont(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, random_seed__, pstream__);
    }

    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;

        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning

        current_statement_begin__ = -1;

        static const char* function__ = "model1f124caaeccd_cont_namespace::model1f124caaeccd_cont";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        try {
            // initialize data block variables from context__
            current_statement_begin__ = 7;
            context__.validate_dims("data initialization", "y", "double", context__.to_vec());
            y = double(0);
            vals_r__ = context__.vals_r("y");
            pos__ = 0;
            y = vals_r__[pos__++];


            // initialize transformed data variables
            // execute transformed data statements

            // validate transformed data

            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 10;
            num_params_r__ += 1;
            current_statement_begin__ = 11;
            num_params_r__ += 1;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    ~model1f124caaeccd_cont() { }


    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        typedef double local_scalar_t__;
        stan::io::writer<double> writer__(params_r__, params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;

        current_statement_begin__ = 10;
        if (!(context__.contains_r("m1")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable m1 missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("m1");
        pos__ = 0U;
        context__.validate_dims("parameter initialization", "m1", "double", context__.to_vec());
        double m1(0);
        m1 = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(m1);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable m1: ") + e.what()), current_statement_begin__, prog_reader__());
        }

        current_statement_begin__ = 11;
        if (!(context__.contains_r("m2")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable m2 missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("m2");
        pos__ = 0U;
        context__.validate_dims("parameter initialization", "m2", "double", context__.to_vec());
        double m2(0);
        m2 = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(m2);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable m2: ") + e.what()), current_statement_begin__, prog_reader__());
        }

        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }


    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(std::vector<T__>& params_r__,
                 std::vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {

        typedef T__ local_scalar_t__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // dummy to suppress unused var warning

        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;
        try {
            stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);

            // model parameters
            current_statement_begin__ = 10;
            local_scalar_t__ m1;
            (void) m1;  // dummy to suppress unused var warning
            if (jacobian__)
                m1 = in__.scalar_constrain(lp__);
            else
                m1 = in__.scalar_constrain();

            current_statement_begin__ = 11;
            local_scalar_t__ m2;
            (void) m2;  // dummy to suppress unused var warning
            if (jacobian__)
                m2 = in__.scalar_constrain(lp__);
            else
                m2 = in__.scalar_constrain();

            // transformed parameters
            current_statement_begin__ = 15;
            local_scalar_t__ m1_new;
            (void) m1_new;  // dummy to suppress unused var warning
            stan::math::initialize(m1_new, DUMMY_VAR__);
            stan::math::fill(m1_new, DUMMY_VAR__);
            stan::math::assign(m1_new,add_two(m1, pstream__));

            current_statement_begin__ = 16;
            local_scalar_t__ m2_new;
            (void) m2_new;  // dummy to suppress unused var warning
            stan::math::initialize(m2_new, DUMMY_VAR__);
            stan::math::fill(m2_new, DUMMY_VAR__);
            stan::math::assign(m2_new,add_y(m2, y, pstream__));

            // validate transformed parameters
            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning

            current_statement_begin__ = 15;
            if (stan::math::is_uninitialized(m1_new)) {
                std::stringstream msg__;
                msg__ << "Undefined transformed parameter: m1_new";
                stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable m1_new: ") + msg__.str()), current_statement_begin__, prog_reader__());
            }
            current_statement_begin__ = 16;
            if (stan::math::is_uninitialized(m2_new)) {
                std::stringstream msg__;
                msg__ << "Undefined transformed parameter: m2_new";
                stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable m2_new: ") + msg__.str()), current_statement_begin__, prog_reader__());
            }

            // model body

            current_statement_begin__ = 20;
            lp_accum__.add(normal_log<propto__>(m1_new, 0.0, 1.0));
            current_statement_begin__ = 21;
            lp_accum__.add(normal_log<propto__>(m2_new, 0.0, 1.0));

        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        lp_accum__.add(lp__);
        return lp_accum__.sum();

    } // log_prob()

    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }


    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("m1");
        names__.push_back("m2");
        names__.push_back("m1_new");
        names__.push_back("m2_new");
    }


    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
    }

    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;

        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
        static const char* function__ = "model1f124caaeccd_cont_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning

        // read-transform, write parameters
        double m1 = in__.scalar_constrain();
        vars__.push_back(m1);

        double m2 = in__.scalar_constrain();
        vars__.push_back(m2);

        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        if (!include_tparams__ && !include_gqs__) return;

        try {
            // declare and define transformed parameters
            current_statement_begin__ = 15;
            double m1_new;
            (void) m1_new;  // dummy to suppress unused var warning
            stan::math::initialize(m1_new, DUMMY_VAR__);
            stan::math::fill(m1_new, DUMMY_VAR__);
            stan::math::assign(m1_new,add_two(m1, pstream__));

            current_statement_begin__ = 16;
            double m2_new;
            (void) m2_new;  // dummy to suppress unused var warning
            stan::math::initialize(m2_new, DUMMY_VAR__);
            stan::math::fill(m2_new, DUMMY_VAR__);
            stan::math::assign(m2_new,add_y(m2, y, pstream__));

            if (!include_gqs__ && !include_tparams__) return;
            // validate transformed parameters
            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning

            // write transformed parameters
            if (include_tparams__) {
                vars__.push_back(m1_new);
                vars__.push_back(m2_new);
            }
            if (!include_gqs__) return;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng, params_r_vec, params_i_vec, vars_vec, include_tparams, include_gqs, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    std::string model_name() const {
        return "model1f124caaeccd_cont";
    }


    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "m1";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "m2";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "m1_new";
            param_names__.push_back(param_name_stream__.str());
            param_name_stream__.str(std::string());
            param_name_stream__ << "m2_new";
            param_names__.push_back(param_name_stream__.str());
        }

        if (!include_gqs__) return;
    }


    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "m1";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "m2";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "m1_new";
            param_names__.push_back(param_name_stream__.str());
            param_name_stream__.str(std::string());
            param_name_stream__ << "m2_new";
            param_names__.push_back(param_name_stream__.str());
        }

        if (!include_gqs__) return;
    }

}; // model

}  // namespace

typedef model1f124caaeccd_cont_namespace::model1f124caaeccd_cont stan_model;

#ifndef USING_R

stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

#endif
