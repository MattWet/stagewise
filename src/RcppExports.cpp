// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// retoMat
Rcpp::List retoMat(std::string file, int skip, bool header, char sep, bool verbose);
RcppExport SEXP _sdr_retoMat(SEXP fileSEXP, SEXP skipSEXP, SEXP headerSEXP, SEXP sepSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< bool >::type header(headerSEXP);
    Rcpp::traits::input_parameter< char >::type sep(sepSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(retoMat(file, skip, header, sep, verbose));
    return rcpp_result_gen;
END_RCPP
}
// retoMat_subset
Rcpp::NumericMatrix retoMat_subset(const List& x, IntegerVector i, IntegerVector j, bool standardize, char sep, bool verbose);
RcppExport SEXP _sdr_retoMat_subset(SEXP xSEXP, SEXP iSEXP, SEXP jSEXP, SEXP standardizeSEXP, SEXP sepSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type j(jSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    Rcpp::traits::input_parameter< char >::type sep(sepSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(retoMat_subset(x, i, j, standardize, sep, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sdr_retoMat", (DL_FUNC) &_sdr_retoMat, 5},
    {"_sdr_retoMat_subset", (DL_FUNC) &_sdr_retoMat_subset, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_sdr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
