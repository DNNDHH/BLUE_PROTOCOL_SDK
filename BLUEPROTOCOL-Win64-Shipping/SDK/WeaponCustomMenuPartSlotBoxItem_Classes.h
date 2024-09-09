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
	 * WidgetBlueprintGeneratedClass WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C
	 * Size -> 0x0148 (FullSize[0x03C0] - InheritedSize[0x0278])
	 */
	class UWeaponCustomMenuPartSlotBoxItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Button;                                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_Ability1;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_Ability2;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_PerkRarity;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_Select;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_StrageIcon;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_upgrade;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlotPartButtonLock_C*                               Part_Lock;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPerkRarityView_C*                                   Part_Rarity;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlotPartSlotIcon_C*                                 Part_SlotIcon;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomMenuPartTagChange_C*                          Part_TagChange;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlotPartAbilityChange_C*                            Part_WindowAbilityChange;                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_AbilityName_2;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_AbilityName_3;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_AbilityValue_2;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_AbilityValue_3;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_ItemName;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_Result;                                              // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_BG_Size;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_Option;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_Overlap;                                              // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SlotNum;                                                 // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBCharacterWeaponPerkData                          PerkData;                                                // 0x032C(0x001C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UCommonToolTip_AbilityPerk_C*                        AbilityDescToolTip;                                      // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedLock;                                           // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateColor                                         TextColorValue;                                          // 0x0370(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                         TextColorValueMax;                                       // 0x0398(0x0028) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void SetAbility2Color(const struct FSlateColor& InColorAndOpacity, bool IsMax);
		void SetChangeShow(bool bShow);
		void DebugPrint(const class FString& InStr, float Duration);
		void SetOverlapUnSelect();
		void SetVisibleIcon(bool InVisible);
		void SetOverlapSelect();
		void SetOverlapLock();
		void SetOverlapRemove();
		void SetOverlapAddSlot();
		void SetOverlapVisible(bool InVisible);
		void SetupOverlapUnSelect();
		class UWidget* GetAbilityDescToolTipWidget();
		void SetSlotBGSize(int32_t SlotNum);
		void SetupAbilityChangeWindowValue();
		void SetupAbilityChangeWindowLock();
		void SetupAbilityChangeWindowNone();
		void SetAbilityChangeWindowVisible(bool InVisible);
		void IsLock(bool* IsLock);
		void UpdateLock(bool IsLock);
		void GetTagChangeValue(const struct FSBCharacterWeaponPerkData& Before, const struct FSBCharacterWeaponPerkData& After, int32_t* Delta);
		bool IsOptionVisible();
		void SetOptionVisible(bool InVisible);
		void SetupLocking();
		void SetupLock(bool IsLock);
		void SetupTag(const struct FSBCharacterWeaponPerkData& Before, const struct FSBCharacterWeaponPerkData& After);
		void SetRarity(int32_t InRarity);
		void SetRarityVisible(bool InVisible);
		void SetAbility2Value(const class FName& RowName, const struct FSBCharacterWeaponPerkData& InWeaponPerkData);
		void SetAbility2Name(const class FText& InText);
		void SetAbility2Visible(bool InVisible);
		void SetAbility1Color(const struct FSlateColor& InColorAndOpacity, bool IsMax);
		void SetAbility1Value(const class FName& RowName, const struct FSBCharacterWeaponPerkData& InWeaponPerkData);
		void SetAbility1Name(const class FText& InText);
		void SetAbility1Visible(bool InVisible);
		void SetItemName(const class FText& InText);
		void SetPerkEmpty();
		void SetPerkForItem(int32_t InItemID);
		void SetPerk(const struct FSBCharacterWeaponPerkData& WeaponPerkData);
		void SetSlotIcon(int32_t SlotNum);
		void SetSlot(int32_t SlotNum);
		void SetupOverlapSelect();
		void SetupOverlapLock(bool InVisible);
		void SetupOverlapRemove(bool IsRemove);
		void SetupOverlapAddSlot();
		void SetVisibleButton(bool InVisible);
		void IsVisibleSelect(bool* NewParam);
		void SetVisibleSelect(bool InVisible);
		void IsEmptyPerkData(bool* Result);
		void GetPerkData(struct FSBCharacterWeaponPerkData* PerkData);
		void SetPerkData(const struct FSBCharacterWeaponPerkData& InPerkData);
		void SetupEmpty();
		void SetupLongForItem(const struct FOwnItemInfo& InItem);
		void SetupLong(const struct FSBCharacterWeaponPerkData& PerkData);
		void SetupShort(const struct FSBCharacterWeaponPerkData& PerkData);
		void Initialize();
		void BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool IsLock);
		void Construct();
		void ExecuteUbergraph_WeaponCustomMenuPartSlotBoxItem(int32_t EntryPoint);
		void OnClickedLock__DelegateSignature(bool IsLock);
		void OnClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
