#pragma once

 

// Package: StampCategoryMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StampCategoryMenu.StampCategoryMenu_C
// 0x00C8 (0x0378 - 0x02B0)
class UStampCategoryMenu_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStampCategoryButton_C*                 StampCategoryButton1;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton10;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton2;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton3;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton4;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton5;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton6;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton7;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton8;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton9;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryHistoryButton;                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         StampCategoryHorizontalBox;                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            StampCategorySelectLeftButton;                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            StampCategorySelectRightButton;                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CursorIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4797[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnUpdateStamp;                                     // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectButtonIndex;                                 // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HistoryMode;                                       // 0x0344(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4798[0x3];                                     // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 SelectStampIds;                                    // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBStampCategoryMasterData>     StampCategoryMasterData;                           // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 HistoryStampIds;                                   // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnUpdateStamp__DelegateSignature(const struct FSBStampCategoryMasterData& Param_StampCategoryMasterData);
	void ExecuteUbergraph_StampCategoryMenu(int32 EntryPoint);
	void BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int32 Param_Index);
	void BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int32 Param_Index);
	void BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int32 Param_Index);
	void BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32 Param_Index);
	void BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature(int32 Param_Index);
	void Show();
	void BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature(int32 Param_Index);
	void BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature(int32 Param_Index);
	void BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature(int32 Param_Index);
	void BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature(int32 Param_Index);
	void BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature(int32 Param_Index);
	void BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature(int32 Param_Index);
	void BndEvt__StampCategorySelectRightButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__StampCategorySelectLeftButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void GetMyStampDataList();
	void Update_Button();
	void UpdateEnableButton();
	void Set_History_Mode(bool bSet);
	void UpdateMyStampDataList(int32 StampId);
	void FindStampCategoryMasterData(int32 InCategoryId, bool* IsFind, struct FSBStampCategoryMasterData* RetData);
	void LoadStampHistoryIdsData();
	void SaveStampHisoryIdsData();
	void CheckLimitedTimeStamp(int32 StampId, bool* Result);

	void GetSelectButtonIndex(int32* Param_SelectButtonIndex) const;
	void GetSelectStampCategoryMasterData(struct FSBStampCategoryMasterData* Output) const;
	bool IsValidSelectStampCategoryMasterData() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StampCategoryMenu_C">();
	}
	static class UStampCategoryMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStampCategoryMenu_C>();
	}
};
static_assert(alignof(UStampCategoryMenu_C) == 0x000008, "Wrong alignment on UStampCategoryMenu_C");
static_assert(sizeof(UStampCategoryMenu_C) == 0x000378, "Wrong size on UStampCategoryMenu_C");
static_assert(offsetof(UStampCategoryMenu_C, UberGraphFrame) == 0x0002B0, "Member 'UStampCategoryMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryButton1) == 0x0002B8, "Member 'UStampCategoryMenu_C::StampCategoryButton1' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryButton10) == 0x0002C0, "Member 'UStampCategoryMenu_C::StampCategoryButton10' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryButton2) == 0x0002C8, "Member 'UStampCategoryMenu_C::StampCategoryButton2' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryButton3) == 0x0002D0, "Member 'UStampCategoryMenu_C::StampCategoryButton3' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryButton4) == 0x0002D8, "Member 'UStampCategoryMenu_C::StampCategoryButton4' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryButton5) == 0x0002E0, "Member 'UStampCategoryMenu_C::StampCategoryButton5' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryButton6) == 0x0002E8, "Member 'UStampCategoryMenu_C::StampCategoryButton6' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryButton7) == 0x0002F0, "Member 'UStampCategoryMenu_C::StampCategoryButton7' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryButton8) == 0x0002F8, "Member 'UStampCategoryMenu_C::StampCategoryButton8' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryButton9) == 0x000300, "Member 'UStampCategoryMenu_C::StampCategoryButton9' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryHistoryButton) == 0x000308, "Member 'UStampCategoryMenu_C::StampCategoryHistoryButton' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryHorizontalBox) == 0x000310, "Member 'UStampCategoryMenu_C::StampCategoryHorizontalBox' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategorySelectLeftButton) == 0x000318, "Member 'UStampCategoryMenu_C::StampCategorySelectLeftButton' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategorySelectRightButton) == 0x000320, "Member 'UStampCategoryMenu_C::StampCategorySelectRightButton' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, CursorIndex) == 0x000328, "Member 'UStampCategoryMenu_C::CursorIndex' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, OnUpdateStamp) == 0x000330, "Member 'UStampCategoryMenu_C::OnUpdateStamp' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, SelectButtonIndex) == 0x000340, "Member 'UStampCategoryMenu_C::SelectButtonIndex' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, HistoryMode) == 0x000344, "Member 'UStampCategoryMenu_C::HistoryMode' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, SelectStampIds) == 0x000348, "Member 'UStampCategoryMenu_C::SelectStampIds' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, StampCategoryMasterData) == 0x000358, "Member 'UStampCategoryMenu_C::StampCategoryMasterData' has a wrong offset!");
static_assert(offsetof(UStampCategoryMenu_C, HistoryStampIds) == 0x000368, "Member 'UStampCategoryMenu_C::HistoryStampIds' has a wrong offset!");

}

