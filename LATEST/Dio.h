#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Dio.h"

class class_Dio{
   public:
      FUNC(void, DIO_CODE) InitFunction      (void);
      FUNC(void, DIO_CODE) ReadChannel       (void);
      FUNC(void, DIO_CODE) WriteChannel      (void);
      FUNC(void, DIO_CODE) ReadPort          (void);
      FUNC(void, DIO_CODE) WritePort         (void);
      FUNC(void, DIO_CODE) ReadChannelGroup  (void);
      FUNC(void, DIO_CODE) WriteChannelGroup (void);
      FUNC(void, DIO_CODE) GetVersionInfo    (void);
      FUNC(void, DIO_CODE) FlipChannel       (void);
};

extern class_Dio Dio;

