#pragma once

 

// Package: GashaMenu_ProductListRateLine2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GashaMenu_ProductListRateLine2.GashaMenu_ProductListRateLine2_C
// 0x0028 (0x02A0 - 0x0278)
class UGashaMenu_ProductListRateLine2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        SwitchText;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchText2;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsConfirm;                                         // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_94E8[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Type;                                              // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GashaMenu_ProductListRateLine2(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GashaMenu_ProductListRateLine2_C">();
	}
	static class UGashaMenu_ProductListRateLine2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGashaMenu_ProductListRateLine2_C>();
	}
};
static_assert(alignof(UGashaMenu_ProductListRateLine2_C) == 0x000008, "Wrong alignment on UGashaMenu_ProductListRateLine2_C");
static_assert(sizeof(UGashaMenu_ProductListRateLine2_C) == 0x0002A0, "Wrong size on UGashaMenu_ProductListRateLine2_C");
static_assert(offsetof(UGashaMenu_ProductListRateLine2_C, UberGraphFrame) == 0x000278, "Member 'UGashaMenu_ProductListRateLine2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGashaMenu_ProductListRateLine2_C, SwitchText) == 0x000280, "Member 'UGashaMenu_ProductListRateLine2_C::SwitchText' has a wrong offset!");
static_assert(offsetof(UGashaMenu_ProductListRateLine2_C, SwitchText2) == 0x000288, "Member 'UGashaMenu_ProductListRateLine2_C::SwitchText2' has a wrong offset!");
static_assert(offsetof(UGashaMenu_ProductListRateLine2_C, SwitchType) == 0x000290, "Member 'UGashaMenu_ProductListRateLine2_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UGashaMenu_ProductListRateLine2_C, IsConfirm) == 0x000298, "Member 'UGashaMenu_ProductListRateLine2_C::IsConfirm' has a wrong offset!");
static_assert(offsetof(UGashaMenu_ProductListRateLine2_C, Type) == 0x00029C, "Member 'UGashaMenu_ProductListRateLine2_C::Type' has a wrong offset!");

}

