/* GIMP C-Source image dump */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 3:RGB, 4:RGBA */
  unsigned char	 pixel_data[20 * 20 * 3];
} gimp_image = {
  20, 20, 3, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x54, 0x8F, 0x42, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0x7A, 0x46, 0x87, 0x80, 0x2F, 0x87, 0x80, 0x2F, 0x87, 0x80, 0x2F, 
  0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x00, 0x7A, 0x46, 
  0x54, 0x8F, 0x42, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x87, 0x80, 0x2F, 0x87, 0x80, 0x2F, 0x87, 0x80, 0x2F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x54, 0x8F, 0x42, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x54, 0x8F, 0x42, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46, 
  0x00, 0x7A, 0x46, 0x00, 0x7A, 0x46, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 0x54, 0x8F, 0x42, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 
  0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0xF8, 0x4F, 0x00, 0x7A, 0x46
};