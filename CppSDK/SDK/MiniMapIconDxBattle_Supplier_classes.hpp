#pragma once

 

// Package: MiniMapIconDxBattle_Supplier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C
// 0x0008 (0x0298 - 0x0290)
class UMiniMapIconDxBattle_Supplier_C final : public USBMiniMapIconBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_MiniMapIconDxBattle_Supplier(int32 EntryPoint);
	void _________0();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconDxBattle_Supplier_C">();
	}
	static class UMiniMapIconDxBattle_Supplier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconDxBattle_Supplier_C>();
	}
};
static_assert(alignof(UMiniMapIconDxBattle_Supplier_C) == 0x000008, "Wrong alignment on UMiniMapIconDxBattle_Supplier_C");
static_assert(sizeof(UMiniMapIconDxBattle_Supplier_C) == 0x000298, "Wrong size on UMiniMapIconDxBattle_Supplier_C");
static_assert(offsetof(UMiniMapIconDxBattle_Supplier_C, UberGraphFrame) == 0x000290, "Member 'UMiniMapIconDxBattle_Supplier_C::UberGraphFrame' has a wrong offset!");

}

