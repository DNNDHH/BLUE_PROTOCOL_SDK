#pragma once

 

// Package: EquipLevelView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipLevelView.EquipLevelView_C
// 0x0010 (0x0288 - 0x0278)
class UEquipLevelView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    TextLevelValue;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EquipLevelView(int32 EntryPoint);
	void SetOwnItemData(const struct FOwnItemInfo& ItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipLevelView_C">();
	}
	static class UEquipLevelView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipLevelView_C>();
	}
};
static_assert(alignof(UEquipLevelView_C) == 0x000008, "Wrong alignment on UEquipLevelView_C");
static_assert(sizeof(UEquipLevelView_C) == 0x000288, "Wrong size on UEquipLevelView_C");
static_assert(offsetof(UEquipLevelView_C, UberGraphFrame) == 0x000278, "Member 'UEquipLevelView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEquipLevelView_C, TextLevelValue) == 0x000280, "Member 'UEquipLevelView_C::TextLevelValue' has a wrong offset!");

}

