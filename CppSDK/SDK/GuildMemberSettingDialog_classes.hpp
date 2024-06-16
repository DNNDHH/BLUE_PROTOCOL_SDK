#pragma once

 

// Package: GuildMemberSettingDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMemberSettingDialog.GuildMemberSettingDialog_C
// 0x02D8 (0x0550 - 0x0278)
class UGuildMemberSettingDialog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_OutBorder;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnChangeLeader;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnKick;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnReport;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnRoleChange;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnWithDraw;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildMemberManageCBIcon_C*             CB_AssumeLeader;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildMemberManageCBIcon_C*             CB_ChangeLeader;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildMemberManageCBIcon_C*             CB_Kick;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildMemberManageCBIcon_C*             CB_WithDraw;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBoxRole;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CvsWithDraw;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_101;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ManageCB_VB;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerReport_C*                        PlayerReport;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_CharaName;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FString, EGuildMemberRole>         RoleTexts;                                         // 0x0330(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuildMemberData                       MemberData;                                        // 0x0380(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ActivateKick;                                      // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ActivateWithDraw;                                  // 0x0459(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ActivateChangeLeader;                              // 0x045A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5477[0x5];                                     // 0x045B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildMemberData                       SelfMemberData;                                    // 0x0460(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ActivateAssumeLeader;                              // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsOpen;                                           // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5478[0x6];                                     // 0x053A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           SwapBlocker;                                       // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsUGC;                                            // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClosed__DelegateSignature();
	void ExecuteUbergraph_GuildMemberSettingDialog(int32 EntryPoint);
	void OnClose_FromPlayerReport();
	void BndEvt__Btn_OutBorder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OpenReportUI_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void BndEvt__GuildMemberSettingDialog_BtnReport_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void OnAssumeLeader(EDialogResult Result);
	void OpenAssumeLeader();
	void BndEvt__GuildMemberSettingDialog_CB_AssumeLeader_K2Node_ComponentBoundEvent_3_OnUpdateState__DelegateSignature();
	void OpenWithDraw();
	void OpenChangeLeader();
	void OpenKick();
	void OpenChangeRole();
	void Open(const struct FGuildMemberData& Param_MemberData);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Close();
	void BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__GuildMemberSettingDialog_CB_LeaveGuild_K2Node_ComponentBoundEvent_12_OnUpdateState__DelegateSignature();
	void BndEvt__GuildMemberSettingDialog_CB_PromoteGuild_K2Node_ComponentBoundEvent_11_OnUpdateState__DelegateSignature();
	void BndEvt__GuildMemberSettingDialog_CB_RemoveGuild_K2Node_ComponentBoundEvent_6_OnUpdateState__DelegateSignature();
	void BndEvt__GuildMemberSettingDialog_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void OnWithDrow(EDialogResult Result);
	void BndEvt__BtnKick_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
	void BndEvt__BtnChangeLeader_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
	void BndEvt__CmnBtn16_2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
	void BndEvt__BtnRoleChange_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
	void OnCompleteSetting_Event(const int32 RetCode);
	void OnChangeRole(EDialogResult Result);
	void OnChangeLeader(EDialogResult Result);
	void OnKicked(EDialogResult Result);
	void GenerateGuildRole();
	class USBPlayerGuildComponent* GetGuildComp();
	void Initialize();
	class UWidget* OnComboBoxRoleGenerate(const class FString& Item);
	void UpdateChangeBtn(class UGuildMemberManageCBIcon_C* CheckBox, bool* IsChecked);
	void IsCBChecking(bool* Result);
	void InitSelfMemberData();
	void IsGuildMaster(bool* Result);
	void IsGuildGrandMaster(bool* Result);
	void Update_Menu_State(bool bKick, bool bLeader, bool bAssumeLeader, bool bWithDraw);
	class UWidget* On_ComboBoxRole_GenerateWidget_0(const class FString& Item);
	void Init_Btn_with_Draw();
	void Is_Self_Selected(bool* bResult);
	void InitRoleComboBox();
	void InitBtnKick();
	void InitBtnChangeLeader();
	void InitBtnAssumeLeader();
	void CreateSwapBlocker();
	void DeleteSwapBlocker();
	void InitBtnReport();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildMemberSettingDialog_C">();
	}
	static class UGuildMemberSettingDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildMemberSettingDialog_C>();
	}
};
static_assert(alignof(UGuildMemberSettingDialog_C) == 0x000008, "Wrong alignment on UGuildMemberSettingDialog_C");
static_assert(sizeof(UGuildMemberSettingDialog_C) == 0x000550, "Wrong size on UGuildMemberSettingDialog_C");
static_assert(offsetof(UGuildMemberSettingDialog_C, UberGraphFrame) == 0x000278, "Member 'UGuildMemberSettingDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, AnimOut) == 0x000280, "Member 'UGuildMemberSettingDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, AnimIn) == 0x000288, "Member 'UGuildMemberSettingDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, Btn_OutBorder) == 0x000290, "Member 'UGuildMemberSettingDialog_C::Btn_OutBorder' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, BtnChangeLeader) == 0x000298, "Member 'UGuildMemberSettingDialog_C::BtnChangeLeader' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, BtnKick) == 0x0002A0, "Member 'UGuildMemberSettingDialog_C::BtnKick' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, BtnReport) == 0x0002A8, "Member 'UGuildMemberSettingDialog_C::BtnReport' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, BtnRoleChange) == 0x0002B0, "Member 'UGuildMemberSettingDialog_C::BtnRoleChange' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, BtnWithDraw) == 0x0002B8, "Member 'UGuildMemberSettingDialog_C::BtnWithDraw' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, CB_AssumeLeader) == 0x0002C0, "Member 'UGuildMemberSettingDialog_C::CB_AssumeLeader' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, CB_ChangeLeader) == 0x0002C8, "Member 'UGuildMemberSettingDialog_C::CB_ChangeLeader' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, CB_Kick) == 0x0002D0, "Member 'UGuildMemberSettingDialog_C::CB_Kick' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, CB_WithDraw) == 0x0002D8, "Member 'UGuildMemberSettingDialog_C::CB_WithDraw' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, CmnClose02) == 0x0002E0, "Member 'UGuildMemberSettingDialog_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, ComboBoxRole) == 0x0002E8, "Member 'UGuildMemberSettingDialog_C::ComboBoxRole' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, CvsWithDraw) == 0x0002F0, "Member 'UGuildMemberSettingDialog_C::CvsWithDraw' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, Image_101) == 0x0002F8, "Member 'UGuildMemberSettingDialog_C::Image_101' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, ManageCB_VB) == 0x000300, "Member 'UGuildMemberSettingDialog_C::ManageCB_VB' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, PlayerReport) == 0x000308, "Member 'UGuildMemberSettingDialog_C::PlayerReport' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, Txt_CharaName) == 0x000310, "Member 'UGuildMemberSettingDialog_C::Txt_CharaName' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, VerticalBox_0) == 0x000318, "Member 'UGuildMemberSettingDialog_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, OnClosed) == 0x000320, "Member 'UGuildMemberSettingDialog_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, RoleTexts) == 0x000330, "Member 'UGuildMemberSettingDialog_C::RoleTexts' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, MemberData) == 0x000380, "Member 'UGuildMemberSettingDialog_C::MemberData' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, ActivateKick) == 0x000458, "Member 'UGuildMemberSettingDialog_C::ActivateKick' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, ActivateWithDraw) == 0x000459, "Member 'UGuildMemberSettingDialog_C::ActivateWithDraw' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, ActivateChangeLeader) == 0x00045A, "Member 'UGuildMemberSettingDialog_C::ActivateChangeLeader' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, SelfMemberData) == 0x000460, "Member 'UGuildMemberSettingDialog_C::SelfMemberData' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, ActivateAssumeLeader) == 0x000538, "Member 'UGuildMemberSettingDialog_C::ActivateAssumeLeader' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, bIsOpen) == 0x000539, "Member 'UGuildMemberSettingDialog_C::bIsOpen' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, SwapBlocker) == 0x000540, "Member 'UGuildMemberSettingDialog_C::SwapBlocker' has a wrong offset!");
static_assert(offsetof(UGuildMemberSettingDialog_C, bIsUGC) == 0x000548, "Member 'UGuildMemberSettingDialog_C::bIsUGC' has a wrong offset!");

}

