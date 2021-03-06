// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getEdgeColor
StringVector getEdgeColor(IntegerMatrix m, String colorTrue, String colorFalse, String colorDiff);
RcppExport SEXP _multinets_getEdgeColor(SEXP mSEXP, SEXP colorTrueSEXP, SEXP colorFalseSEXP, SEXP colorDiffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< String >::type colorTrue(colorTrueSEXP);
    Rcpp::traits::input_parameter< String >::type colorFalse(colorFalseSEXP);
    Rcpp::traits::input_parameter< String >::type colorDiff(colorDiffSEXP);
    rcpp_result_gen = Rcpp::wrap(getEdgeColor(m, colorTrue, colorFalse, colorDiff));
    return rcpp_result_gen;
END_RCPP
}
// iterateColor
StringVector iterateColor(IntegerVector x, String colorTrue, String colorFalse);
RcppExport SEXP _multinets_iterateColor(SEXP xSEXP, SEXP colorTrueSEXP, SEXP colorFalseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< String >::type colorTrue(colorTrueSEXP);
    Rcpp::traits::input_parameter< String >::type colorFalse(colorFalseSEXP);
    rcpp_result_gen = Rcpp::wrap(iterateColor(x, colorTrue, colorFalse));
    return rcpp_result_gen;
END_RCPP
}
// iterateShape
StringVector iterateShape(IntegerVector x, String shapeTrue, String shapeFalse);
RcppExport SEXP _multinets_iterateShape(SEXP xSEXP, SEXP shapeTrueSEXP, SEXP shapeFalseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< String >::type shapeTrue(shapeTrueSEXP);
    Rcpp::traits::input_parameter< String >::type shapeFalse(shapeFalseSEXP);
    rcpp_result_gen = Rcpp::wrap(iterateShape(x, shapeTrue, shapeFalse));
    return rcpp_result_gen;
END_RCPP
}
// openPlot
NumericMatrix openPlot(NumericMatrix A);
RcppExport SEXP _multinets_openPlot(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(openPlot(A));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_multinets_getEdgeColor", (DL_FUNC) &_multinets_getEdgeColor, 4},
    {"_multinets_iterateColor", (DL_FUNC) &_multinets_iterateColor, 3},
    {"_multinets_iterateShape", (DL_FUNC) &_multinets_iterateShape, 3},
    {"_multinets_openPlot", (DL_FUNC) &_multinets_openPlot, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_multinets(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
