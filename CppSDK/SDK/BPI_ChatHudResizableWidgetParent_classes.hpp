#pragma once

 

// Package: BPI_ChatHudResizableWidgetParent

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_ChatHudResizableWidgetParent.BPI_ChatHudResizableWidgetParent_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_ChatHudResizableWidgetParent_C final : public IInterface
{
public:
	void SetWindowSize(const struct FVector2D& InSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_ChatHudResizableWidgetParent_C">();
	}
	static class IBPI_ChatHudResizableWidgetParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_ChatHudResizableWidgetParent_C>();
	}
};
static_assert(alignof(IBPI_ChatHudResizableWidgetParent_C) == 0x000008, "Wrong alignment on IBPI_ChatHudResizableWidgetParent_C");
static_assert(sizeof(IBPI_ChatHudResizableWidgetParent_C) == 0x000028, "Wrong size on IBPI_ChatHudResizableWidgetParent_C");

}

