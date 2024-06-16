#pragma once

 

// Package: GashaMenu_ProductListRateLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GashaMenu_ProductListRateLine.GashaMenu_ProductListRateLine_C
// 0x0020 (0x0298 - 0x0278)
class UGashaMenu_ProductListRateLine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        Switch_BG;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchRarity;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Rarity;                                            // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsConfirm;                                         // 0x0294(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_GashaMenu_ProductListRateLine(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GashaMenu_ProductListRateLine_C">();
	}
	static class UGashaMenu_ProductListRateLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGashaMenu_ProductListRateLine_C>();
	}
};
static_assert(alignof(UGashaMenu_ProductListRateLine_C) == 0x000008, "Wrong alignment on UGashaMenu_ProductListRateLine_C");
static_assert(sizeof(UGashaMenu_ProductListRateLine_C) == 0x000298, "Wrong size on UGashaMenu_ProductListRateLine_C");
static_assert(offsetof(UGashaMenu_ProductListRateLine_C, UberGraphFrame) == 0x000278, "Member 'UGashaMenu_ProductListRateLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGashaMenu_ProductListRateLine_C, Switch_BG) == 0x000280, "Member 'UGashaMenu_ProductListRateLine_C::Switch_BG' has a wrong offset!");
static_assert(offsetof(UGashaMenu_ProductListRateLine_C, SwitchRarity) == 0x000288, "Member 'UGashaMenu_ProductListRateLine_C::SwitchRarity' has a wrong offset!");
static_assert(offsetof(UGashaMenu_ProductListRateLine_C, Rarity) == 0x000290, "Member 'UGashaMenu_ProductListRateLine_C::Rarity' has a wrong offset!");
static_assert(offsetof(UGashaMenu_ProductListRateLine_C, IsConfirm) == 0x000294, "Member 'UGashaMenu_ProductListRateLine_C::IsConfirm' has a wrong offset!");

}

