#pragma once

 

// Package: ImaginePassiveResult

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImaginePassiveResult.ImaginePassiveResult_C
// 0x0128 (0x03A0 - 0x0278)
class UImaginePassiveResult_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonEquipmentStatusDescWithImageView_C* CommonEquipmentStatusDescWithImageView;            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           OnwItem;                                           // 0x0288(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ImaginePassiveResult(int32 EntryPoint);
	void Set_ItemData(const struct FOwnItemInfo& Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImaginePassiveResult_C">();
	}
	static class UImaginePassiveResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImaginePassiveResult_C>();
	}
};
static_assert(alignof(UImaginePassiveResult_C) == 0x000008, "Wrong alignment on UImaginePassiveResult_C");
static_assert(sizeof(UImaginePassiveResult_C) == 0x0003A0, "Wrong size on UImaginePassiveResult_C");
static_assert(offsetof(UImaginePassiveResult_C, UberGraphFrame) == 0x000278, "Member 'UImaginePassiveResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImaginePassiveResult_C, CommonEquipmentStatusDescWithImageView) == 0x000280, "Member 'UImaginePassiveResult_C::CommonEquipmentStatusDescWithImageView' has a wrong offset!");
static_assert(offsetof(UImaginePassiveResult_C, OnwItem) == 0x000288, "Member 'UImaginePassiveResult_C::OnwItem' has a wrong offset!");

}

