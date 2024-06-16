#pragma once

 

// Package: QuestBoard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestBoard.QuestBoard_C
// 0x0148 (0x0450 - 0x0308)
class UQuestBoard_C final : public USBQuestBoard
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimDetailIn;                                      // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight2;                                        // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight1;                                        // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        FilterButton;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ItemDetailsGrp;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoBG;                                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ProceedingQuestCountGrp;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ProceedingQuestCountText;                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ProceedingQuestCountText_MaxNum;                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ProceedingQuestCountText_NowNum;                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem;                               // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem_1;                             // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem_2;                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem_3;                             // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem_4;                             // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem_5;                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem_6;                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem_7;                             // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem_8;                             // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem_9;                             // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItem_C*                 QuestBoard_ListItem_10;                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItemSeparator_C*        QuestBoard_ListItemSeparator;                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestBoard_ListItemSeparator_C*        QuestBoard_ListItemSeparator_1;                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_C*                         QuestDetail_Accepted;                              // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           QuestWidgetList;                                   // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SelectProductMsgGrp;                               // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_InAnime_C*                    ShopMenu_InAnime;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title;                                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UQuestBoard_ListItem_C*                 SelectedItem;                                      // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TickCheck;                                         // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79D3[0x7];                                     // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               RotatorParam;                                      // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_QuestBoard(int32 EntryPoint);
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void OnAnimTimer();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void RefreshDisplay();
	void BuildListItem();
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void OnListItemSelected(class UQuestBoard_ListItem_C* Item);
	void OnPress_Cancel();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex);
	void OnClick_Event_0(int32 QuestIndex);
	void Construct();
	void CreateListItem(const TArray<struct FQuestBoardQuestData>& InQuestList);
	void CreateQuestList();
	void Destruct();
	void ChangeQuestStatus(int32 QuestIndex);
	void RemoveListItem(int32 InQuestIndex);
	void FindListItem(int32 InQuestIndex, int32* OutListIndex);
	void RandomPlayAnimation();
	void RandomPlayAnimation2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestBoard_C">();
	}
	static class UQuestBoard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestBoard_C>();
	}
};
static_assert(alignof(UQuestBoard_C) == 0x000008, "Wrong alignment on UQuestBoard_C");
static_assert(sizeof(UQuestBoard_C) == 0x000450, "Wrong size on UQuestBoard_C");
static_assert(offsetof(UQuestBoard_C, UberGraphFrame) == 0x000308, "Member 'UQuestBoard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, AnimDetailIn) == 0x000310, "Member 'UQuestBoard_C::AnimDetailIn' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, AnimLight2) == 0x000318, "Member 'UQuestBoard_C::AnimLight2' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, AnimLight1) == 0x000320, "Member 'UQuestBoard_C::AnimLight1' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, AnimOut) == 0x000328, "Member 'UQuestBoard_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, AnimIn) == 0x000330, "Member 'UQuestBoard_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, CmnBack01) == 0x000338, "Member 'UQuestBoard_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, FilterButton) == 0x000340, "Member 'UQuestBoard_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, Image_1) == 0x000348, "Member 'UQuestBoard_C::Image_1' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, ItemDetailsGrp) == 0x000350, "Member 'UQuestBoard_C::ItemDetailsGrp' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, Line1) == 0x000358, "Member 'UQuestBoard_C::Line1' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, LogoBG) == 0x000360, "Member 'UQuestBoard_C::LogoBG' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, ProceedingQuestCountGrp) == 0x000368, "Member 'UQuestBoard_C::ProceedingQuestCountGrp' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, ProceedingQuestCountText) == 0x000370, "Member 'UQuestBoard_C::ProceedingQuestCountText' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, ProceedingQuestCountText_MaxNum) == 0x000378, "Member 'UQuestBoard_C::ProceedingQuestCountText_MaxNum' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, ProceedingQuestCountText_NowNum) == 0x000380, "Member 'UQuestBoard_C::ProceedingQuestCountText_NowNum' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem) == 0x000388, "Member 'UQuestBoard_C::QuestBoard_ListItem' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem_1) == 0x000390, "Member 'UQuestBoard_C::QuestBoard_ListItem_1' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem_2) == 0x000398, "Member 'UQuestBoard_C::QuestBoard_ListItem_2' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem_3) == 0x0003A0, "Member 'UQuestBoard_C::QuestBoard_ListItem_3' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem_4) == 0x0003A8, "Member 'UQuestBoard_C::QuestBoard_ListItem_4' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem_5) == 0x0003B0, "Member 'UQuestBoard_C::QuestBoard_ListItem_5' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem_6) == 0x0003B8, "Member 'UQuestBoard_C::QuestBoard_ListItem_6' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem_7) == 0x0003C0, "Member 'UQuestBoard_C::QuestBoard_ListItem_7' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem_8) == 0x0003C8, "Member 'UQuestBoard_C::QuestBoard_ListItem_8' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem_9) == 0x0003D0, "Member 'UQuestBoard_C::QuestBoard_ListItem_9' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItem_10) == 0x0003D8, "Member 'UQuestBoard_C::QuestBoard_ListItem_10' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItemSeparator) == 0x0003E0, "Member 'UQuestBoard_C::QuestBoard_ListItemSeparator' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestBoard_ListItemSeparator_1) == 0x0003E8, "Member 'UQuestBoard_C::QuestBoard_ListItemSeparator_1' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestDetail_Accepted) == 0x0003F0, "Member 'UQuestBoard_C::QuestDetail_Accepted' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, QuestWidgetList) == 0x0003F8, "Member 'UQuestBoard_C::QuestWidgetList' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, RetainerBox_0) == 0x000400, "Member 'UQuestBoard_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, SelectProductMsgGrp) == 0x000408, "Member 'UQuestBoard_C::SelectProductMsgGrp' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, ShopMenu_InAnime) == 0x000410, "Member 'UQuestBoard_C::ShopMenu_InAnime' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, Title) == 0x000418, "Member 'UQuestBoard_C::Title' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, UIBlocker) == 0x000420, "Member 'UQuestBoard_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, OnClose) == 0x000428, "Member 'UQuestBoard_C::OnClose' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, SelectedItem) == 0x000438, "Member 'UQuestBoard_C::SelectedItem' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, TickCheck) == 0x000440, "Member 'UQuestBoard_C::TickCheck' has a wrong offset!");
static_assert(offsetof(UQuestBoard_C, RotatorParam) == 0x000448, "Member 'UQuestBoard_C::RotatorParam' has a wrong offset!");

}

