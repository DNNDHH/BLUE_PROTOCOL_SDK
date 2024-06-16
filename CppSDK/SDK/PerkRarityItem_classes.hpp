#pragma once

 

// Package: PerkRarityItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PerkRarityItem.PerkRarityItem_C
// 0x0028 (0x02A0 - 0x0278)
class UPerkRarityItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_Question;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_StarEmpty;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_StarFilled;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Swt_Starts;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PerkRarityItem(int32 EntryPoint);
	void Show_Question();
	void Show_Filled();
	void Show_Empty();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PerkRarityItem_C">();
	}
	static class UPerkRarityItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerkRarityItem_C>();
	}
};
static_assert(alignof(UPerkRarityItem_C) == 0x000008, "Wrong alignment on UPerkRarityItem_C");
static_assert(sizeof(UPerkRarityItem_C) == 0x0002A0, "Wrong size on UPerkRarityItem_C");
static_assert(offsetof(UPerkRarityItem_C, UberGraphFrame) == 0x000278, "Member 'UPerkRarityItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPerkRarityItem_C, Img_Question) == 0x000280, "Member 'UPerkRarityItem_C::Img_Question' has a wrong offset!");
static_assert(offsetof(UPerkRarityItem_C, Img_StarEmpty) == 0x000288, "Member 'UPerkRarityItem_C::Img_StarEmpty' has a wrong offset!");
static_assert(offsetof(UPerkRarityItem_C, Img_StarFilled) == 0x000290, "Member 'UPerkRarityItem_C::Img_StarFilled' has a wrong offset!");
static_assert(offsetof(UPerkRarityItem_C, Swt_Starts) == 0x000298, "Member 'UPerkRarityItem_C::Swt_Starts' has a wrong offset!");

}

