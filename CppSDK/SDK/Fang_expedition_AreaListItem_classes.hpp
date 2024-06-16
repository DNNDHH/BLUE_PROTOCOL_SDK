#pragma once

 

// Package: Fang_expedition_AreaListItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C
// 0x0BC8 (0x0E40 - 0x0278)
class UFang_expedition_AreaListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_BGFld_On;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             AreaName;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BGSwitch;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasArea;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                IconPadding;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewIcon;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SelectButton;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_StatusIcon_C*          StatusIcon1;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_StatusIcon_C*          StatusIcon2;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_StatusIcon_C*          StatusIcon3;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_StatusIcon_C*          StatusIcon4;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_StatusIcon_C*          StatusIcon5;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         StatusIconBox1;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeIcon;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            TownSelectButton;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnItemSelected;                                    // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ItemIndex;                                         // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BgType;                                            // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInit;                                            // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EAA[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            TownTextColor;                                     // 0x0318(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            FieldTextColor;                                    // 0x0340(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBFang_expeditionAreaData             TempAreaData;                                      // 0x0368(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 TempFieldId;                                       // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                           TownBtn_Normal;                                    // 0x0420(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           TownBtn_Selected;                                  // 0x0698(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           FieldBtn_Normal;                                   // 0x0910(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           FieldBtn_Selected;                                 // 0x0B88(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            FieldTextColor_Selected;                           // 0x0E00(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          BtnSelcted;                                        // 0x0E28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EAB[0x7];                                     // 0x0E29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ExpId;                                             // 0x0E30(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void OnItemSelected__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_Fang_expedition_AreaListItem(int32 EntryPoint);
	void BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BGTypeSet(int32 Type);
	void SetData(int32 Param_Index, const struct FSBFang_expeditionAreaData& Data, int32 BgOverwrite, int32 CategoryOverwrite);
	void CheckPlayData(TArray<struct FSBFang_expeditionPlayData>& PlayDataList, bool IsField);
	void ResetPlayIcon();
	void GetData(struct FSBFang_expeditionAreaData* AreaData);
	void SetFieldData(int32 Param_Index, const class FString& Field);
	void SetBtnSelected(bool BtnSelected);
	void CheckNewMark(const class FString& InParam, bool* OutParam);
	void ClearNewMark();
	void ShowNewMark(bool InParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_AreaListItem_C">();
	}
	static class UFang_expedition_AreaListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_AreaListItem_C>();
	}
};
static_assert(alignof(UFang_expedition_AreaListItem_C) == 0x000008, "Wrong alignment on UFang_expedition_AreaListItem_C");
static_assert(sizeof(UFang_expedition_AreaListItem_C) == 0x000E40, "Wrong size on UFang_expedition_AreaListItem_C");
static_assert(offsetof(UFang_expedition_AreaListItem_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_AreaListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, Anm_BGFld_On) == 0x000280, "Member 'UFang_expedition_AreaListItem_C::Anm_BGFld_On' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, AreaName) == 0x000288, "Member 'UFang_expedition_AreaListItem_C::AreaName' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, BGSwitch) == 0x000290, "Member 'UFang_expedition_AreaListItem_C::BGSwitch' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, CanvasArea) == 0x000298, "Member 'UFang_expedition_AreaListItem_C::CanvasArea' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, IconPadding) == 0x0002A0, "Member 'UFang_expedition_AreaListItem_C::IconPadding' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, NewIcon) == 0x0002A8, "Member 'UFang_expedition_AreaListItem_C::NewIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, SelectButton) == 0x0002B0, "Member 'UFang_expedition_AreaListItem_C::SelectButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, StatusIcon1) == 0x0002B8, "Member 'UFang_expedition_AreaListItem_C::StatusIcon1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, StatusIcon2) == 0x0002C0, "Member 'UFang_expedition_AreaListItem_C::StatusIcon2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, StatusIcon3) == 0x0002C8, "Member 'UFang_expedition_AreaListItem_C::StatusIcon3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, StatusIcon4) == 0x0002D0, "Member 'UFang_expedition_AreaListItem_C::StatusIcon4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, StatusIcon5) == 0x0002D8, "Member 'UFang_expedition_AreaListItem_C::StatusIcon5' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, StatusIconBox1) == 0x0002E0, "Member 'UFang_expedition_AreaListItem_C::StatusIconBox1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, TimeIcon) == 0x0002E8, "Member 'UFang_expedition_AreaListItem_C::TimeIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, TownSelectButton) == 0x0002F0, "Member 'UFang_expedition_AreaListItem_C::TownSelectButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, OnItemSelected) == 0x0002F8, "Member 'UFang_expedition_AreaListItem_C::OnItemSelected' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, ItemIndex) == 0x000308, "Member 'UFang_expedition_AreaListItem_C::ItemIndex' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, BgType) == 0x00030C, "Member 'UFang_expedition_AreaListItem_C::BgType' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, IsInit) == 0x000310, "Member 'UFang_expedition_AreaListItem_C::IsInit' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, TownTextColor) == 0x000318, "Member 'UFang_expedition_AreaListItem_C::TownTextColor' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, FieldTextColor) == 0x000340, "Member 'UFang_expedition_AreaListItem_C::FieldTextColor' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, TempAreaData) == 0x000368, "Member 'UFang_expedition_AreaListItem_C::TempAreaData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, TempFieldId) == 0x000410, "Member 'UFang_expedition_AreaListItem_C::TempFieldId' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, TownBtn_Normal) == 0x000420, "Member 'UFang_expedition_AreaListItem_C::TownBtn_Normal' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, TownBtn_Selected) == 0x000698, "Member 'UFang_expedition_AreaListItem_C::TownBtn_Selected' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, FieldBtn_Normal) == 0x000910, "Member 'UFang_expedition_AreaListItem_C::FieldBtn_Normal' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, FieldBtn_Selected) == 0x000B88, "Member 'UFang_expedition_AreaListItem_C::FieldBtn_Selected' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, FieldTextColor_Selected) == 0x000E00, "Member 'UFang_expedition_AreaListItem_C::FieldTextColor_Selected' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, BtnSelcted) == 0x000E28, "Member 'UFang_expedition_AreaListItem_C::BtnSelcted' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListItem_C, ExpId) == 0x000E30, "Member 'UFang_expedition_AreaListItem_C::ExpId' has a wrong offset!");

}

