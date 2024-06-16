#pragma once

 

// Package: GuildDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildDetails.GuildDetails_C
// 0x0350 (0x05C8 - 0x0278)
class UGuildDetails_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButtonCmn08_C*                       Btn_Apply;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonCmn08_C*                       Btn_Cancel;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Btn_CopyShortID;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Edit;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn20_C*                            BtnSendEntry;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasSendEntry;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CB_EditMode;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_EnableEntry;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_ArrowS_C*                      CmnAnim_ArrowS;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CmnBtn_Entry_Refuse;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CmnBtn_Invite_Accept;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CmnBtn_Invite_Refuse;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnGauge1_C*                           CmnGauge1;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_EntryAccept;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_EntryRefuse;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Edit;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_ShortID;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UErrorTooltip_C*                        ErrorTooltip_Comment;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildTag_C*                            GuildTag;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_117;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_150;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_226;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1230;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3058;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3317;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_CraeteAt;                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_Comment;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_Buttons;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_Window;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*              TB_GuildComment;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ExpNext;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ExpNow;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_GuildName;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LeaderName;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_MaxMember;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NowMember;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Rank;                                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ShortID;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtBtnApply;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtBtnCancel;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtBtnEdit;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UG_ActiveTimes;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UG_Attributes;                                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Entry;                                          // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuildData                             GuildData;                                         // 0x03F0(0x00B8)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         Rank;                                              // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RemainExp;                                         // 0x04AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bisEditMode;                                       // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OrganizeCheckMode;                                 // 0x04B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8005[0x6];                                     // 0x04B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildChangeData                       ChangeData;                                        // 0x04B8(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Buttons_Switcher_Index;                            // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8006[0x4];                                     // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventEdit;                                         // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsCloseBtnVisible;                                 // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8007[0x7];                                     // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Need_Exp;                                          // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8008[0x4];                                     // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData_CS                          GuildData_CS;                                      // 0x0528(0x00A0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void EventEdit__DelegateSignature(bool Edit);
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_GuildDetails(int32 EntryPoint);
	void BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void SetGuildDetailsCloseBtnEnables(bool InIsEnable);
	void BndEvt__GuildDetails_CmnClose02_K2Node_ComponentBoundEvent_16_OnClosed__DelegateSignature();
	void BndEvt__GuildDetails_CmnBtn_Entry_Refuse_K2Node_ComponentBoundEvent_14_EventOnClicked__DelegateSignature();
	void BndEvt__GuildDetails_CmnBtn_Invite_Refuse_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature();
	void BndEvt__GuildDetails_CmnBtn_Invite_Accept_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature();
	void InviteAcceptDecisionDialog(EDialogResult Result);
	void InviteRefuseDecisionDialog(EDialogResult Result);
	void EntryRefuseDecisionDialog(EDialogResult Result);
	void CustomEvent_1(const int32 RetCode);
	void CustomEvent_0(const int32 RetCode, bool IsAccept, const class FString& InEntryId);
	void OnCompletedGuildEntry_Event(const int32 RetCode);
	void BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void OnCloseEntry(EDialogResult OnButton, const class FText& InputText);
	void BndEvt__BtnSendEntry_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void Set_ShowEntryMode(bool bFromPlayerProfile);
	void OnGuildNameChanged(const int32 RetCode);
	void OnComplete_GuildDataChanged(const int32 RetCode, const struct FGuildData& InGuildData);
	void BindChanged();
	void BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void On_Change_GuildData(EDialogResult Result);
	void CounstructChangeData();
	void BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_CopyShortID_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void DenyEditable();
	void LeaveEditMode();
	void EnterEditMode();
	void BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InitalizeGuildData();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetGuildData(const struct FGuildData& Param_GuildData, int32 ButtonsSwitcherIndex);
	void GenerateAttributes();
	void GenerateTimes();
	void Set_EditMode_Attributes(bool Param_bisEditMode);
	void Set_EditMode_Times(bool Param_bisEditMode);
	class USBPlayerGuildComponent* GetGuildComp();
	void GetAttributes(TArray<EGuildAttribute>* Ret_Attrib);
	void Get_Times(TArray<ESBGuildActivityTime>* Ret_Times);
	void SetGuildNameInfos();
	void SetGuildIdInfos();
	void SetGuildComment();
	void Set_Guild_Leader_Infos();
	void SetGuildAcceptTypeInfos();
	void SetGuildExperienceInfos();
	void SetGuildMemberInfos();
	void SetGuildTimeInfos();
	void CheckGuildComment(const class FText& InText);
	void IsAbleToSendGuildEntry(bool* bResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildDetails_C">();
	}
	static class UGuildDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildDetails_C>();
	}
};
static_assert(alignof(UGuildDetails_C) == 0x000008, "Wrong alignment on UGuildDetails_C");
static_assert(sizeof(UGuildDetails_C) == 0x0005C8, "Wrong size on UGuildDetails_C");
static_assert(offsetof(UGuildDetails_C, UberGraphFrame) == 0x000278, "Member 'UGuildDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Btn_Apply) == 0x000280, "Member 'UGuildDetails_C::Btn_Apply' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Btn_Cancel) == 0x000288, "Member 'UGuildDetails_C::Btn_Cancel' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Btn_CopyShortID) == 0x000290, "Member 'UGuildDetails_C::Btn_CopyShortID' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Btn_Edit) == 0x000298, "Member 'UGuildDetails_C::Btn_Edit' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, BtnSendEntry) == 0x0002A0, "Member 'UGuildDetails_C::BtnSendEntry' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CanvasSendEntry) == 0x0002A8, "Member 'UGuildDetails_C::CanvasSendEntry' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CB_EditMode) == 0x0002B0, "Member 'UGuildDetails_C::CB_EditMode' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CB_EnableEntry) == 0x0002B8, "Member 'UGuildDetails_C::CB_EnableEntry' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CmnAnim_ArrowS) == 0x0002C0, "Member 'UGuildDetails_C::CmnAnim_ArrowS' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CmnBtn_Entry_Refuse) == 0x0002C8, "Member 'UGuildDetails_C::CmnBtn_Entry_Refuse' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CmnBtn_Invite_Accept) == 0x0002D0, "Member 'UGuildDetails_C::CmnBtn_Invite_Accept' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CmnBtn_Invite_Refuse) == 0x0002D8, "Member 'UGuildDetails_C::CmnBtn_Invite_Refuse' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CmnClose02) == 0x0002E0, "Member 'UGuildDetails_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CmnGauge1) == 0x0002E8, "Member 'UGuildDetails_C::CmnGauge1' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CP_EntryAccept) == 0x0002F0, "Member 'UGuildDetails_C::CP_EntryAccept' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, CP_EntryRefuse) == 0x0002F8, "Member 'UGuildDetails_C::CP_EntryRefuse' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Cvs_Edit) == 0x000300, "Member 'UGuildDetails_C::Cvs_Edit' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Cvs_ShortID) == 0x000308, "Member 'UGuildDetails_C::Cvs_ShortID' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, ErrorTooltip_Comment) == 0x000310, "Member 'UGuildDetails_C::ErrorTooltip_Comment' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, GuildTag) == 0x000318, "Member 'UGuildDetails_C::GuildTag' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Image) == 0x000320, "Member 'UGuildDetails_C::Image' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Image_117) == 0x000328, "Member 'UGuildDetails_C::Image_117' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Image_150) == 0x000330, "Member 'UGuildDetails_C::Image_150' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Image_226) == 0x000338, "Member 'UGuildDetails_C::Image_226' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Image_1230) == 0x000340, "Member 'UGuildDetails_C::Image_1230' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Image_3058) == 0x000348, "Member 'UGuildDetails_C::Image_3058' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Image_3317) == 0x000350, "Member 'UGuildDetails_C::Image_3317' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, SBDateTimeTextBlock_CraeteAt) == 0x000358, "Member 'UGuildDetails_C::SBDateTimeTextBlock_CraeteAt' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Switch_Comment) == 0x000360, "Member 'UGuildDetails_C::Switch_Comment' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Switcher_Buttons) == 0x000368, "Member 'UGuildDetails_C::Switcher_Buttons' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Switcher_Window) == 0x000370, "Member 'UGuildDetails_C::Switcher_Window' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, TB_GuildComment) == 0x000378, "Member 'UGuildDetails_C::TB_GuildComment' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Txt_ExpNext) == 0x000380, "Member 'UGuildDetails_C::Txt_ExpNext' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Txt_ExpNow) == 0x000388, "Member 'UGuildDetails_C::Txt_ExpNow' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Txt_GuildName) == 0x000390, "Member 'UGuildDetails_C::Txt_GuildName' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Txt_LeaderName) == 0x000398, "Member 'UGuildDetails_C::Txt_LeaderName' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Txt_MaxMember) == 0x0003A0, "Member 'UGuildDetails_C::Txt_MaxMember' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Txt_NowMember) == 0x0003A8, "Member 'UGuildDetails_C::Txt_NowMember' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Txt_Rank) == 0x0003B0, "Member 'UGuildDetails_C::Txt_Rank' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Txt_ShortID) == 0x0003B8, "Member 'UGuildDetails_C::Txt_ShortID' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, TxtBtnApply) == 0x0003C0, "Member 'UGuildDetails_C::TxtBtnApply' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, TxtBtnCancel) == 0x0003C8, "Member 'UGuildDetails_C::TxtBtnCancel' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, TxtBtnEdit) == 0x0003D0, "Member 'UGuildDetails_C::TxtBtnEdit' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, UG_ActiveTimes) == 0x0003D8, "Member 'UGuildDetails_C::UG_ActiveTimes' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, UG_Attributes) == 0x0003E0, "Member 'UGuildDetails_C::UG_Attributes' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, WS_Entry) == 0x0003E8, "Member 'UGuildDetails_C::WS_Entry' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, GuildData) == 0x0003F0, "Member 'UGuildDetails_C::GuildData' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Rank) == 0x0004A8, "Member 'UGuildDetails_C::Rank' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, RemainExp) == 0x0004AC, "Member 'UGuildDetails_C::RemainExp' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, bisEditMode) == 0x0004B0, "Member 'UGuildDetails_C::bisEditMode' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, OrganizeCheckMode) == 0x0004B1, "Member 'UGuildDetails_C::OrganizeCheckMode' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, ChangeData) == 0x0004B8, "Member 'UGuildDetails_C::ChangeData' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Buttons_Switcher_Index) == 0x0004F0, "Member 'UGuildDetails_C::Buttons_Switcher_Index' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, EventEdit) == 0x0004F8, "Member 'UGuildDetails_C::EventEdit' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, IsCloseBtnVisible) == 0x000508, "Member 'UGuildDetails_C::IsCloseBtnVisible' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, OnClose) == 0x000510, "Member 'UGuildDetails_C::OnClose' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, Need_Exp) == 0x000520, "Member 'UGuildDetails_C::Need_Exp' has a wrong offset!");
static_assert(offsetof(UGuildDetails_C, GuildData_CS) == 0x000528, "Member 'UGuildDetails_C::GuildData_CS' has a wrong offset!");

}

