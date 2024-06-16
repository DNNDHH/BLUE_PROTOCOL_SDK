#pragma once

 

// Package: BaseInventory

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "DescripionButtonType_structs.hpp"
#include "Engine_structs.hpp"
#include "InventoryType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "InventoryData_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BaseInventory.BaseInventory_C
// 0x0310 (0x0588 - 0x0278)
class UBaseInventory_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_3;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_InventorySlot;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBoxString_Filter;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBoxString_Sort;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonPagerWidget_C*                   CommonPagerWidget;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        FilterButton;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             InventorySlot;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListOwner_C*    InventoryStorageRowListOwner;                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Capacity;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Slash;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_UseBlock;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LIne_Liquid;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemory_ForInventory_C*       LiquidMemoryList;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveAnim;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerGaugeCommandMenu_C*              PlayerGaugeCommandMenu;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USelectBlankText_C*                     SelectBlankText_131;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_BagStorage;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTokenDisplay_C*                        TokenDisplay;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_InventoryIcon1;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_InventoryIcon2;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_InventoryIcon3;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_InventoryIcon4;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_InventoryIcon5;                                 // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedButton;                                   // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBOwnItemListContainer*                Inventory;                                         // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventoryType                                InventoryType;                                     // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A08[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickedItemButton;                               // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FInventoryData>                 InventoryData;                                     // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UItemIconBtn_C*                         SelectedItemBtn;                                   // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InventoryItemMax;                                  // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BeforeItemLength;                                  // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedItemRightButton;                          // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DoCheckSlotIconTextureLoadProgress;                // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A09[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPressItemButton;                                 // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TempSlotNum;                                       // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A0A[0x4];                                     // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UItemIconBtn_C*>                 TempSlotItems;                                     // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FName>                           FilterList_Item;                                   // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           FilterList_Equipment;                              // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnComboChanged;                                    // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsRecastTime;                                     // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A0B[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRefreshRegisterRequest;                          // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInventoryData                         LastSelectInventoryStorageList;                    // 0x0420(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bNowInitialize;                                    // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A0C[0x7];                                     // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   Filters;                                           // 0x04C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBSendIdentifiedMaterialsToWarehouseData ResultData;                                        // 0x04D0(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemNum;                                           // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemMaxNum;                                        // 0x0524(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InitializeNow;                                     // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A0D[0x3];                                     // 0x0529(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InventoryViewSlotNum;                              // 0x052C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EInventoryType, int32>                   InventoryViewSlotNumBase;                          // 0x0530(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ItemIconMax;                                       // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PageNum;                                           // 0x0584(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClickedButton__DelegateSignature(EDescripionButtonType Button);
	void OnClickedItemButton__DelegateSignature(const struct FInventoryData& Param_InventoryData);
	void OnClickedItemRightButton__DelegateSignature(class UItemIconBtn_C* SelectButton, const struct FInventoryData& Param_InventoryData);
	void OnPressItemButton__DelegateSignature(class UItemIconBtn_C* SelectButton, const struct FInventoryData& Param_InventoryData);
	void OnComboChanged__DelegateSignature();
	void OnRefreshRegisterRequest__DelegateSignature();
	void ExecuteUbergraph_BaseInventory(int32 EntryPoint);
	void BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32 PageCurrent);
	void CustomEvent_1();
	void ScrollVisibleUpdate(float Offset);
	void InventoryScrollStart();
	void BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void UpdateSortComboBox();
	void UpdateFilterComboBox();
	void UpdateFilterButton();
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters);
	void CustomEvent_0(const struct FInventoryData& OnItemClick);
	void Event_PressItemEnable(class UItemIconBtn_C* Target);
	void RecastTimeIconUpdate(bool Param_bIsRecastTime);
	void BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void UnbindDelegate();
	void Destruct();
	void OnRefleshWithNoAnim();
	void OnRefleshFromRegister();
	void ChangeCategory(EInventoryType Param_Inventory);
	void OnSelect(class UItemIconBtn_C* SelectItem);
	void OnReflesh();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void AdjustItemIcons();
	void SelectedAll(bool IsSelected);
	void FindInventoryDataFromIndex(int32 ItemIndex, struct FInventoryData* Array_Element);
	void SetRegisterMode(bool bIsRegisterMode);
	void FindInventoryDataFromUniqueId(const class FString& InUniqueId, struct FInventoryData* OutInventoryData);
	void CheckSlotIconTextureLoadProgress(bool* OutIsLoadFinished);
	void NeedItemVisible();
	void UpdateLockInventory(TArray<struct FSBLockItemData>& LockItems);
	void IconAnimInPlay();
	class UWidget* On_ComboBoxString_Filter_GenerateWidget_0(const class FString& Item);
	void GetSelectItemData(struct FInventoryItemData* InventoryItemData);
	void SetSelectedItemBtn(const class FString& ItemId);
	void SetSelectBlankText(EInventoryType Selection);
	void SetSelectBlankTextOff();
	void GetSortRule(ESBItemSortType* SortType);
	void GetSortMode(int32* ModeNum);
	void GetFilterType(EItemFilterType* FilterType);
	class FName GetCategoryModeName();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BaseInventory_C">();
	}
	static class UBaseInventory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseInventory_C>();
	}
};
static_assert(alignof(UBaseInventory_C) == 0x000008, "Wrong alignment on UBaseInventory_C");
static_assert(sizeof(UBaseInventory_C) == 0x000588, "Wrong size on UBaseInventory_C");
static_assert(offsetof(UBaseInventory_C, UberGraphFrame) == 0x000278, "Member 'UBaseInventory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, AnimIn) == 0x000280, "Member 'UBaseInventory_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, CanvasPanel_3) == 0x000288, "Member 'UBaseInventory_C::CanvasPanel_3' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, CanvasPanel_InventorySlot) == 0x000290, "Member 'UBaseInventory_C::CanvasPanel_InventorySlot' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, ComboBoxString_Filter) == 0x000298, "Member 'UBaseInventory_C::ComboBoxString_Filter' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, ComboBoxString_Sort) == 0x0002A0, "Member 'UBaseInventory_C::ComboBoxString_Sort' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, CommonPagerWidget) == 0x0002A8, "Member 'UBaseInventory_C::CommonPagerWidget' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, FilterButton) == 0x0002B0, "Member 'UBaseInventory_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, InventorySlot) == 0x0002B8, "Member 'UBaseInventory_C::InventorySlot' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, InventoryStorageRowListOwner) == 0x0002C0, "Member 'UBaseInventory_C::InventoryStorageRowListOwner' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, Label_Capacity) == 0x0002C8, "Member 'UBaseInventory_C::Label_Capacity' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, Label_Slash) == 0x0002D0, "Member 'UBaseInventory_C::Label_Slash' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, Label_UseBlock) == 0x0002D8, "Member 'UBaseInventory_C::Label_UseBlock' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, LIne_Liquid) == 0x0002E0, "Member 'UBaseInventory_C::LIne_Liquid' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, LiquidMemoryList) == 0x0002E8, "Member 'UBaseInventory_C::LiquidMemoryList' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, MoveAnim) == 0x0002F0, "Member 'UBaseInventory_C::MoveAnim' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, PlayerGaugeCommandMenu) == 0x0002F8, "Member 'UBaseInventory_C::PlayerGaugeCommandMenu' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, ScrollBox_0) == 0x000300, "Member 'UBaseInventory_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, SelectBlankText_131) == 0x000308, "Member 'UBaseInventory_C::SelectBlankText_131' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, Switch_BagStorage) == 0x000310, "Member 'UBaseInventory_C::Switch_BagStorage' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, TokenDisplay) == 0x000318, "Member 'UBaseInventory_C::TokenDisplay' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, UI_InventoryIcon1) == 0x000320, "Member 'UBaseInventory_C::UI_InventoryIcon1' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, UI_InventoryIcon2) == 0x000328, "Member 'UBaseInventory_C::UI_InventoryIcon2' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, UI_InventoryIcon3) == 0x000330, "Member 'UBaseInventory_C::UI_InventoryIcon3' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, UI_InventoryIcon4) == 0x000338, "Member 'UBaseInventory_C::UI_InventoryIcon4' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, UI_InventoryIcon5) == 0x000340, "Member 'UBaseInventory_C::UI_InventoryIcon5' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, OnClickedButton) == 0x000348, "Member 'UBaseInventory_C::OnClickedButton' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, Inventory) == 0x000358, "Member 'UBaseInventory_C::Inventory' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, InventoryType) == 0x000360, "Member 'UBaseInventory_C::InventoryType' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, OnClickedItemButton) == 0x000368, "Member 'UBaseInventory_C::OnClickedItemButton' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, InventoryData) == 0x000378, "Member 'UBaseInventory_C::InventoryData' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, SelectedItemBtn) == 0x000388, "Member 'UBaseInventory_C::SelectedItemBtn' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, InventoryItemMax) == 0x000390, "Member 'UBaseInventory_C::InventoryItemMax' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, BeforeItemLength) == 0x000394, "Member 'UBaseInventory_C::BeforeItemLength' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, OnClickedItemRightButton) == 0x000398, "Member 'UBaseInventory_C::OnClickedItemRightButton' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, DoCheckSlotIconTextureLoadProgress) == 0x0003A8, "Member 'UBaseInventory_C::DoCheckSlotIconTextureLoadProgress' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, OnPressItemButton) == 0x0003B0, "Member 'UBaseInventory_C::OnPressItemButton' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, TempSlotNum) == 0x0003C0, "Member 'UBaseInventory_C::TempSlotNum' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, TempSlotItems) == 0x0003C8, "Member 'UBaseInventory_C::TempSlotItems' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, FilterList_Item) == 0x0003D8, "Member 'UBaseInventory_C::FilterList_Item' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, FilterList_Equipment) == 0x0003E8, "Member 'UBaseInventory_C::FilterList_Equipment' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, OnComboChanged) == 0x0003F8, "Member 'UBaseInventory_C::OnComboChanged' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, bIsRecastTime) == 0x000408, "Member 'UBaseInventory_C::bIsRecastTime' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, OnRefreshRegisterRequest) == 0x000410, "Member 'UBaseInventory_C::OnRefreshRegisterRequest' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, LastSelectInventoryStorageList) == 0x000420, "Member 'UBaseInventory_C::LastSelectInventoryStorageList' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, bNowInitialize) == 0x0004B8, "Member 'UBaseInventory_C::bNowInitialize' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, Filters) == 0x0004C0, "Member 'UBaseInventory_C::Filters' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, ResultData) == 0x0004D0, "Member 'UBaseInventory_C::ResultData' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, UIBlocker) == 0x000518, "Member 'UBaseInventory_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, ItemNum) == 0x000520, "Member 'UBaseInventory_C::ItemNum' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, ItemMaxNum) == 0x000524, "Member 'UBaseInventory_C::ItemMaxNum' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, InitializeNow) == 0x000528, "Member 'UBaseInventory_C::InitializeNow' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, InventoryViewSlotNum) == 0x00052C, "Member 'UBaseInventory_C::InventoryViewSlotNum' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, InventoryViewSlotNumBase) == 0x000530, "Member 'UBaseInventory_C::InventoryViewSlotNumBase' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, ItemIconMax) == 0x000580, "Member 'UBaseInventory_C::ItemIconMax' has a wrong offset!");
static_assert(offsetof(UBaseInventory_C, PageNum) == 0x000584, "Member 'UBaseInventory_C::PageNum' has a wrong offset!");

}

