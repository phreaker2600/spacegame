/* GIMP C-Source image dump */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 3:RGB, 4:RGBA */
  unsigned char	 pixel_data[20 * 20 * 3];
} gimp_image = {
  20, 20, 3, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x01, 0x8E, 0x29, 0x00, 0xF8, 0x4F, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x00, 0xF8, 0x4F, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x00, 0xF7, 0x4E, 
  0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 0x01, 0x8E, 0x29, 
  0x01, 0x8E, 0x29, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0xB3, 0xAF, 0x37, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0xB3, 0xAF, 0x37, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xFE, 0xF9, 0x53, 0xB3, 0xAF, 0x37, 
  0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 
  0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xB3, 0xAF, 0x37, 0xFE, 0xF8, 0x53, 
  0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 
  0xFE, 0xF8, 0x53, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0x93, 0x90, 0x2C, 
  0xFE, 0xF8, 0x53, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0x93, 0x90, 0x2C, 
  0xFE, 0xF8, 0x53, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 
  0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0xB3, 0xAF, 0x37, 0x93, 0x90, 0x2C, 
  0xFE, 0xF8, 0x53, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0xB3, 0xAF, 0x37, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0xB3, 0xAF, 0x37, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 0x93, 0x90, 0x2C, 
  0xFE, 0xF8, 0x53, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 
  0x00, 0xF8, 0x4F, 0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 
  0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0x00, 0xF8, 0x4F, 0xFE, 0xF8, 0x53, 
  0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 0xFE, 0xF8, 0x53, 
  0xFE, 0xF8, 0x53, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF7, 0x4E, 0x00, 0xF7, 0x4E
};
