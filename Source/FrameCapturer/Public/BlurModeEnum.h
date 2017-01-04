#pragma once

#include "BlurModeEnum.generated.h"

#define ExperimentalGPUBlur 0
UENUM()
enum class EFrameCapturerUserWidgetBlurMode : uint8
{
	StackBlur_CPU,
#if ExperimentalGPUBlur
	GaussianBlur_GPU,
#endif
};
