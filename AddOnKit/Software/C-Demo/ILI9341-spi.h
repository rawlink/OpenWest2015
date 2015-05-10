//
// automatically generated by spin2cpp v1.92 on Sat May 09 00:01:24 2015
// C:\Users\Float\Downloads\spin2cpp_v1.92\spin2cpp.exe C:\Users\Float\Downloads\OpenWest2015-master\OpenWest2015-master\AddOnKit\Software\LCD Driver\ILI9341-test.spin 
//

#ifndef ILI9341_spi_Class_Defined__
#define ILI9341_spi_Class_Defined__

#include <stdint.h>

class ILI9341_spi {
public:
  static const int CMD_SETUP = 1;
  static const int CMD_SETCOLOURS = 2;
  static const int CMD_RECT = 4;
  static const int CMD_CLEAR = 5;
  static const int CMD_LINE = 6;
  static const int CMD_STRING = 7;
  static const int CMD_CHAR = 8;
  static const int CMD_DOT = 9;
  static uint8_t dat[];
  int32_t	Stop(void);
  int32_t	Start(int32_t nRES, int32_t nCS, int32_t RS, int32_t MOSI, int32_t SCLK);
  int32_t	Synch(void);
  int32_t	ClearScreen(void);
  int32_t	DrawDot(int32_t xl, int32_t yt);
  int32_t	DrawLine(int32_t xl, int32_t yt, int32_t xr, int32_t yb);
  int32_t	DrawChar(int32_t xl, int32_t yt, int32_t chr);
  int32_t	DrawCharSmall(int32_t xl, int32_t yt, int32_t chr);
  int32_t	DrawString(int32_t xl, int32_t yt, int32_t str);
  int32_t	DrawStringSmall(int32_t xl, int32_t yt, int32_t str);
  int32_t	DrawRect(int32_t xl, int32_t yt, int32_t xr, int32_t yb);
  int32_t	SetColours(int32_t fore, int32_t back);
private:
  volatile int32_t	cog;
  volatile int32_t	cmd;
  volatile int32_t	arg0;
  volatile int32_t	arg1;
  volatile int32_t	guard;
};

#endif