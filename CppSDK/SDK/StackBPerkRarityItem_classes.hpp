#pragma once

 

// Package: StackBPerkRarityItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBPerkRarityItem.StackBPerkRarityItem_C
// 0x0020 (0x0298 - 0x0278)
class UStackBPerkRarityItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_StarEmpty;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_StarFilled;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Swt_Starts;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StackBPerkRarityItem(int32 EntryPoint);
	void Show_Filled();
	void Show_Empty();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBPerkRarityItem_C">();
	}
	static class UStackBPerkRarityItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBPerkRarityItem_C>();
	}
};
static_assert(alignof(UStackBPerkRarityItem_C) == 0x000008, "Wrong alignment on UStackBPerkRarityItem_C");
static_assert(sizeof(UStackBPerkRarityItem_C) == 0x000298, "Wrong size on UStackBPerkRarityItem_C");
static_assert(offsetof(UStackBPerkRarityItem_C, UberGraphFrame) == 0x000278, "Member 'UStackBPerkRarityItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackBPerkRarityItem_C, Img_StarEmpty) == 0x000280, "Member 'UStackBPerkRarityItem_C::Img_StarEmpty' has a wrong offset!");
static_assert(offsetof(UStackBPerkRarityItem_C, Img_StarFilled) == 0x000288, "Member 'UStackBPerkRarityItem_C::Img_StarFilled' has a wrong offset!");
static_assert(offsetof(UStackBPerkRarityItem_C, Swt_Starts) == 0x000290, "Member 'UStackBPerkRarityItem_C::Swt_Starts' has a wrong offset!");

}

