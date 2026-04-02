#include <stdint.h>
 #include <stdlib.h>
 #include "json.h"

 int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
     if (size == 0)
         return 0;

     json_settings settings = { 0 };
     char error[json_error_max];
     json_value *result = json_parse_ex(&settings, (const json_char *)data, size, error);

     if (result)
         json_value_free(result);

     return 0;
 }