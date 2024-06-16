#pragma once

 

// Package: CommandMenuCommonSubButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenuCommonSubButton.CommandMenuCommonSubButton_C
// 0x0328 (0x05D8 - 0x02B0)
class UCommandMenuCommonSubButton_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LightInOut;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BookmarkImageHovered;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BookmarkImageNormal;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnHovered;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnNormal;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnPressed;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button1;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ButtonTextLabel;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNew;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Light1;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Light2;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchBookmark;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ButtonId;                                          // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_54EA[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           InitStyle;                                         // 0x0340(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text;                                              // 0x05B8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bFocus;                                            // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAbortAnimation;                                   // 0x05D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClick__DelegateSignature(int32 Param_ButtonId);
	void ExecuteUbergraph_CommandMenuCommonSubButton(int32 EntryPoint);
	void AbortAnimAndCollapse();
	void ExcramationIconVisible(bool bIsVisible);
	void EventInAnimation();
	void BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Set_Menu_Focus(bool InFocus);
	void SetEnable(bool IsEnable);
	void SetBtnImage(class UImage* BtnType);
	void SetBtnText(const class FText& Param_Text);
	void SetBookmarkEnable(bool bEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenuCommonSubButton_C">();
	}
	static class UCommandMenuCommonSubButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenuCommonSubButton_C>();
	}
};
static_assert(alignof(UCommandMenuCommonSubButton_C) == 0x000008, "Wrong alignment on UCommandMenuCommonSubButton_C");
static_assert(sizeof(UCommandMenuCommonSubButton_C) == 0x0005D8, "Wrong size on UCommandMenuCommonSubButton_C");
static_assert(offsetof(UCommandMenuCommonSubButton_C, UberGraphFrame) == 0x0002B0, "Member 'UCommandMenuCommonSubButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, LightInOut) == 0x0002B8, "Member 'UCommandMenuCommonSubButton_C::LightInOut' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, AnimIn) == 0x0002C0, "Member 'UCommandMenuCommonSubButton_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, BookmarkImageHovered) == 0x0002C8, "Member 'UCommandMenuCommonSubButton_C::BookmarkImageHovered' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, BookmarkImageNormal) == 0x0002D0, "Member 'UCommandMenuCommonSubButton_C::BookmarkImageNormal' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, BtnHovered) == 0x0002D8, "Member 'UCommandMenuCommonSubButton_C::BtnHovered' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, BtnNormal) == 0x0002E0, "Member 'UCommandMenuCommonSubButton_C::BtnNormal' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, BtnPressed) == 0x0002E8, "Member 'UCommandMenuCommonSubButton_C::BtnPressed' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, Button1) == 0x0002F0, "Member 'UCommandMenuCommonSubButton_C::Button1' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, ButtonTextLabel) == 0x0002F8, "Member 'UCommandMenuCommonSubButton_C::ButtonTextLabel' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, CanvasPanel_0) == 0x000300, "Member 'UCommandMenuCommonSubButton_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, IconNew) == 0x000308, "Member 'UCommandMenuCommonSubButton_C::IconNew' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, Light1) == 0x000310, "Member 'UCommandMenuCommonSubButton_C::Light1' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, Light2) == 0x000318, "Member 'UCommandMenuCommonSubButton_C::Light2' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, SwitchBookmark) == 0x000320, "Member 'UCommandMenuCommonSubButton_C::SwitchBookmark' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, OnClick) == 0x000328, "Member 'UCommandMenuCommonSubButton_C::OnClick' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, ButtonId) == 0x000338, "Member 'UCommandMenuCommonSubButton_C::ButtonId' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, InitStyle) == 0x000340, "Member 'UCommandMenuCommonSubButton_C::InitStyle' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, Text) == 0x0005B8, "Member 'UCommandMenuCommonSubButton_C::Text' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, bFocus) == 0x0005D0, "Member 'UCommandMenuCommonSubButton_C::bFocus' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButton_C, bAbortAnimation) == 0x0005D1, "Member 'UCommandMenuCommonSubButton_C::bAbortAnimation' has a wrong offset!");

}

