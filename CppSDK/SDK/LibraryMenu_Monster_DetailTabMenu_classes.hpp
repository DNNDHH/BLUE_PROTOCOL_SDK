#pragma once

 

// Package: LibraryMenu_Monster_DetailTabMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Monster_DetailTabMenu.LibraryMenu_Monster_DetailTabMenu_C
// 0x0210 (0x0488 - 0x0278)
class ULibraryMenu_Monster_DetailTabMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AreaListCloseAnimation;                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AreaListOpenAnimation;                             // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBListBox*                             AreaListBox_168;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AreaNewIcon;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AreaSelectBG;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  AreaSelectCloseFullscreen;                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Monster_ElementData_C*     AttackElementData;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       AttackTextBlock_212;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CenterLine;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DropListBG;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ElementPanel;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ElementPanelBG;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flame;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemDropPanel;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Monster_DropItem_C*        LibraryMenu_Monster_DropItem;                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Monster_DropItem_C*        LibraryMenu_Monster_DropItem_103;                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Monster_DropItem_C*        LibraryMenu_Monster_DropItem_226;                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     LibraryMenu_MonsterAreaListItem;                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     LibraryMenu_MonsterAreaListItem_1;                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     LibraryMenu_MonsterAreaListItem_2;                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     LibraryMenu_MonsterAreaListItem_3;                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     LibraryMenu_MonsterAreaListItem_4;                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     LibraryMenu_MonsterAreaListItem_5;                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     LibraryMenu_MonsterAreaListItem_122;               // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_MonsterAreaListItem_C*     LibraryMenu_MonsterAreaListItem_264;               // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            PopAreaButton;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PopAreaPanel;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       ResistanceTextBlock;                               // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Monster_ElementData_C*     ResistElementData;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBListBox*                             SBListBox_138;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SelectAreaName;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusInfoIcon;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusNewIcon;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_AreaList;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine1;                                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine2;                                            // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAreaListSelect;                                  // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBLibraryEnemyData                    TargetEnemyData;                                   // 0x03B8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectEnemyIndex;                                  // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectEnemyType;                                   // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ViewEnemyId;                                       // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULibraryMenu_Monster_DropItem_C*> DropItemWidgetList;                                // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ULibraryMenu_MonsterAreaListItem_C*> AreaNameWidgetList;                                // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnAreaListVisibleChange;                           // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectAreaIndex;                                   // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D15[0x4];                                     // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibraryEnemyDetailOpenSetting       DetailOpenSetting;                                 // 0x0428(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_CommonToolTipDetail_Variable_C*    InfoTooltipWidget;                                 // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         KillCountCheck;                                    // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewMarkCheckCount;                                 // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ReadAreaIdList;                                    // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           NowKilledAreaList;                                 // 0x0468(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          FullOpenDebug;                                     // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D16[0x3];                                     // 0x0479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NowDetailType;                                     // 0x047C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnAreaListSelect__DelegateSignature(int32 Param_Index, class FName EnemyId);
	void OnAreaListVisibleChange__DelegateSignature(bool Visible);
	void ExecuteUbergraph_LibraryMenu_Monster_DetailTabMenu(int32 EntryPoint);
	void BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnAreaItemSelect(int32 Value);
	void BndEvt__LibraryMenu_Monster_DetailTabMenu_AreaSelectCloseFullscreen_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Monster_DetailTabMenu_PopAreaButton_K2Node_ComponentBoundEvent_3_OnHandledLostFocus__DelegateSignature();
	void ButtonTextColorChange(bool OnCursor);
	void SetEnemyData(const struct FSBLibraryEnemyData& EnemyData);
	void ChangeEnemyViewData(class FName ChangeEnemyId);
	void Initialize_Drop_Item_List();
	void Update_Drop_Item_Widget_Visibility(int32 Num);
	void GetDropItemWidget(int32 Param_Index, class ULibraryMenu_Monster_DropItem_C** Widget);
	void GetEnemyPopAreaData(TArray<class FString>* AreaIds);
	void ChangeEnemyData(int32 Type, int32 Param_Index, int32 AreaIndex);
	void OpenAreaList();
	void CloseAreaList();
	void MakeAreaList();
	void GetAreaListWidget(int32 Param_Index, class ULibraryMenu_MonsterAreaListItem_C** OutWidget);
	void SetActiveArea(int32 Param_Index);
	void UpdateDetailOpenSetting();
	void GetDetailOpenSetting(class FName CheckType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Monster_DetailTabMenu_C">();
	}
	static class ULibraryMenu_Monster_DetailTabMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Monster_DetailTabMenu_C>();
	}
};
static_assert(alignof(ULibraryMenu_Monster_DetailTabMenu_C) == 0x000008, "Wrong alignment on ULibraryMenu_Monster_DetailTabMenu_C");
static_assert(sizeof(ULibraryMenu_Monster_DetailTabMenu_C) == 0x000488, "Wrong size on ULibraryMenu_Monster_DetailTabMenu_C");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, AreaListCloseAnimation) == 0x000280, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::AreaListCloseAnimation' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, AreaListOpenAnimation) == 0x000288, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::AreaListOpenAnimation' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, AreaListBox_168) == 0x000290, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::AreaListBox_168' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, AreaNewIcon) == 0x000298, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::AreaNewIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, AreaSelectBG) == 0x0002A0, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::AreaSelectBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, AreaSelectCloseFullscreen) == 0x0002A8, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::AreaSelectCloseFullscreen' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, AttackElementData) == 0x0002B0, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::AttackElementData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, AttackTextBlock_212) == 0x0002B8, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::AttackTextBlock_212' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, BG) == 0x0002C0, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::BG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, CenterLine) == 0x0002C8, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::CenterLine' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, DropListBG) == 0x0002D0, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::DropListBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, ElementPanel) == 0x0002D8, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::ElementPanel' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, ElementPanelBG) == 0x0002E0, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::ElementPanelBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, Flame) == 0x0002E8, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::Flame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, ItemDropPanel) == 0x0002F0, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::ItemDropPanel' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_Monster_DropItem) == 0x0002F8, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_Monster_DropItem' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_Monster_DropItem_103) == 0x000300, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_Monster_DropItem_103' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_Monster_DropItem_226) == 0x000308, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_Monster_DropItem_226' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_MonsterAreaListItem) == 0x000310, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_MonsterAreaListItem' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_MonsterAreaListItem_1) == 0x000318, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_MonsterAreaListItem_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_MonsterAreaListItem_2) == 0x000320, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_MonsterAreaListItem_2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_MonsterAreaListItem_3) == 0x000328, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_MonsterAreaListItem_3' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_MonsterAreaListItem_4) == 0x000330, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_MonsterAreaListItem_4' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_MonsterAreaListItem_5) == 0x000338, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_MonsterAreaListItem_5' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_MonsterAreaListItem_122) == 0x000340, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_MonsterAreaListItem_122' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, LibraryMenu_MonsterAreaListItem_264) == 0x000348, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::LibraryMenu_MonsterAreaListItem_264' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, PopAreaButton) == 0x000350, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::PopAreaButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, PopAreaPanel) == 0x000358, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::PopAreaPanel' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, ResistanceTextBlock) == 0x000360, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::ResistanceTextBlock' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, ResistElementData) == 0x000368, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::ResistElementData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, SBListBox_138) == 0x000370, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::SBListBox_138' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, SelectAreaName) == 0x000378, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::SelectAreaName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, StatusInfoIcon) == 0x000380, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::StatusInfoIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, StatusNewIcon) == 0x000388, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::StatusNewIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, UIBlocker_AreaList) == 0x000390, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::UIBlocker_AreaList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, VLine1) == 0x000398, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::VLine1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, VLine2) == 0x0003A0, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::VLine2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, OnAreaListSelect) == 0x0003A8, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::OnAreaListSelect' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, TargetEnemyData) == 0x0003B8, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::TargetEnemyData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, SelectEnemyIndex) == 0x0003E0, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::SelectEnemyIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, SelectEnemyType) == 0x0003E4, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::SelectEnemyType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, ViewEnemyId) == 0x0003E8, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::ViewEnemyId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, DropItemWidgetList) == 0x0003F0, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::DropItemWidgetList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, AreaNameWidgetList) == 0x000400, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::AreaNameWidgetList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, OnAreaListVisibleChange) == 0x000410, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::OnAreaListVisibleChange' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, SelectAreaIndex) == 0x000420, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::SelectAreaIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, DetailOpenSetting) == 0x000428, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::DetailOpenSetting' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, InfoTooltipWidget) == 0x000448, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::InfoTooltipWidget' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, KillCountCheck) == 0x000450, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::KillCountCheck' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, NewMarkCheckCount) == 0x000454, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::NewMarkCheckCount' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, ReadAreaIdList) == 0x000458, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::ReadAreaIdList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, NowKilledAreaList) == 0x000468, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::NowKilledAreaList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, FullOpenDebug) == 0x000478, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::FullOpenDebug' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DetailTabMenu_C, NowDetailType) == 0x00047C, "Member 'ULibraryMenu_Monster_DetailTabMenu_C::NowDetailType' has a wrong offset!");

}

