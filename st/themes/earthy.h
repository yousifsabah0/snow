static const char *colorname[] = {
    /* 8 normal colors */
    [0] = "#0F0F16", /* black   */
    [1] = "#7A6C56", /* red     */
    [2] = "#4A463D", /* green   */
    [3] = "#7A6C56", /* yellow  */
    [4] = "#8B9494", /* blue    */
    [5] = "#B3B8B5", /* magenta */
    [6] = "#8B9494", /* cyan    */
    [7] = "#B3B8B5", /* white   */

    /* 8 bright colors */
    [8]  = "#4A463D", /* black   */
    [9]  = "#7A6C56", /* red     */
    [10] = "#4A463D", /* green   */
    [11] = "#7A6C56", /* yellow  */
    [12] = "#8B9494", /* blue    */
    [13] = "#B3B8B5", /* magenta */
    [14] = "#8B9494", /* cyan    */
    [15] = "#B3B8B5", /* white   */

    /* special colors */
    [256] = "#0F0F16", /* background */
    [257] = "#B3B8B5", /* foreground */
};

unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;
