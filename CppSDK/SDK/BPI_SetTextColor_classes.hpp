#pragma once

 

// Package: BPI_SetTextColor

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_SetTextColor.BPI_SetTextColor_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_SetTextColor_C final : public IInterface
{
public:
	void SetTextColor(const struct FLinearColor& Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_SetTextColor_C">();
	}
	static class IBPI_SetTextColor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_SetTextColor_C>();
	}
};
static_assert(alignof(IBPI_SetTextColor_C) == 0x000008, "Wrong alignment on IBPI_SetTextColor_C");
static_assert(sizeof(IBPI_SetTextColor_C) == 0x000028, "Wrong size on IBPI_SetTextColor_C");

}

