/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_TDI_Params_H8 : IndiTDIParams {
  Indi_TDI_Params_H8() : IndiTDIParams(indi_tdi_defaults, PERIOD_H8) { shift = 0; }
} indi_tdi_h8;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_TDI_Params_H8 : StgParams {
  // Struct constructor.
  Stg_TDI_Params_H8() : StgParams(stg_tdi_defaults) {}
} stg_tdi_h8;
