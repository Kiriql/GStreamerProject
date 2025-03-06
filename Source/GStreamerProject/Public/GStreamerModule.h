#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GStreamerModule.generated.h"

UCLASS()
class GSTREAMERPROJECT_API UGStreamerModule : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void StartupModule();
	virtual void ShutdownModule();
};
