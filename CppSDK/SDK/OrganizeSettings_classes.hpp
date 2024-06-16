#pragma once

 

// Package: OrganizeSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OrganizeSettings.OrganizeSettings_C
// 0x00A8 (0x0320 - 0x0278)
class UOrganizeSettings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            Btn_Cancel;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Organizing;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_AbleRequest;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_ArrowM_C*                      CmnAnim_ArrowM;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UErrorTooltip_C*                        ErrorTooltip_Comment;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UErrorTooltip_C*                        ErrorTooltip_GuildName;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UErrorTooltip_C*                        ErrorTooltip_TeamTag;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             Grid_Attribute;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             Grid_Time;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_631;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBMultiLineEditableTextBox*            TB_GuildComment;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     TB_GuildName;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     TB_GuildShortName;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOrganizeCansel;                                  // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Organizeing;                                       // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bBlocking;                                         // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsLimitComment;                                   // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bNameNG;                                           // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bGuildCommentNG;                                   // 0x030B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTagNg;                                            // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B70[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GuildTagTxtMaxRange;                               // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GuildNameTxtMaxRange;                              // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNameDuplicated;                                   // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnOrganizeCansel__DelegateSignature();
	void Organizeing__DelegateSignature();
	void ExecuteUbergraph_OrganizeSettings(int32 EntryPoint);
	void OnCompletedGuildOrganized(const int32 RetCode);
	void BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void UpdateOrganizingBtn();
	void OnCheckedGuildOrganize(EDialogResult Result);
	void BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void OnCompleteGuildNameCheck(const int32 RetCode, const bool bIsDuplicate);
	void InitializeGuildDuplicateCheck();
	void BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GenerateAttribute();
	void GenerateTimes();
	void ConstructGuildData(struct FGuildData* GuildData);
	class USBPlayerGuildComponent* GetGuildComp();
	void ClearData();
	void CheckGuildComment(const class FText& InText);
	void CheckGuildTag(const class FText& InText);
	void CheckGuildName(const class FText& InText, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OrganizeSettings_C">();
	}
	static class UOrganizeSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOrganizeSettings_C>();
	}
};
static_assert(alignof(UOrganizeSettings_C) == 0x000008, "Wrong alignment on UOrganizeSettings_C");
static_assert(sizeof(UOrganizeSettings_C) == 0x000320, "Wrong size on UOrganizeSettings_C");
static_assert(offsetof(UOrganizeSettings_C, UberGraphFrame) == 0x000278, "Member 'UOrganizeSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, Btn_Cancel) == 0x000280, "Member 'UOrganizeSettings_C::Btn_Cancel' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, Btn_Organizing) == 0x000288, "Member 'UOrganizeSettings_C::Btn_Organizing' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, CB_AbleRequest) == 0x000290, "Member 'UOrganizeSettings_C::CB_AbleRequest' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, CmnAnim_ArrowM) == 0x000298, "Member 'UOrganizeSettings_C::CmnAnim_ArrowM' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, ErrorTooltip_Comment) == 0x0002A0, "Member 'UOrganizeSettings_C::ErrorTooltip_Comment' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, ErrorTooltip_GuildName) == 0x0002A8, "Member 'UOrganizeSettings_C::ErrorTooltip_GuildName' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, ErrorTooltip_TeamTag) == 0x0002B0, "Member 'UOrganizeSettings_C::ErrorTooltip_TeamTag' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, Grid_Attribute) == 0x0002B8, "Member 'UOrganizeSettings_C::Grid_Attribute' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, Grid_Time) == 0x0002C0, "Member 'UOrganizeSettings_C::Grid_Time' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, Image_631) == 0x0002C8, "Member 'UOrganizeSettings_C::Image_631' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, TB_GuildComment) == 0x0002D0, "Member 'UOrganizeSettings_C::TB_GuildComment' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, TB_GuildName) == 0x0002D8, "Member 'UOrganizeSettings_C::TB_GuildName' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, TB_GuildShortName) == 0x0002E0, "Member 'UOrganizeSettings_C::TB_GuildShortName' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, OnOrganizeCansel) == 0x0002E8, "Member 'UOrganizeSettings_C::OnOrganizeCansel' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, Organizeing) == 0x0002F8, "Member 'UOrganizeSettings_C::Organizeing' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, bBlocking) == 0x000308, "Member 'UOrganizeSettings_C::bBlocking' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, bIsLimitComment) == 0x000309, "Member 'UOrganizeSettings_C::bIsLimitComment' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, bNameNG) == 0x00030A, "Member 'UOrganizeSettings_C::bNameNG' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, bGuildCommentNG) == 0x00030B, "Member 'UOrganizeSettings_C::bGuildCommentNG' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, bTagNg) == 0x00030C, "Member 'UOrganizeSettings_C::bTagNg' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, GuildTagTxtMaxRange) == 0x000310, "Member 'UOrganizeSettings_C::GuildTagTxtMaxRange' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, GuildNameTxtMaxRange) == 0x000314, "Member 'UOrganizeSettings_C::GuildNameTxtMaxRange' has a wrong offset!");
static_assert(offsetof(UOrganizeSettings_C, bNameDuplicated) == 0x000318, "Member 'UOrganizeSettings_C::bNameDuplicated' has a wrong offset!");

}

