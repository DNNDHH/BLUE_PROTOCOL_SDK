#pragma once

 

// Package: GuildRenameDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildRenameDialog.GuildRenameDialog_C
// 0x0120 (0x0398 - 0x0278)
class UGuildRenameDialog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnAnim_ArrowM_C*                      btn_cmn_anim_arrow_confirm;                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_OutCancel;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CloseBtn;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UErrorTooltip_C*                        ErrorTooltip_Name;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UErrorTooltip_C*                        ErrorTooltip_Tag;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_719;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_975;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     TB_GuildName;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     TB_Tag;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Token;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            UpdateNameBtn;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          TagNgWord;                                         // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NameNgWord;                                        // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NowChecking;                                       // 0x02F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Duplicated;                                        // 0x02F3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NetwoklError;                                      // 0x02F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A26[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCancel;                                          // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChanged;                                         // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UGuildNetworking_C*                     Networking;                                        // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TokenNum;                                          // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A27[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   NewGuildNameTxt;                                   // 0x0328(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   OldGuildNameTxt;                                   // 0x0340(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NewGuildTagTxt;                                    // 0x0358(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   OldGuildTagTxt;                                    // 0x0370(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         GuildNameTxtMaxRange;                              // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GuildTagTxtMaxRange;                               // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsChangedGuildName;                                // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsChangedGuildTag;                                 // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnCancel__DelegateSignature();
	void OnChanged__DelegateSignature();
	void ExecuteUbergraph_GuildRenameDialog(int32 EntryPoint);
	void UnBindEvent();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
	void BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void Close();
	void BndEvt__GuildRenameDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void CreateNetWorking();
	void RemoveNetworking();
	void Construct();
	void OnChangedName(const int32 RetCode);
	void Destruct();
	void OnComplete_DuplicationChecked(const int32 RetCode, const bool bIsDuplicate);
	void Initialize();
	void UpdateExecButton();
	void BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__Btn_OutCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	class USBPlayerGuildComponent* GetGuildComp();
	void CheckTypedNewGuildName(const class FText& InText);
	void CheckTypedNewGuildTag(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildRenameDialog_C">();
	}
	static class UGuildRenameDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildRenameDialog_C>();
	}
};
static_assert(alignof(UGuildRenameDialog_C) == 0x000008, "Wrong alignment on UGuildRenameDialog_C");
static_assert(sizeof(UGuildRenameDialog_C) == 0x000398, "Wrong size on UGuildRenameDialog_C");
static_assert(offsetof(UGuildRenameDialog_C, UberGraphFrame) == 0x000278, "Member 'UGuildRenameDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, AnimOut) == 0x000280, "Member 'UGuildRenameDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, AnimIn) == 0x000288, "Member 'UGuildRenameDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, btn_cmn_anim_arrow_confirm) == 0x000290, "Member 'UGuildRenameDialog_C::btn_cmn_anim_arrow_confirm' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, Btn_OutCancel) == 0x000298, "Member 'UGuildRenameDialog_C::Btn_OutCancel' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, CloseBtn) == 0x0002A0, "Member 'UGuildRenameDialog_C::CloseBtn' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, CmnImageThrobber) == 0x0002A8, "Member 'UGuildRenameDialog_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, ErrorTooltip_Name) == 0x0002B0, "Member 'UGuildRenameDialog_C::ErrorTooltip_Name' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, ErrorTooltip_Tag) == 0x0002B8, "Member 'UGuildRenameDialog_C::ErrorTooltip_Tag' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, Image_719) == 0x0002C0, "Member 'UGuildRenameDialog_C::Image_719' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, Image_975) == 0x0002C8, "Member 'UGuildRenameDialog_C::Image_975' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, TB_GuildName) == 0x0002D0, "Member 'UGuildRenameDialog_C::TB_GuildName' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, TB_Tag) == 0x0002D8, "Member 'UGuildRenameDialog_C::TB_Tag' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, Txt_Token) == 0x0002E0, "Member 'UGuildRenameDialog_C::Txt_Token' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, UpdateNameBtn) == 0x0002E8, "Member 'UGuildRenameDialog_C::UpdateNameBtn' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, TagNgWord) == 0x0002F0, "Member 'UGuildRenameDialog_C::TagNgWord' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, NameNgWord) == 0x0002F1, "Member 'UGuildRenameDialog_C::NameNgWord' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, NowChecking) == 0x0002F2, "Member 'UGuildRenameDialog_C::NowChecking' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, Duplicated) == 0x0002F3, "Member 'UGuildRenameDialog_C::Duplicated' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, NetwoklError) == 0x0002F4, "Member 'UGuildRenameDialog_C::NetwoklError' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, OnCancel) == 0x0002F8, "Member 'UGuildRenameDialog_C::OnCancel' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, OnChanged) == 0x000308, "Member 'UGuildRenameDialog_C::OnChanged' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, Networking) == 0x000318, "Member 'UGuildRenameDialog_C::Networking' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, TokenNum) == 0x000320, "Member 'UGuildRenameDialog_C::TokenNum' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, NewGuildNameTxt) == 0x000328, "Member 'UGuildRenameDialog_C::NewGuildNameTxt' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, OldGuildNameTxt) == 0x000340, "Member 'UGuildRenameDialog_C::OldGuildNameTxt' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, NewGuildTagTxt) == 0x000358, "Member 'UGuildRenameDialog_C::NewGuildTagTxt' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, OldGuildTagTxt) == 0x000370, "Member 'UGuildRenameDialog_C::OldGuildTagTxt' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, GuildNameTxtMaxRange) == 0x000388, "Member 'UGuildRenameDialog_C::GuildNameTxtMaxRange' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, GuildTagTxtMaxRange) == 0x00038C, "Member 'UGuildRenameDialog_C::GuildTagTxtMaxRange' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, IsChangedGuildName) == 0x000390, "Member 'UGuildRenameDialog_C::IsChangedGuildName' has a wrong offset!");
static_assert(offsetof(UGuildRenameDialog_C, IsChangedGuildTag) == 0x000391, "Member 'UGuildRenameDialog_C::IsChangedGuildTag' has a wrong offset!");

}

