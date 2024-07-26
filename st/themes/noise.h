static const char *colorname[] = {
    /* 8 normal colors */
    [0] = "#1A191A", /* black   */
    [1] = "#404F83", /* red     */
    [2] = "#191B1C", /* green   */
    [3] = "#404F83", /* yellow  */
    [4] = "#4B5F9D", /* blue    */
    [5] = "#404F83", /* magenta */
    [6] = "#4B5F9D", /* cyan    */
    [7] = "#404F83", /* white   */

    /* 8 bright colors */
    [8]  = "#191B1C", /* black   */
    [9]  = "#404F83", /* red     */
    [10] = "#191B1C", /* green   */
    [11] = "#404F83", /* yellow  */
    [12] = "#4B5F9D", /* blue    */
    [13] = "#404F83", /* magenta */
    [14] = "#4B5F9D", /* cyan    */
    [15] = "#404F83", /* white   */

    /* special colors */
    [256] = "#181919", /* background */
    [257] = "#404F83", /* foreground */
};

unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;