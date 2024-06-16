#pragma once

 

// Package: MyCharaMenu_EffectListItemHead

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C
// 0x0020 (0x0298 - 0x0278)
class UMyCharaMenu_EffectListItemHead_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_51;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Head;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyCharaMenu_EffectListItemHead(int32 EntryPoint);
	void SetPioneerAbility();
	void Set_Other();
	void Set_LiquidMemory();
	void Set_Ability();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_EffectListItemHead_C">();
	}
	static class UMyCharaMenu_EffectListItemHead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_EffectListItemHead_C>();
	}
};
static_assert(alignof(UMyCharaMenu_EffectListItemHead_C) == 0x000008, "Wrong alignment on UMyCharaMenu_EffectListItemHead_C");
static_assert(sizeof(UMyCharaMenu_EffectListItemHead_C) == 0x000298, "Wrong size on UMyCharaMenu_EffectListItemHead_C");
static_assert(offsetof(UMyCharaMenu_EffectListItemHead_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_EffectListItemHead_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectListItemHead_C, Image_51) == 0x000280, "Member 'UMyCharaMenu_EffectListItemHead_C::Image_51' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectListItemHead_C, SwitchIcon) == 0x000288, "Member 'UMyCharaMenu_EffectListItemHead_C::SwitchIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectListItemHead_C, Txt_Head) == 0x000290, "Member 'UMyCharaMenu_EffectListItemHead_C::Txt_Head' has a wrong offset!");

}

