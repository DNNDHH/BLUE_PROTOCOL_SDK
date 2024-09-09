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
	 * WidgetBlueprintGeneratedClass WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C
	 * Size -> 0x0088 (FullSize[0x0338] - InheritedSize[0x02B0])
	 */
	class UWeaponCustomMenuPartSlotBoxL_C : public USBWeaponCustomMenuPartSlotWindowL
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        cvs_bg;                                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWeaponCustomMenuPartSlotBoxItem_C*                  PerkSlot1;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWeaponCustomMenuPartSlotBoxItem_C*                  PerkSlot2;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWeaponCustomMenuPartSlotBoxItem_C*                  PerkSlot3;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWeaponCustomMenuPartSlotBoxItem_C*                  PerkSlot4;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomMenuPartWindowTop_C*                          WindowTop;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedPerkSlot;                                       // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnProtectNumChanged;                                     // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       isVisibleTop;                                            // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isVisibleTopText;                                        // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isVisibleTopInformation;                                 // 0x0312(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       isShortType;                                             // 0x0313(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XW9H[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBTextTableAsset*                                   TextTableSlotInformation;                                // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TextIdSlotInfomation;                                    // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BK8P[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponCustomMenuPartSlotBoxItem_C*>          PerkSlotList;                                            // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnSetupTuningResult(const struct FOwnItemInfo& InWeaponBefore, const struct FOwnItemInfo& InWeaponAfter, TArray<int32_t> InLockSlotNo);
		void OnSetupTuning(const struct FOwnItemInfo& InWeapon);
		void OnSetupRemoveResult(const struct FOwnItemInfo& InWeapon, int32_t InSlotNo, bool IsRemove);
		void OnSetupRemove(const struct FOwnItemInfo& InWeapon);
		void OnSetupAddSlotResult(const struct FOwnItemInfo& InWeapon);
		void OnSetupAddSlot(const struct FOwnItemInfo& InWeapon);
		void OnSetupSyntheResult(const struct FOwnItemInfo& InWeapon, int32_t InSlotNo);
		void OnSetupSynthe(const struct FOwnItemInfo& InWeapon, const struct FOwnItemInfo& InFusionItem);
		void OnSetup(const struct FOwnItemInfo& InWeapon);
		void OnReset();
		void GetItemSlot(int32_t InItemIndex, int32_t* Slot);
		void SetChangeShow(bool bShow, int32_t SlotNo);
		void SetVisibleTopText(bool InVisibleText, bool IsVisibleInformation);
		void SetVisibleTop(bool InVisible);
		void SetTopInformationText(class USBTextTableAsset* InTextTable, int32_t InTextId);
		void FindPerkData(TArray<struct FSBCharacterWeaponPerkData>* PerkList, int32_t ItemId, struct FSBCharacterWeaponPerkData* PerkData);
		void GetPerkData(TArray<struct FSBCharacterWeaponPerkData>* PerkList, int32_t Index, bool* Result, struct FSBCharacterWeaponPerkData* PerkData);
		void IsPerkSlotSelect(bool* Result);
		void IsPerkSlotLockAll(bool* Result);
		void IsPerkSlotLock(bool* Result);
		void GetPerkSlotLockList(TArray<int32_t>* LockList);
		void GetPerkSlotList(TArray<class UWeaponCustomMenuPartSlotBoxItem_C*>* PerkSlotList);
		void GetPerkSlot(int32_t Index, class UWeaponCustomMenuPartSlotBoxItem_C** PerkSlot);
		void ClickPerkSlotLock(int32_t Index, bool IsLock);
		void SetupPerkSlotSelectButton();
		void ResetPerkSlotSelect();
		void SetPerkSlotSelect(int32_t Index);
		void SetPerkSlotVisible(class UWeaponCustomMenuPartSlotBoxItem_C* SlotItem, bool InVisible);
		void OnPreConstruct();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature(bool IsLock);
		void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature(bool IsLock);
		void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature(bool IsLock);
		void BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature(bool IsLock);
		void ExecuteUbergraph_WeaponCustomMenuPartSlotBoxL(int32_t EntryPoint);
		void OnClickedPerkSlot__DelegateSignature(int32_t SlotNo);
		void OnProtectNumChanged__DelegateSignature(int32_t ProtectNum);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
