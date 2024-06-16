#pragma once

 

// Package: BPI_CommandMenuChildrenSwitcher

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CommandMenuChildrenSwitcher_C final : public IInterface
{
public:
	void SwitchIn(const class FString& OpenBookMarkType, class FName ParamName);
	void SwitchOut();
	void TermRequesTiming();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CommandMenuChildrenSwitcher_C">();
	}
	static class IBPI_CommandMenuChildrenSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CommandMenuChildrenSwitcher_C>();
	}
};
static_assert(alignof(IBPI_CommandMenuChildrenSwitcher_C) == 0x000008, "Wrong alignment on IBPI_CommandMenuChildrenSwitcher_C");
static_assert(sizeof(IBPI_CommandMenuChildrenSwitcher_C) == 0x000028, "Wrong size on IBPI_CommandMenuChildrenSwitcher_C");

}

