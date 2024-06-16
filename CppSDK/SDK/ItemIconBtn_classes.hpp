#pragma once

 

// Package: ItemIconBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CharaParts_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemIconBtn.ItemIconBtn_C
// 0x0100 (0x0378 - 0x0278)
class UItemIconBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DetachCover;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                DisableCover;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IconGrp;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_408;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NumCanvas;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSelectNum;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInventoryItemData                     InventoryItemData;                                 // 0x02D8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsDetach;                                          // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEnabled;                                         // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BAE[0x6];                                     // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectRight;                                     // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDragable;                                        // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsRightClickAccept;                               // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHiddenAmout;                                      // 0x0362(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIconSelected;                                     // 0x0363(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIconBlank;                                        // 0x0364(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUseClassTypeForLevelSync;                         // 0x0365(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBClassType                                  ClassTypeForLevelSync;                             // 0x0366(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BAF[0x1];                                     // 0x0367(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseSize;                                          // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverSize;                                          // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BasePos;                                           // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Empty;                                             // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SwapSwapVisibleMode;                               // 0x0375(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Stack_BEffective_Display;                          // 0x0376(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem);
	void OnSelectRight__DelegateSignature(class UItemIconBtn_C* SelectItem);
	void OnPressed__DelegateSignature(class UItemIconBtn_C* SelectItem);
	void ExecuteUbergraph_ItemIconBtn(int32 EntryPoint);
	void BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(class UCommonIcon_C* Sender);
	void BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void SetItem_InventoryData(const struct FInventoryItemData& InItemData, bool InUseDetailsTooltip, bool HiddenLockIcon, bool HiddenAmout, bool IsUnidentified, bool bLimitedTime, bool Param_Stack_BEffective_Display);
	void SetItem_Index(int32 InItemIndex, int32 InItemAmount, bool bLimitedTime);
	void SetImagine_Index(int32 InImagineItemId);
	void SetMountImagine(const struct FInventoryItemData& Param_InventoryItemData);
	void SetWeapon_Index(int32 InItemIndex);
	void SetEmpty();
	void ResetEmpty();
	void IsIconEmpty(bool* Param_Empty);
	void SetIconSelected(bool IsSelected);
	void SetDetach(bool Param_IsDetach);
	void SetIconBlank(bool IsBlank);
	void Set_Enable(bool Param_bIsEnabled);
	void SetTooltipEnable(bool bEnable);
	void SetIsButtonActive(bool IsActive);
	void SetPressedSoundId(ESystemSE InSoundId);
	void SetHoveredSoundId(ESystemSE InSoundId);
	void SetHoveredColor(const struct FLinearColor& Color);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetDragable(bool InDragable);
	void SetEquipIconVisibility(bool InVisibility);
	void GetEquipIconVisibility(bool* OutIsEquipIconVisible);
	void SetRarity(ESBRarity InRarity);
	void SetImagineSimpleTooltip(bool IsImagineSimpleTooltip);
	void SetRightClickAccept(bool Param_bIsRightClickAccept);
	void AnimInOutPlay(bool bInAnim);
	void SetGrayMode(bool Param_bIsEnabled);
	void SetIcon_Imagine(bool InIsLockFlagDraw, bool InIsUseDetailsTooltip, bool bLimitedTime, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync);
	void SetIcon_Weapon(bool InIsLockFlagDraw, bool InUseWeaponTooltip, bool bLimitedTime);
	void SetIcon_Item(bool InIsLockFlagDraw, bool InIsUnidentified, bool bLimitedTime);
	void SetIcon_Costume(bool InIsLockFlagDraw, bool bLimitedTime);
	void SetIcon_MountImagine(bool InIsLockFlagDraw, bool bLimitedTime);
	void SetIcon_Ornament(bool InIsLockFlagDraw, bool InIsUnidentified, bool bLimitedTime);
	void IsItemLockIconDraw(const struct FInventoryItemData& InInventoryItemData, bool HiddenLockIcon, bool* OutLockFlag);
	void SetMImagineRarity(const class FString& InUniqueId);
	void GetInventoryMountImagine(const class FString& InUniqueId, struct FSBCharacterMountImagineData* OutParameter);
	void GetSelectItemUniqueID(class FString* UniqueId);
	void SetSelectItemUniqueID(const class FString& Inventory_Item_Data_Unique_Id, EItemType Inventory_Item_Data_Item_Type);
	void Set_Costume_Index(int32 Param_Index);
	void Set_Select_Num(int32 NuM, bool Visible);
	void SetLimitedTimeIconVisibility(const struct FInventoryItemData& InInventoryItemData);
	void SetWeaponDetail_Index(int32 InItemIndex, const class FString& InItemUniqueId);
	void SetImagineDetail_Index(int32 InputPin, const class FString& UniqueId);
	void SetIconWeapon(int32 InItemIndex, bool IsDetailsMode, const class FString& InItemUniqueId, int32 InStorageNumber);
	void GetCommonIcon(bool* IsValid, class UCommonIcon_C** OutCommonIcon);
	void SetImagineDetailData(const struct FInventoryItemData& InItemData, bool InUseDetailedTooltip, bool InHiddenLockIcon, bool InHiddenAmout, bool InIsUnidentified, bool InLimitedTime, bool InStackBEffectiveDisplay, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync);
	void SetNewBadgeVisibleByReaded(bool Enable, const class FString& UniqueId);
	void SetSetLockIconVisibility(const class FString& InUniqueId, const int32 InStorageNumber);
	void Set_Swap_Scroll_Visible(bool Visible);
	void Set_Scroll_Visible(float Offset);
	void SetScrollParameter(float Param_BaseSize, float Param_OverSize);
	void Set_Icon_Grp_Visible(bool Visible);
	void SetRewardData(ESBRewardItemType InRewardType, int32 InId, int32 InAmount, bool bLimitedTime);
	void SetAmount2Visibility(bool Param_Visibility);
	void SetAmountVisibility(bool Param_Visibility);
	void SetPickup(bool bValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemIconBtn_C">();
	}
	static class UItemIconBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemIconBtn_C>();
	}
};
static_assert(alignof(UItemIconBtn_C) == 0x000008, "Wrong alignment on UItemIconBtn_C");
static_assert(sizeof(UItemIconBtn_C) == 0x000378, "Wrong size on UItemIconBtn_C");
static_assert(offsetof(UItemIconBtn_C, UberGraphFrame) == 0x000278, "Member 'UItemIconBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, AnimInOut) == 0x000280, "Member 'UItemIconBtn_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, CanvasPanel_0) == 0x000288, "Member 'UItemIconBtn_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, CommonIcon) == 0x000290, "Member 'UItemIconBtn_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, DetachCover) == 0x000298, "Member 'UItemIconBtn_C::DetachCover' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, DisableCover) == 0x0002A0, "Member 'UItemIconBtn_C::DisableCover' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, IconGrp) == 0x0002A8, "Member 'UItemIconBtn_C::IconGrp' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, Image_408) == 0x0002B0, "Member 'UItemIconBtn_C::Image_408' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, NumCanvas) == 0x0002B8, "Member 'UItemIconBtn_C::NumCanvas' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, TextSelectNum) == 0x0002C0, "Member 'UItemIconBtn_C::TextSelectNum' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, OnSelect) == 0x0002C8, "Member 'UItemIconBtn_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, InventoryItemData) == 0x0002D8, "Member 'UItemIconBtn_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, IsDetach) == 0x000338, "Member 'UItemIconBtn_C::IsDetach' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, IsEnabled) == 0x000339, "Member 'UItemIconBtn_C::IsEnabled' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, OnSelectRight) == 0x000340, "Member 'UItemIconBtn_C::OnSelectRight' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, OnPressed) == 0x000350, "Member 'UItemIconBtn_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, IsDragable) == 0x000360, "Member 'UItemIconBtn_C::IsDragable' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, bIsRightClickAccept) == 0x000361, "Member 'UItemIconBtn_C::bIsRightClickAccept' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, bHiddenAmout) == 0x000362, "Member 'UItemIconBtn_C::bHiddenAmout' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, bIconSelected) == 0x000363, "Member 'UItemIconBtn_C::bIconSelected' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, bIconBlank) == 0x000364, "Member 'UItemIconBtn_C::bIconBlank' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, bUseClassTypeForLevelSync) == 0x000365, "Member 'UItemIconBtn_C::bUseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, ClassTypeForLevelSync) == 0x000366, "Member 'UItemIconBtn_C::ClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, BaseSize) == 0x000368, "Member 'UItemIconBtn_C::BaseSize' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, OverSize) == 0x00036C, "Member 'UItemIconBtn_C::OverSize' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, BasePos) == 0x000370, "Member 'UItemIconBtn_C::BasePos' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, Empty) == 0x000374, "Member 'UItemIconBtn_C::Empty' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, SwapSwapVisibleMode) == 0x000375, "Member 'UItemIconBtn_C::SwapSwapVisibleMode' has a wrong offset!");
static_assert(offsetof(UItemIconBtn_C, Stack_BEffective_Display) == 0x000376, "Member 'UItemIconBtn_C::Stack_BEffective_Display' has a wrong offset!");

}

