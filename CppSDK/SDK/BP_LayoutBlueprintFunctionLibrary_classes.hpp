#pragma once

 

// Package: BP_LayoutBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_LayoutBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void ApplyLayout(const class FString& Key, class UUserWidget*& Widget, class UObject* __WorldContext);
	static void ApplyClassHUD(class UUserWidget* Widget, const class FString& Param_Name, class UObject* __WorldContext);
	static void RemoveLayoutFromHUD(const class FString& Param_Name, class UObject* __WorldContext, bool* IsRegisted);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LayoutBlueprintFunctionLibrary_C">();
	}
	static class UBP_LayoutBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LayoutBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_LayoutBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_LayoutBlueprintFunctionLibrary_C");
static_assert(sizeof(UBP_LayoutBlueprintFunctionLibrary_C) == 0x000028, "Wrong size on UBP_LayoutBlueprintFunctionLibrary_C");

}

