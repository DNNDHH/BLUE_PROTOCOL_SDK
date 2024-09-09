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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C
	 * Size -> 0x0078 (FullSize[0x0328] - InheritedSize[0x02B0])
	 */
	class UMyCharaMenu_MountImagine_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Arrow;                                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         BlankIcon;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnMountImagine;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ShopMenuDetailsExpiryDateTime_C*                ExpiryDateTime;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_321;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInventoryUsed_C*                                    InventoryUsed;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UItemIconBtn_C*                                      ItemIcon;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MountImagine_Profile;                                    // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              round_frame;                                             // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_NoEquip;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_Header;                               // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtName;                                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BtnMountImagineClicked;                                  // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetNoEquipVisibility(bool InIsVisible);
		void SetBlankIconVisibility(bool InIsVisible);
		void SetIMountImagineProfileVisibility(bool InIsVisible);
		void SetItemIconVisibility(bool InIsVisible);
		void SetExpiryDateTimeVisibility(bool InIsVisible);
		void SetImagineUsedIconVisibility(bool InIsVisible);
		void SetIsImagineUsed(bool InIsUsed);
		void CreateInventoryData(const struct FSBCharacterMountImagineData& InMountImagine, struct FInventoryItemData* OutInventryItemData, bool* OutIsEnable);
		void GetInventoryMountImagine(const class FString& InUniqueId, bool* OutEnabled, struct FSBCharacterMountImagineData* OutMountImagineData, bool* OutIsUsed);
		void Setup(const class FString& InUniqueId);
		void BndEvt__BtnWeaponChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem);
		void BndEvt__BlankIcon_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_MyCharaMenu_MountImagine(int32_t EntryPoint);
		void BtnMountImagineClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
