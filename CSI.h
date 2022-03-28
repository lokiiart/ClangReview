#define  CSI   "\033["

#define CUU(n)        CSI#n"A" //Cursor Up
#define CUD(n)        CSI#n"B" //Cursor Down
#define CUF(n)        CSI#n"C" //Cursor Forward
#define CUB(n)        CSI#n"D" //Cursor Back
#define CNL(n)        CSI#n"E" //Cursor Next Line
#define CPL(n)        CSI#n"F" //Cursor Previous Line
#define CHA(n)        CSI#n"G" //Cursor Horizontal Absolute
#define CUP(n,m) CSI#n";"#m"H" //Cursor Position
#define ED(n)         CSI#n"J" //Erase in Display(n=0,1,2,3)
#define EL(n)         CSI#n"K" //Erase in Line(n=0,1,2)
#define SU(n)         CSI#n"S" //Scroll Up
#define SD(n)         CSI#n"T" //Scroll Down
#define HVP(n,m) CSI#n";"#m"f" //Horizontal Vertical Position
#define DSR            CSI"6n" //Device Status Report


#define RESET  CSI"m"

#define              BOLD              CSI"1m"
#define             FAINT              CSI"2m"
#define             ITALIC             CSI"3m"
#define           UNDERLINE            CSI"4m"
#define           SLOW_BLINK           CSI"5m"
#define          RAPID_BLINK           CSI"6m"
#define            REVERSE             CSI"7m"
#define            CONCEAL             CSI"8m"
#define             STRIKE             CSI"9m"
#define          PRIMARY_FONT          CSI"10m"
//11-19 alternative font
#define            FRAKTUR             CSI"20m"
#define            NOT_BOLD            CSI"21m"
#define        NORMAL_INTENSITY        CSI"22m"
#define NEITHER_ITALIC_NOR_BLACKLETTER CSI"23m"
#define         NOT_UNDERLINED         CSI"24m"
#define          NOT_BLINKING          CSI"25m"
#define      PROPORTIONAL_SPACING      CSI"26m"
#define          NOT_REVERSED          CSI"27m"
#define             REVEAL             CSI"28m"
#define           NOT_STRIKE           CSI"29m"

#define   BLACK_FG CSI"30m"
#define     RED_FG CSI"31m"
#define   GREEN_FG CSI"32m"
#define  YELLOW_FG CSI"33m"
#define    BLUE_FG CSI"34m"
#define    PINK_FG CSI"35m"
#define    CYAN_FG CSI"36m"
#define   WHITE_FG CSI"37m"
#define     RGB_FG CSI"38m"  //temporarily no sence
#define DEFAULT_FG CSI"39m"
#define   BLACK_BG CSI"40m"
#define     RED_BG CSI"41m"
#define   GREEN_BG CSI"42m"
#define  YELLOW_BG CSI"43m"
#define    BLUE_BG CSI"44m"
#define    PINK_BG CSI"45m"
#define    CYAN_BG CSI"46m"
#define   WHITE_BG CSI"47m"
#define     RGB_BG CSI"48m" //temporarily no sence
#define DEFAULT_BG CSI"49m"

#define   DISABLE_PROPORTIONAL_SPACING    CSI"50m" // ^26
#define              FRAMED               CSI"51m"
#define             ENCIRCLED             CSI"52m"
#define             OVERLINED             CSI"53m"
#define   NEITHER_FRAMED_NOR_ENCIRCLED    CSI"54m" // ^51 && ^52
#define           NOT_OVERLINED           CSI"55m" //^53
//56 NO definition
//57 no definition
#define          UNDERLINE_COLOR          CSI"58m"
#define      DEFAULT_UNDERLINE_COLOR      CSI"59m"
#define        IDEOGRAM_UNDERLINE         CSI"60m"
#define     IDEOGRAM_DOUBLE_UNDERLINE     CSI"61m"
#define         IDEOGRAM_OVERLINE         CSI"62m"
#define     IDEOGRAM_DOUBLE_OVERLINE      CSI"63m"
#define      IDEOGRAM_STRESS_MARKING      CSI"64m"
#define      NO_IDEOGRAM_ATTRIBUTES       CSI"65m"
//66-72 no definition counts 7
#define            SUPERSCRIPT            CSI"73m"
#define             SUBSCRIPT             CSI"74m"
#define NEITHER_SUPERSCRIPT_NOR_SUBSCRIPT CSI"75m"
//76-89 no definition counts 14

#define  LIGHTBLACK_FG CSI"90m"
#define    LIGHTRED_FG CSI"91m"
#define  LIGHTGREEN_FG CSI"92m"
#define LIGHTYELLOW_FG CSI"93m"
#define   LIGHTBLUE_FG CSI"94m"
#define   LIGHTPINK_FG CSI"95m"
#define   LIGHTCYAN_FG CSI"96m"
#define  LIGHTWHITE_FG CSI"97m"
#define  LIGHTBLACK_BG CSI"100m"
#define    LIGHTRED_BG CSI"101m"
#define  LIGHTGREEN_BG CSI"102m"
#define LIGHTYELLOW_BG CSI"103m"
#define   LIGHTBLUE_BG CSI"104m"
#define   LIGHTPINK_BG CSI"105m"
#define   LIGHTCYAN_BG CSI"106m"
#define  LIGHTWHITE_BG CSI"107m" 
