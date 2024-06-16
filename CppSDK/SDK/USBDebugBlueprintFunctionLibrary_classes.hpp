#pragma once

 

// Package: USBDebugBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UUSBDebugBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void ApplyDebugUIVisibilitySetting(class UObject* __WorldContext);
	static void Debug_SetBattleHUDVisibility(bool bVisibility, class UObject* __WorldContext);
	static void Debug_SetUIVisibility(ESBUIType InUIType, bool bVisibility, class UObject* __WorldContext);
	static void OnChangedDebugValue(ESBDebugMenuType MenuType, class FName RowName, class UObject* __WorldContext);
	static void OnChangedUIDebugValue(ESBDebugMenuType MenuType, class FName RowName, class UObject* __WorldContext);
	static void OnChangedCameraDebugValue(ESBDebugMenuType MenuType, class FName RowName, class UObject* __WorldContext);
	static void OnChangedEffectDebugValue(ESBDebugMenuType MenuType, class FName RowName, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"USBDebugBlueprintFunctionLibrary_C">();
	}
	static class UUSBDebugBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUSBDebugBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UUSBDebugBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UUSBDebugBlueprintFunctionLibrary_C");
static_assert(sizeof(UUSBDebugBlueprintFunctionLibrary_C) == 0x000028, "Wrong size on UUSBDebugBlueprintFunctionLibrary_C");

}

