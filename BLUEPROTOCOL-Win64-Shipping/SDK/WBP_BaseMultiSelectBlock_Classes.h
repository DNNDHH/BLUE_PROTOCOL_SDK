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
	 * WidgetBlueprintGeneratedClass WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C
	 * Size -> 0x00C8 (FullSize[0x0340] - InheritedSize[0x0278])
	 */
	class UWBP_BaseMultiSelectBlock_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_MultiSelectBattleImagineBlock_C*                WBP_MultiSelectBattleImagineBlock;                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MultiSelectCostumeBlock_C*                      WBP_MultiSelectCostumeBlock;                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MultiSelectWeaponBlock_C*                       WBP_MultiSelectEnvironmentBlock;                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MultiSelectInnerImagineBlock_C*                 WBP_MultiSelectInnerImagineBlock;                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MultiSelectItemBlock_C*                         WBP_MultiSelectItemBlock;                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MultiSelectMountImagineBlock_C*                 WBP_MultiSelectMountImagineBlock;                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MultiSelectOrnamentBlock_C*                     WBP_MultiSelectOrnamentBlock;                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FInventoryItemData                                  InventoryData;                                           // 0x02B8(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUpdatePrice;                                           // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClick;                                                 // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWBP_StorageRowListItem_C*                           StorageListItem;                                         // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPrice(bool LockExcluded, int32_t* Price);
		void SetOneItem(const struct FInventoryItemData& InventoryItemData);
		void SetStorageItem(class UWBP_StorageRowListItem_C* InStorageListItem);
		void AllCollapsed();
		void Construct();
		void CustomEvent_1();
		void CustomEvent_2(const struct FInventoryItemData& InventoryData);
		void ExecuteUbergraph_WBP_BaseMultiSelectBlock(int32_t EntryPoint);
		void OnClick__DelegateSignature(const struct FInventoryItemData& NewParam);
		void OnUpdatePrice__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
