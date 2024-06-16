#pragma once

 

// Package: BPI_PlayerController

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_PlayerController.BPI_PlayerController_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_PlayerController_C final : public IInterface
{
public:
	void SetDebugMenu(class UDebugMenu_C* DebugMenu);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_PlayerController_C">();
	}
	static class IBPI_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_PlayerController_C>();
	}
};
static_assert(alignof(IBPI_PlayerController_C) == 0x000008, "Wrong alignment on IBPI_PlayerController_C");
static_assert(sizeof(IBPI_PlayerController_C) == 0x000028, "Wrong size on IBPI_PlayerController_C");

}

