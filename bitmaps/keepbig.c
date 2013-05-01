/* GIMP C-Source image dump */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 3:RGB, 4:RGBA */
  unsigned char	 pixel_data[20 * 20 * 4];
} gimp_image = {
  20, 20, 4, 
  0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0x35, 0x34, 0x06, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0x61, 0x5E, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0x53, 0x4F, 0x00, 0xFF, 0x35, 0x34, 0x06, 0xFF, 
  0x61, 0x5E, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x53, 0x4F, 0x00, 0xFF, 
  0x53, 0x4F, 0x00, 0xFF, 0x7A, 0x74, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0x53, 0x4F, 0x00, 0xFF, 0x53, 0x4F, 0x00, 0xFF, 
  0x10, 0x10, 0x10, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x53, 0x4F, 0x00, 0xFF, 
  0x53, 0x4F, 0x00, 0xFF, 0x53, 0x4F, 0x00, 0xFF, 0x10, 0x10, 0x10, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0x53, 0x4F, 0x00, 0xFF, 0x7A, 0x74, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0x7A, 0x74, 0x00, 0xFF, 0x7A, 0x74, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0xFE, 0xF4, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0x61, 0x5E, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0xFE, 0xF4, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0xFE, 0xF4, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0x61, 0x5E, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0x61, 0x5E, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0xFE, 0xF4, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 
  0xB9, 0x00, 0x15, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0x10, 0x10, 0x10, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0x10, 0x0E, 0x0E, 0x7F, 0xFE, 0xF4, 0x00, 0xFF, 
  0xB9, 0x00, 0x15, 0xFF, 0xB9, 0x00, 0x15, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0x10, 0x10, 0x10, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0x61, 0x5E, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 
  0x10, 0x0E, 0x0E, 0x7F, 0xFE, 0xF4, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xB9, 0x00, 0x15, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x10, 0x10, 0x10, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x10, 0x0E, 0x0E, 0x7F, 
  0x61, 0x5E, 0x00, 0xFF, 0xB9, 0x00, 0x15, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xB9, 0x00, 0x15, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0x10, 0x10, 0x10, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xB9, 0x00, 0x15, 0xFF, 0xB9, 0x00, 0x15, 0xFF, 
  0xB9, 0x00, 0x15, 0xFF, 0xB9, 0x00, 0x15, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0x10, 0x10, 0x10, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 0xA5, 0x9D, 0x00, 0xFF, 
  0x61, 0x5E, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0x61, 0x5E, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0xB9, 0x00, 0x15, 0xFF, 
  0xB9, 0x00, 0x15, 0xFF, 0xB9, 0x00, 0x15, 0xFF, 0x10, 0x10, 0x10, 0xFF, 
  0x61, 0x5E, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0x61, 0x5E, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 0x61, 0x5E, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0xFF, 
  0xB9, 0x00, 0x15, 0xFF, 0x10, 0x10, 0x10, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 0xFE, 0xF4, 0x00, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00
};
