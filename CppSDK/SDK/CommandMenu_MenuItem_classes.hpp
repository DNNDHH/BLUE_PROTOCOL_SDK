#pragma once

 

// Package: CommandMenu_MenuItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommandMenu_MenuConfig_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_MenuItem.CommandMenu_MenuItem_C
// 0x00B8 (0x0330 - 0x0278)
class UCommandMenu_MenuItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimUnHovered;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimHovered;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimUnSelected;                                    // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSelected;                                      // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgGrd;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnHit;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_BtnEffect_C*               CommandMenu_BtnEffect;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EffectImage;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon1;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNew;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MailAleat;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MailWarn;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineEffect;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Aleats;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FCommandMenu_MenuConfig                Config;                                            // 0x0310(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bActive;                                           // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
	void ExecuteUbergraph_CommandMenu_MenuItem(int32 EntryPoint);
	void ShowExcramation(bool bIsShow);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_97_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
	void Play_Btn_Anim(bool Param_bActive);
	void GetMenuType(ESBCommandMenuType* MenuType);
	void SetBtnTextColor(bool Param_bActive);
	void SetBtn(bool Param_bActive);
	void IsActiveExcramation(bool* Active);
	void UpdateMailRestrictions(bool Aleat, bool Warning);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_MenuItem_C">();
	}
	static class UCommandMenu_MenuItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_MenuItem_C>();
	}
};
static_assert(alignof(UCommandMenu_MenuItem_C) == 0x000008, "Wrong alignment on UCommandMenu_MenuItem_C");
static_assert(sizeof(UCommandMenu_MenuItem_C) == 0x000330, "Wrong size on UCommandMenu_MenuItem_C");
static_assert(offsetof(UCommandMenu_MenuItem_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_MenuItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, AnimUnHovered) == 0x000280, "Member 'UCommandMenu_MenuItem_C::AnimUnHovered' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, AnimHovered) == 0x000288, "Member 'UCommandMenu_MenuItem_C::AnimHovered' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, AnimUnSelected) == 0x000290, "Member 'UCommandMenu_MenuItem_C::AnimUnSelected' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, AnimSelected) == 0x000298, "Member 'UCommandMenu_MenuItem_C::AnimSelected' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, BgGrd) == 0x0002A0, "Member 'UCommandMenu_MenuItem_C::BgGrd' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, BtnHit) == 0x0002A8, "Member 'UCommandMenu_MenuItem_C::BtnHit' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, CommandMenu_BtnEffect) == 0x0002B0, "Member 'UCommandMenu_MenuItem_C::CommandMenu_BtnEffect' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, EffectImage) == 0x0002B8, "Member 'UCommandMenu_MenuItem_C::EffectImage' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, Icon1) == 0x0002C0, "Member 'UCommandMenu_MenuItem_C::Icon1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, IconNew) == 0x0002C8, "Member 'UCommandMenu_MenuItem_C::IconNew' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, Img_MailAleat) == 0x0002D0, "Member 'UCommandMenu_MenuItem_C::Img_MailAleat' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, Img_MailWarn) == 0x0002D8, "Member 'UCommandMenu_MenuItem_C::Img_MailWarn' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, LineEffect) == 0x0002E0, "Member 'UCommandMenu_MenuItem_C::LineEffect' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, LineImage) == 0x0002E8, "Member 'UCommandMenu_MenuItem_C::LineImage' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, Txt1) == 0x0002F0, "Member 'UCommandMenu_MenuItem_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, WS_Aleats) == 0x0002F8, "Member 'UCommandMenu_MenuItem_C::WS_Aleats' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, OnSelect) == 0x000300, "Member 'UCommandMenu_MenuItem_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, Config) == 0x000310, "Member 'UCommandMenu_MenuItem_C::Config' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MenuItem_C, bActive) == 0x000328, "Member 'UCommandMenu_MenuItem_C::bActive' has a wrong offset!");

}

