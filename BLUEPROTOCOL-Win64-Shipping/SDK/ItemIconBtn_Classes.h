#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass ItemIconBtn.ItemIconBtn_C
	 * Size -> 0x00FF (FullSize[0x0377] - InheritedSize[0x0278])
	 */
	class UItemIconBtn_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimInOut;                                               // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIcon_C*                                       CommonIcon;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DetachCover;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             DisableCover;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        IconGrp;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_409;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        NumCanvas;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextSelectNum;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelect;                                                // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x02D8(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsDetach;                                                // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEnabled;                                               // 0x0339(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6VMF[0x6];                                   // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectRight;                                           // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsDragable;                                              // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsRightClickAccept;                                     // 0x0361(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHiddenAmout;                                            // 0x0362(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIconSelected;                                           // 0x0363(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIconBlank;                                              // 0x0364(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseClassTypeForLevelSync;                               // 0x0365(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBClassType                                               ClassTypeForLevelSync;                                   // 0x0366(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0I04[0x1];                                   // 0x0367(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseSize;                                                // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverSize;                                                // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BasePos;                                                 // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Empty;                                                   // 0x0374(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SwapSwapVisibleMode;                                     // 0x0375(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StackBEffectiveDisplay;                                  // 0x0376(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetPickup(bool bValue);
		void SetAmountVisibility(bool Visibility);
		void SetAmount2Visibility(bool Visibility);
		void SetRewardData(ESBRewardItemType InRewardType, int32_t InId, int32_t InAmount, bool bLimitedTime);
		void SetIconGrpVisible(bool Visible);
		void SetScrollParameter(float BaseSize, float OverSize);
		void SetScrollVisible(float Offset);
		void SetSwapScrollVisible(bool Visible);
		void SetSetLockIconVisibility(const class FString& InUniqueId, int32_t InStorageNumber);
		void SetNewBadgeVisibleByReaded(bool enable, const class FString& UniqueId);
		void SetImagineDetailData(const struct FInventoryItemData& InItemData, bool InUseDetailedTooltip, bool InHiddenLockIcon, bool InHiddenAmout, bool InIsUnidentified, bool InLimitedTime, bool InStackBEffectiveDisplay, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync);
		void GetCommonIcon(bool* IsValid, class UCommonIcon_C** OutCommonIcon);
		void SetIconWeapon(int32_t InItemIndex, bool IsDetailsMode, const class FString& InItemUniqueId, int32_t InStorageNumber);
		void SetImagineDetail_Index(int32_t InputPin, const class FString& UniqueId);
		void SetWeaponDetail_Index(int32_t InItemIndex, const class FString& InItemUniqueId);
		void SetLimitedTimeIconVisibility(const struct FInventoryItemData& InInventoryItemData);
		void SetSelectNum(int32_t Nu, bool Visible);
		void SetCostumeIndex(int32_t Index);
		void SetSelectItemUniqueID(const class FString& InventoryItemDataUniqueId, EItemType InventoryItemDataItemType);
		void GetSelectItemUniqueID(class FString* UniqueId);
		void GetInventoryMountImagine(const class FString& InUniqueId, struct FSBCharacterMountImagineData* OutParameter);
		void SetMImagineRarity(const class FString& InUniqueId);
		void IsItemLockIconDraw(const struct FInventoryItemData& InInventoryItemData, bool HiddenLockIcon, bool* OutLockFlag);
		void SetIcon_Ornament(bool InIsLockFlagDraw, bool InIsUnidentified, bool bLimitedTime);
		void SetIcon_MountImagine(bool InIsLockFlagDraw, bool bLimitedTime);
		void SetIcon_Costume(bool InIsLockFlagDraw, bool bLimitedTime);
		void SetIcon_Item(bool InIsLockFlagDraw, bool InIsUnidentified, bool bLimitedTime);
		void SetIcon_Weapon(bool InIsLockFlagDraw, bool InUseWeaponTooltip, bool bLimitedTime);
		void SetIcon_Imagine(bool InIsLockFlagDraw, bool InIsUseDetailsTooltip, bool bLimitedTime, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync);
		void SetGrayMode(bool bIsEnabled);
		void AnimInOutPlay(bool bInAnim);
		void SetRightClickAccept(bool bIsRightClickAccept);
		void SetImagineSimpleTooltip(bool IsImagineSimpleTooltip);
		void SetRarity(ESBRarity InRarity);
		void GetEquipIconVisibility(bool* OutIsEquipIconVisible);
		void SetEquipIconVisibility(bool InVisibility);
		void SetDragable(bool InDragable);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		void SetHoveredColor(const struct FLinearColor& Color);
		void SetHoveredSoundId(ESystemSE InSoundId);
		void SetPressedSoundId(ESystemSE InSoundId);
		void SetIsButtonActive(bool IsActive);
		void SetTooltipEnable(bool bEnable);
		void SetEnable(bool bIsEnabled);
		void SetIconBlank(bool IsBlank);
		void SetDetach(bool IsDetach);
		void SetIconSelected(bool IsSelected);
		void IsIconEmpty(bool* Empty);
		void ResetEmpty();
		void SetEmpty();
		void SetWeapon_Index(int32_t InItemIndex);
		void SetMountImagine(const struct FInventoryItemData& InventoryItemData);
		void SetImagine_Index(int32_t InImagineItemId);
		void SetItem_Index(int32_t InItemIndex, int32_t InItemAmount, bool bLimitedTime);
		void SetItem_InventoryData(const struct FInventoryItemData& InItemData, bool InUseDetailsTooltip, bool HiddenLockIcon, bool HiddenAmout, bool IsUnidentified, bool bLimitedTime, bool StackBEffectiveDisplay);
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
		void BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(class UCommonIcon_C* Sender);
		void ExecuteUbergraph_ItemIconBtn(int32_t EntryPoint);
		void OnPressed__DelegateSignature(class UItemIconBtn_C* SelectItem);
		void OnSelectRight__DelegateSignature(class UItemIconBtn_C* SelectItem);
		void OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
