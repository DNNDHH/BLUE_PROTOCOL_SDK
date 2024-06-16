#pragma once

 

// Package: WBP_CommandMenuBookmarkRegister

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C
// 0x00B8 (0x0330 - 0x0278)
class UWBP_CommandMenuBookmarkRegister_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Button1_1;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button2_1;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Button2Grp;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonTransparent;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1_1;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1_2;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_FreeText;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_FreeText_1;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_FreeText_2;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_FreeText_3;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker2;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                   NowKye;                                            // 0x02F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             UpdateFinish;                                      // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 BookMark;                                          // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	ESBUIKeyConfigAction                          NewVar_0;                                          // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_1;                                          // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBBookMarkerSlot                             MySlot;                                            // 0x032A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetSuccess;                                        // 0x032B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FSBCursorStateHandle                   CursorHandle;                                      // 0x032C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void UpdateFinish__DelegateSignature(ESBBookMarkerSlot BookmarkSlot, const class FString& KeyString);
	void ExecuteUbergraph_WBP_CommandMenuBookmarkRegister(int32 EntryPoint);
	void BndEvt__WBP_CommandMenuBookmarkRegister_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void BndEvt__Button2_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button2_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void UpdateKey(const struct FKey& Key);
	void Construct();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void IsTestKeyUse(const struct FKey& Key, bool* Result);
	void NewFunction_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommandMenuBookmarkRegister_C">();
	}
	static class UWBP_CommandMenuBookmarkRegister_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommandMenuBookmarkRegister_C>();
	}
};
static_assert(alignof(UWBP_CommandMenuBookmarkRegister_C) == 0x000008, "Wrong alignment on UWBP_CommandMenuBookmarkRegister_C");
static_assert(sizeof(UWBP_CommandMenuBookmarkRegister_C) == 0x000330, "Wrong size on UWBP_CommandMenuBookmarkRegister_C");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CommandMenuBookmarkRegister_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, Button1_1) == 0x000280, "Member 'UWBP_CommandMenuBookmarkRegister_C::Button1_1' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, Button2_1) == 0x000288, "Member 'UWBP_CommandMenuBookmarkRegister_C::Button2_1' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, Button2Grp) == 0x000290, "Member 'UWBP_CommandMenuBookmarkRegister_C::Button2Grp' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, CmnClose02) == 0x000298, "Member 'UWBP_CommandMenuBookmarkRegister_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, Line) == 0x0002A0, "Member 'UWBP_CommandMenuBookmarkRegister_C::Line' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, SBButtonTransparent) == 0x0002A8, "Member 'UWBP_CommandMenuBookmarkRegister_C::SBButtonTransparent' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, Txt1_1) == 0x0002B0, "Member 'UWBP_CommandMenuBookmarkRegister_C::Txt1_1' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, Txt1_2) == 0x0002B8, "Member 'UWBP_CommandMenuBookmarkRegister_C::Txt1_2' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, Txt_FreeText) == 0x0002C0, "Member 'UWBP_CommandMenuBookmarkRegister_C::Txt_FreeText' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, Txt_FreeText_1) == 0x0002C8, "Member 'UWBP_CommandMenuBookmarkRegister_C::Txt_FreeText_1' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, Txt_FreeText_2) == 0x0002D0, "Member 'UWBP_CommandMenuBookmarkRegister_C::Txt_FreeText_2' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, Txt_FreeText_3) == 0x0002D8, "Member 'UWBP_CommandMenuBookmarkRegister_C::Txt_FreeText_3' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, UIBlocker) == 0x0002E0, "Member 'UWBP_CommandMenuBookmarkRegister_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, UIBlocker2) == 0x0002E8, "Member 'UWBP_CommandMenuBookmarkRegister_C::UIBlocker2' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, NowKye) == 0x0002F0, "Member 'UWBP_CommandMenuBookmarkRegister_C::NowKye' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, UpdateFinish) == 0x000308, "Member 'UWBP_CommandMenuBookmarkRegister_C::UpdateFinish' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, BookMark) == 0x000318, "Member 'UWBP_CommandMenuBookmarkRegister_C::BookMark' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, NewVar_0) == 0x000328, "Member 'UWBP_CommandMenuBookmarkRegister_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, NewVar_1) == 0x000329, "Member 'UWBP_CommandMenuBookmarkRegister_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, MySlot) == 0x00032A, "Member 'UWBP_CommandMenuBookmarkRegister_C::MySlot' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, SetSuccess) == 0x00032B, "Member 'UWBP_CommandMenuBookmarkRegister_C::SetSuccess' has a wrong offset!");
static_assert(offsetof(UWBP_CommandMenuBookmarkRegister_C, CursorHandle) == 0x00032C, "Member 'UWBP_CommandMenuBookmarkRegister_C::CursorHandle' has a wrong offset!");

}

