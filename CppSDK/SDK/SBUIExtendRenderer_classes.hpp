#pragma once

 

// Package: SBUIExtendRenderer

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USBUIExtendRendererBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddToViewportPrePostProcess(class UUserWidget* UserWidget, const int32 Priority);
	static void RemoveFromParentPrePostProcess(class UUserWidget* UserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SBUIExtendRendererBlueprintFunctionLibrary">();
	}
	static class USBUIExtendRendererBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBUIExtendRendererBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(USBUIExtendRendererBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on USBUIExtendRendererBlueprintFunctionLibrary");
static_assert(sizeof(USBUIExtendRendererBlueprintFunctionLibrary) == 0x000028, "Wrong size on USBUIExtendRendererBlueprintFunctionLibrary");

// Class SBUIExtendRenderer.SBUIExtendRendererSubsystem
// 0x0020 (0x0050 - 0x0030)
class USBUIExtendRendererSubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_1D06[0x20];                                    // 0x0030(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddToViewportPrePostProcess(class UUserWidget* UserWidget, const int32 Priority);
	void RemoveFromParentPrePostProcess(class UUserWidget* UserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SBUIExtendRendererSubsystem">();
	}
	static class USBUIExtendRendererSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBUIExtendRendererSubsystem>();
	}
};
static_assert(alignof(USBUIExtendRendererSubsystem) == 0x000008, "Wrong alignment on USBUIExtendRendererSubsystem");
static_assert(sizeof(USBUIExtendRendererSubsystem) == 0x000050, "Wrong size on USBUIExtendRendererSubsystem");

}

