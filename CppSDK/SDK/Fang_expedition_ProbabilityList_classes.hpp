#pragma once

 

// Package: Fang_expedition_ProbabilityList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C
// 0x0078 (0x02F0 - 0x0278)
class UFang_expedition_ProbabilityList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AreaNameText;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_ProbabilityListItem_C* Fang_expedition_ProbabilityListItem;               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_ProbabilityListItem_C* Fang_expedition_ProbabilityListItem_82;            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             List;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DetailsImagineBattleZoomIn_C*      UMG_DetailsImagineBattleZoomIn;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductDetail_C*                   UMG_ProductDetail;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                TempProductData;                                   // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               DetailMenu;                                        // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_ProbabilityList(int32 EntryPoint);
	void OnUI_Cancel();
	void Destruct();
	void BndEvt__Fang_expedition_ProbabilityList_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature();
	void BndEvt__Fang_expedition_ProbabilityList_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature();
	void BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void OnBoxDetailClosed(class UUMG_ProductDetailMenu_C* Sender);
	void BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data);
	void SetData(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangIndex);
	void ClearListData();
	void CB_OnListItemClick(const struct FSBMasterReward& MasterReward);
	void Open();
	void Close();
	void SetPlayData(const struct FSBFang_expeditionPlayData& PlayData);
	void ClearItemDetail_();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_ProbabilityList_C">();
	}
	static class UFang_expedition_ProbabilityList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_ProbabilityList_C>();
	}
};
static_assert(alignof(UFang_expedition_ProbabilityList_C) == 0x000008, "Wrong alignment on UFang_expedition_ProbabilityList_C");
static_assert(sizeof(UFang_expedition_ProbabilityList_C) == 0x0002F0, "Wrong size on UFang_expedition_ProbabilityList_C");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_ProbabilityList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, AreaNameText) == 0x000280, "Member 'UFang_expedition_ProbabilityList_C::AreaNameText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, BG) == 0x000288, "Member 'UFang_expedition_ProbabilityList_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, CanvasPanel_0) == 0x000290, "Member 'UFang_expedition_ProbabilityList_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, CmnBack01) == 0x000298, "Member 'UFang_expedition_ProbabilityList_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, Fang_expedition_ProbabilityListItem) == 0x0002A0, "Member 'UFang_expedition_ProbabilityList_C::Fang_expedition_ProbabilityListItem' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, Fang_expedition_ProbabilityListItem_82) == 0x0002A8, "Member 'UFang_expedition_ProbabilityList_C::Fang_expedition_ProbabilityListItem_82' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, List) == 0x0002B0, "Member 'UFang_expedition_ProbabilityList_C::List' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, UIBlocker) == 0x0002B8, "Member 'UFang_expedition_ProbabilityList_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, UMG_DetailsImagineBattleZoomIn) == 0x0002C0, "Member 'UFang_expedition_ProbabilityList_C::UMG_DetailsImagineBattleZoomIn' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, UMG_ProductDetail) == 0x0002C8, "Member 'UFang_expedition_ProbabilityList_C::UMG_ProductDetail' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, TempProductData) == 0x0002D0, "Member 'UFang_expedition_ProbabilityList_C::TempProductData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, DetailMenu) == 0x0002D8, "Member 'UFang_expedition_ProbabilityList_C::DetailMenu' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityList_C, OnClose) == 0x0002E0, "Member 'UFang_expedition_ProbabilityList_C::OnClose' has a wrong offset!");

}

