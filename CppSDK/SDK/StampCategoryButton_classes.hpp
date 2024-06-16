#pragma once

 

// Package: StampCategoryButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StampCategoryButton.StampCategoryButton_C
// 0x0080 (0x02F8 - 0x0278)
class UStampCategoryButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            CategoryButton;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CategoryImage;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EmoteIcon;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HistoryImage;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LimitedTimeIcon;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchIconType;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLimitedNo;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBStampCategoryMasterData             StampStampCategoryMasterData;                      // 0x02B8(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsHistory;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsEmote;                                           // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4629[0x2];                                     // 0x02EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_StampCategoryButton_C;                       // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LimitedItemNumber;                                 // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsHover;                                           // 0x02F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClicked__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_StampCategoryButton(int32 EntryPoint);
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void UpdateTexture();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083(class UObject* Loaded);
	void Update(const struct FSBStampCategoryMasterData& InStampCategoryMasterData, int32 InIndex);
	void SetEnabled(bool bEnabled);
	void SetLimitedItemNumber(int32 Number);
	void SetIndex(int32 Param_Index);
	void SetAlpha(bool BMax);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StampCategoryButton_C">();
	}
	static class UStampCategoryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStampCategoryButton_C>();
	}
};
static_assert(alignof(UStampCategoryButton_C) == 0x000008, "Wrong alignment on UStampCategoryButton_C");
static_assert(sizeof(UStampCategoryButton_C) == 0x0002F8, "Wrong size on UStampCategoryButton_C");
static_assert(offsetof(UStampCategoryButton_C, UberGraphFrame) == 0x000278, "Member 'UStampCategoryButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, CategoryButton) == 0x000280, "Member 'UStampCategoryButton_C::CategoryButton' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, CategoryImage) == 0x000288, "Member 'UStampCategoryButton_C::CategoryImage' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, EmoteIcon) == 0x000290, "Member 'UStampCategoryButton_C::EmoteIcon' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, HistoryImage) == 0x000298, "Member 'UStampCategoryButton_C::HistoryImage' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, LimitedTimeIcon) == 0x0002A0, "Member 'UStampCategoryButton_C::LimitedTimeIcon' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, SwitchIconType) == 0x0002A8, "Member 'UStampCategoryButton_C::SwitchIconType' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, TxtLimitedNo) == 0x0002B0, "Member 'UStampCategoryButton_C::TxtLimitedNo' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, StampStampCategoryMasterData) == 0x0002B8, "Member 'UStampCategoryButton_C::StampStampCategoryMasterData' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, OnClicked) == 0x0002D8, "Member 'UStampCategoryButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, IsHistory) == 0x0002E8, "Member 'UStampCategoryButton_C::IsHistory' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, IsEmote) == 0x0002E9, "Member 'UStampCategoryButton_C::IsEmote' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, Index_StampCategoryButton_C) == 0x0002EC, "Member 'UStampCategoryButton_C::Index_StampCategoryButton_C' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, LimitedItemNumber) == 0x0002F0, "Member 'UStampCategoryButton_C::LimitedItemNumber' has a wrong offset!");
static_assert(offsetof(UStampCategoryButton_C, IsHover) == 0x0002F4, "Member 'UStampCategoryButton_C::IsHover' has a wrong offset!");

}

