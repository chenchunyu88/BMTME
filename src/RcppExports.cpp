// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// wishart
inline arma::mat wishart(unsigned int df, const arma::mat& S);
RcppExport SEXP _BMTME_wishart(SEXP dfSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(wishart(df, S));
    return rcpp_result_gen;
END_RCPP
}
// inv_wishart
inline arma::mat inv_wishart(unsigned int df, const arma::mat& S);
RcppExport SEXP _BMTME_inv_wishart(SEXP dfSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(inv_wishart(df, S));
    return rcpp_result_gen;
END_RCPP
}
// MVnorm
inline arma::mat MVnorm(unsigned int n, arma::vec mean, const arma::mat& S);
RcppExport SEXP _BMTME_MVnorm(SEXP nSEXP, SEXP meanSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(MVnorm(n, mean, S));
    return rcpp_result_gen;
END_RCPP
}
// MVnormvv
inline arma::rowvec MVnormvv(arma::vec mean, const arma::mat& S);
RcppExport SEXP _BMTME_MVnormvv(SEXP meanSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(MVnormvv(mean, S));
    return rcpp_result_gen;
END_RCPP
}
// MatMul
inline arma::mat MatMul(arma :: mat X, arma :: mat Y);
RcppExport SEXP _BMTME_MatMul(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma :: mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma :: mat >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(MatMul(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// Krone
inline arma::mat Krone(const arma::mat& A, const arma::mat& B);
RcppExport SEXP _BMTME_Krone(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(Krone(A, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BMTME_wishart", (DL_FUNC) &_BMTME_wishart, 2},
    {"_BMTME_inv_wishart", (DL_FUNC) &_BMTME_inv_wishart, 2},
    {"_BMTME_MVnorm", (DL_FUNC) &_BMTME_MVnorm, 3},
    {"_BMTME_MVnormvv", (DL_FUNC) &_BMTME_MVnormvv, 2},
    {"_BMTME_MatMul", (DL_FUNC) &_BMTME_MatMul, 2},
    {"_BMTME_Krone", (DL_FUNC) &_BMTME_Krone, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_BMTME(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
