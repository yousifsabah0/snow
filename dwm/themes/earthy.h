static const char col_gray1[]       = "#0F0F16";
static const char col_gray2[]       = "#4A463D";

static const char col_gray3[]       = "#B3B8B5";
static const char col_gray4[]       = "#8B9494";

static const char col_cyan[]        = "#7A6C56";

static const char *colors[][3]      = {
  /*               fg         bg         border   */
  [SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
  [SchemeSel]  = { col_gray4, col_cyan,  col_gray4 },
};