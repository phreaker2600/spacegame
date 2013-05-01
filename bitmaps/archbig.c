/* GIMP C-Source image dump */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 3:RGB, 4:RGBA */
  unsigned char	 pixel_data[20 * 20 * 4];
} gimp_image = {
  20, 20, 4, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x74, 0x6F, 0x13, 0xFF, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x14, 0x12, 0x12, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0xCC, 0x09, 0x20, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x12, 0x12, 0x7F, 0x14, 0x12, 0x12, 0x7F, 
  0x14, 0x12, 0x12, 0x7F, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0xCC, 0x09, 0x20, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0xCC, 0x09, 0x20, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0xCC, 0x09, 0x20, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x00, 0x92, 0xD1, 0xFF, 0x00, 0x92, 0xD1, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0x14, 0x13, 0x13, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0x14, 0x13, 0x13, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0x14, 0x13, 0x13, 0xFF, 0xCC, 0x09, 0x20, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0x14, 0x13, 0x13, 0xFF, 
  0xCC, 0x09, 0x20, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0xB5, 0xA9, 0x18, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 0x74, 0x6F, 0x13, 0xFF, 
  0x74, 0x6F, 0x13, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xB5, 0xA9, 0x18, 0xFF, 
  0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 0xFF, 0xF1, 0x0B, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0x00
};