static const char col_gray1[]       = "#1A191A";
static const char col_gray2[]       = "#191B1C";

static const char col_gray3[]       = "#404F83";
static const char col_gray4[]       = "#4B5F9D";

static const char col_cyan[]        = "#181919";

static const char *colors[][3]      = {
  /*               fg         bg         border   */
  [SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
  [SchemeSel]  = { col_gray4, col_cyan,  col_gray4 },
};