#pragma once

 

// Package: CommandMenu_Guild_Button

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_Guild_Button.CommandMenu_Guild_Button_C
// 0x00A8 (0x0320 - 0x0278)
class UCommandMenu_Guild_Button_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimUnHovered;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimHovered;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimUnSelected;                                    // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSelected;                                      // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgGrd;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_BtnEffect_C*               CommandMenu_BtnEffect;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ContentButton;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EffectImage;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon1;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBase;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNew;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineEffect;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NormalGrp;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMessage;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TitleGrp;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OpenGuildMenu;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsActive;                                          // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OpenGuildMenu__DelegateSignature();
	void ExecuteUbergraph_CommandMenu_Guild_Button(int32 EntryPoint);
	void UpdateExclamation(bool IsShow);
	void BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
	class FText Get_NowParticipantSizeText_Text_0();
	ESlateVisibility Get_ServerWaitText_Visibility_0();
	class FText Get_NeedParticipantSizeText_Text_0();
	ESlateVisibility Get_MatchingText_Visibility_0();
	class FText Get_MaxConfirmCountText_Text_0();
	class FText Get_NowConfirmCountText_Text_0();
	void PlayBtnAnim(bool bInActive);
	void IsUpdateMatch(bool* Ret);
	void SetBtn(bool bActive);

	void IsParticipantNumberCompleted(bool* bCompleted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_Guild_Button_C">();
	}
	static class UCommandMenu_Guild_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_Guild_Button_C>();
	}
};
static_assert(alignof(UCommandMenu_Guild_Button_C) == 0x000008, "Wrong alignment on UCommandMenu_Guild_Button_C");
static_assert(sizeof(UCommandMenu_Guild_Button_C) == 0x000320, "Wrong size on UCommandMenu_Guild_Button_C");
static_assert(offsetof(UCommandMenu_Guild_Button_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_Guild_Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, AnimUnHovered) == 0x000280, "Member 'UCommandMenu_Guild_Button_C::AnimUnHovered' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, AnimHovered) == 0x000288, "Member 'UCommandMenu_Guild_Button_C::AnimHovered' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, AnimUnSelected) == 0x000290, "Member 'UCommandMenu_Guild_Button_C::AnimUnSelected' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, AnimSelected) == 0x000298, "Member 'UCommandMenu_Guild_Button_C::AnimSelected' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, BgGrd) == 0x0002A0, "Member 'UCommandMenu_Guild_Button_C::BgGrd' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, CommandMenu_BtnEffect) == 0x0002A8, "Member 'UCommandMenu_Guild_Button_C::CommandMenu_BtnEffect' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, ContentButton) == 0x0002B0, "Member 'UCommandMenu_Guild_Button_C::ContentButton' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, EffectImage) == 0x0002B8, "Member 'UCommandMenu_Guild_Button_C::EffectImage' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, Icon1) == 0x0002C0, "Member 'UCommandMenu_Guild_Button_C::Icon1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, IconBase) == 0x0002C8, "Member 'UCommandMenu_Guild_Button_C::IconBase' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, IconNew) == 0x0002D0, "Member 'UCommandMenu_Guild_Button_C::IconNew' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, LineEffect) == 0x0002D8, "Member 'UCommandMenu_Guild_Button_C::LineEffect' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, LineImage) == 0x0002E0, "Member 'UCommandMenu_Guild_Button_C::LineImage' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, NormalGrp) == 0x0002E8, "Member 'UCommandMenu_Guild_Button_C::NormalGrp' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, SwitchMessage) == 0x0002F0, "Member 'UCommandMenu_Guild_Button_C::SwitchMessage' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, TitleGrp) == 0x0002F8, "Member 'UCommandMenu_Guild_Button_C::TitleGrp' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, Txt1) == 0x000300, "Member 'UCommandMenu_Guild_Button_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, OpenGuildMenu) == 0x000308, "Member 'UCommandMenu_Guild_Button_C::OpenGuildMenu' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Guild_Button_C, IsActive) == 0x000318, "Member 'UCommandMenu_Guild_Button_C::IsActive' has a wrong offset!");

}

