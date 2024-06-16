#pragma once

 

// Package: BuffIconFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BuffIconFunctionLibrary.BuffIconFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBuffIconFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void FindIconAssetData(ESBStatusAilmentIconType IconType, bool bLarge, class UObject* __WorldContext, class UTexture2D** Texture, bool* IsFind, class FName* TextId, bool* bBuff, ESBStatusAilmentPlateType* Type);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuffIconFunctionLibrary_C">();
	}
	static class UBuffIconFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuffIconFunctionLibrary_C>();
	}
};
static_assert(alignof(UBuffIconFunctionLibrary_C) == 0x000008, "Wrong alignment on UBuffIconFunctionLibrary_C");
static_assert(sizeof(UBuffIconFunctionLibrary_C) == 0x000028, "Wrong size on UBuffIconFunctionLibrary_C");

}

