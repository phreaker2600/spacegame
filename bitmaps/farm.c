/* GIMP C-Source image dump */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 3:RGB, 4:RGBA */
  unsigned char	 pixel_data[20 * 20 * 3];
} gimp_image = {
  20, 20, 3, 
  0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 
  0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 
  0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 
  0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 
  0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 0x1A, 0x71, 0x00, 
  0x1A, 0x71, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 
  0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 
  0xA5, 0x9D, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 
  0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 
  0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 
  0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 
  0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x61, 0x5E, 0x00, 0x3D, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x61, 0x5E, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x61, 0x5E, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x61, 0x5E, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x61, 0x5E, 0x00, 0x3D, 0xFF, 0x00, 0x61, 0x5E, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 
  0x61, 0x5E, 0x00, 0x61, 0x5E, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x61, 0x5E, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0x61, 0x5E, 0x00, 0x3D, 0xFF, 0x00, 
  0x3D, 0xFF, 0x00, 0x3D, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 
  0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 
  0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 
  0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 
  0xA5, 0x9D, 0x00, 0xA5, 0x9D, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00, 
  0x1A, 0x71, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 
  0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 
  0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 
  0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 
  0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0xFE, 0xF4, 0x00, 0x3D, 0xFF, 0x00
};