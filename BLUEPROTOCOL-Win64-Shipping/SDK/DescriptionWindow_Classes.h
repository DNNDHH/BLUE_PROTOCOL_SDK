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
	 * WidgetBlueprintGeneratedClass DescriptionWindow.DescriptionWindow_C
	 * Size -> 0x0121 (FullSize[0x0399] - InheritedSize[0x0278])
	 */
	class UDescriptionWindow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_InventoryActiveImagineDescription_C*            ActiveImagineDescription;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryCostumeDescription_C*                  CostumeDescription;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Display;                                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryWeaponDescription_C*                   EquipDescription;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryItemBagStorageDescription_C*           InventoryItemBagStorageDescription;                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryItemDescription_C*                     ItemDescription;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryMountImagineDescription_C*             MountImagineDescription;                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryOrnamentDescription_C*                 OrnamentDescription;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_InventoryPassiveImagineDescription_C*           PassiveImagineDescription;                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        WindowAll;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedButton;                                         // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		E_DescriptionWindowType                                    NowInventoryType;                                        // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5ZJW[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    NowAnim;                                                 // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInventoryItemData                                  DispItemData;                                            // 0x02F8(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bStorageMode;                                            // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBP_PointOption;                                         // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bBagStorageViewMode;                                     // 0x035A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NWCD[0x5];                                   // 0x035B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWeaponStickerButtonPressed;                            // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnWeaponStickerInUseButtonPressed;                       // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bMoveDescriptionGrp;                                     // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q2AQ[0x3];                                   // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PreviewIndex;                                            // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              MoveDescriptionGrpPositionY;                             // 0x0388(0x0010) Edit, BlueprintVisible
		bool                                                       SubEnableColorDefaultMode;                               // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Refresh();
		void SetMoveDescriptionWindow();
		void SetWeaponStickerInUseButtonIsEnabled(bool InIsEnabled);
		void SetWeaponStickerInUseButtonIsInUse(bool InIsInUse);
		void SetBagStorageViewMode(bool bBagStorageViewMode);
		void IsClose(bool* bClose);
		void RefleshButton();
		void SetRegisterMode(bool IsRegisterMode);
		void Close();
		void Open(const struct FInventoryData& InventoryData);
		void SetItemLoadAfter(class UUMG_CaptureStudio_C* CaptureStudio, EItemType Selection);
		void SetItem(struct FInventoryData* InventoryData);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnButtonClicked_Bind(EDescripionButtonType ButtonType);
		void BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData);
		void BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse);
		void ExecuteUbergraph_DescriptionWindow(int32_t EntryPoint);
		void OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse);
		void OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData);
		void OnClickedButton__DelegateSignature(EDescripionButtonType ButtonType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
