#pragma once

 

// Package: ImagineActiveResult

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineActiveResult.ImagineActiveResult_C
// 0x0130 (0x03A8 - 0x0278)
class UImagineActiveResult_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBattleImagineUniqueStatusSets_C* CommonBattleImagineUniqueStatusSets;               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentStatusDescWithImageView_C* CommonEquipmentStatusDescWithImageView;            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           OnwItem;                                           // 0x0290(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ImagineActiveResult(int32 EntryPoint);
	void Set_ItemData(const struct FOwnItemInfo& Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineActiveResult_C">();
	}
	static class UImagineActiveResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineActiveResult_C>();
	}
};
static_assert(alignof(UImagineActiveResult_C) == 0x000008, "Wrong alignment on UImagineActiveResult_C");
static_assert(sizeof(UImagineActiveResult_C) == 0x0003A8, "Wrong size on UImagineActiveResult_C");
static_assert(offsetof(UImagineActiveResult_C, UberGraphFrame) == 0x000278, "Member 'UImagineActiveResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineActiveResult_C, CommonBattleImagineUniqueStatusSets) == 0x000280, "Member 'UImagineActiveResult_C::CommonBattleImagineUniqueStatusSets' has a wrong offset!");
static_assert(offsetof(UImagineActiveResult_C, CommonEquipmentStatusDescWithImageView) == 0x000288, "Member 'UImagineActiveResult_C::CommonEquipmentStatusDescWithImageView' has a wrong offset!");
static_assert(offsetof(UImagineActiveResult_C, OnwItem) == 0x000290, "Member 'UImagineActiveResult_C::OnwItem' has a wrong offset!");

}

