#pragma once

 

// Package: UMG_SeasonPassMenuRewardItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C
// 0x0048 (0x02C0 - 0x0278)
class UUMG_SeasonPassMenuRewardItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               CantReceiveIcon;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MaxRankEffect;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_DebugText;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bDesignCheck;                                      // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSeasonPassRewardItemState                  State;                                             // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsMax;                                            // 0x02B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D11[0x5];                                     // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardItemData*        Data;                                              // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClick__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data);
	void ExecuteUbergraph_UMG_SeasonPassMenuRewardItem(int32 EntryPoint);
	void BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void DesignCheck(bool bIsAchieved, bool Param_bIsMax);
	void PreConstruct(bool IsDesignTime);
	void UpdateDesignAndData();
	void UpdateDesign();
	void OnUpdateData();
	void SetData(class USBSeasonPassMenuRewardItemData* Param_Data);
	void SetDebugText(class USBSeasonPassMenuRewardItemData* Param_Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassMenuRewardItem_C">();
	}
	static class UUMG_SeasonPassMenuRewardItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassMenuRewardItem_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassMenuRewardItem_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassMenuRewardItem_C");
static_assert(sizeof(UUMG_SeasonPassMenuRewardItem_C) == 0x0002C0, "Wrong size on UUMG_SeasonPassMenuRewardItem_C");
static_assert(offsetof(UUMG_SeasonPassMenuRewardItem_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassMenuRewardItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardItem_C, CantReceiveIcon) == 0x000280, "Member 'UUMG_SeasonPassMenuRewardItem_C::CantReceiveIcon' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardItem_C, CommonIcon) == 0x000288, "Member 'UUMG_SeasonPassMenuRewardItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardItem_C, Image_MaxRankEffect) == 0x000290, "Member 'UUMG_SeasonPassMenuRewardItem_C::Image_MaxRankEffect' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardItem_C, TextBlock_DebugText) == 0x000298, "Member 'UUMG_SeasonPassMenuRewardItem_C::TextBlock_DebugText' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardItem_C, OnClick) == 0x0002A0, "Member 'UUMG_SeasonPassMenuRewardItem_C::OnClick' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardItem_C, bDesignCheck) == 0x0002B0, "Member 'UUMG_SeasonPassMenuRewardItem_C::bDesignCheck' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardItem_C, State) == 0x0002B1, "Member 'UUMG_SeasonPassMenuRewardItem_C::State' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardItem_C, bIsMax) == 0x0002B2, "Member 'UUMG_SeasonPassMenuRewardItem_C::bIsMax' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardItem_C, Data) == 0x0002B8, "Member 'UUMG_SeasonPassMenuRewardItem_C::Data' has a wrong offset!");

}

