#pragma once

 

// Package: MyCharaMenu_EffectDetailsList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C
// 0x0048 (0x02F8 - 0x02B0)
class UMyCharaMenu_EffectDetailsList_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                BtnScreen;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             SBox_Details;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 WeaponUniqueID;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyCharaMenu_EffectDetailsList(int32 EntryPoint);
	void BndEvt__MyCharaMenu_EffectDetailsList_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void OnPress_Cancel();
	void BndEvt__BtnFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void ShowWindow();
	void HideWindow();
	void Setup();
	void AddEffectDetailItemToList(const class FText& InEffectNameText, const class FText& InEffectDescText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_EffectDetailsList_C">();
	}
	static class UMyCharaMenu_EffectDetailsList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_EffectDetailsList_C>();
	}
};
static_assert(alignof(UMyCharaMenu_EffectDetailsList_C) == 0x000008, "Wrong alignment on UMyCharaMenu_EffectDetailsList_C");
static_assert(sizeof(UMyCharaMenu_EffectDetailsList_C) == 0x0002F8, "Wrong size on UMyCharaMenu_EffectDetailsList_C");
static_assert(offsetof(UMyCharaMenu_EffectDetailsList_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_EffectDetailsList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectDetailsList_C, AnimOut) == 0x0002B8, "Member 'UMyCharaMenu_EffectDetailsList_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectDetailsList_C, AnimIn) == 0x0002C0, "Member 'UMyCharaMenu_EffectDetailsList_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectDetailsList_C, BtnScreen) == 0x0002C8, "Member 'UMyCharaMenu_EffectDetailsList_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectDetailsList_C, CmnClose02) == 0x0002D0, "Member 'UMyCharaMenu_EffectDetailsList_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectDetailsList_C, SBox_Details) == 0x0002D8, "Member 'UMyCharaMenu_EffectDetailsList_C::SBox_Details' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectDetailsList_C, UIBlocker) == 0x0002E0, "Member 'UMyCharaMenu_EffectDetailsList_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectDetailsList_C, WeaponUniqueID) == 0x0002E8, "Member 'UMyCharaMenu_EffectDetailsList_C::WeaponUniqueID' has a wrong offset!");

}

