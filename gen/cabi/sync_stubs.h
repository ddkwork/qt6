#pragma once
#include "miqt_export.h"

typedef struct QWidget QWidget;

#ifdef __cplusplus
extern "C" {
#endif

MIQT_EXPORT void MIQT_CALL QWidget_setContextMenuPolicy(QWidget* self, unsigned int policy);

#ifdef __cplusplus
}
#endif
