#ifndef RGB444_H
#define RGB444_H

#include <fstream>
#include "Image.h"
//#include "BMP.h"

class RGB444 : public Image
{
private:
  uint8_t algorithm;

protected:
  SDL_Surface *loadImpl(const char *);
  void saveImpl(SDL_Surface *, const char *);
  void writeHeader(std::ofstream &, unsigned int &, unsigned int &, uint8_t &, uint8_t &);
  void readHeader(std::ifstream &, unsigned int &, unsigned int &, uint8_t &, uint8_t &);

public:
  RGB444();
  RGB444(uint8_t);
  RGB444(SDL_Surface *);
  RGB444(const char *);
  //RGB44(BMP *);
  const char *extension() const;
};

#endif // !RGB444_H