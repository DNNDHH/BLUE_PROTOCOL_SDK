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
	 * WidgetBlueprintGeneratedClass ImagineMaterialsItem.ImagineMaterialsItem_C
	 * Size -> 0x0044 (FullSize[0x02BC] - InheritedSize[0x0278])
	 */
	class UImagineMaterialsItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Img_Lock;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UItemDropInfo_C*                                     ItemDropInfo;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTimeLimitIcon_C*                                    TimeLimitIcon;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_Inventory;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_ItemName;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_NeedNum;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FMasterImagineMaterial                              Material;                                                // 0x02B0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void UpdateItemDropInfo();
		void SetTokenTerm();
		void SetOrnamentTerm();
		void SetCostumeTerm();
		void SetMountImaineTerm();
		void SetImaineTerm();
		void SetWeaponTerm();
		void SetItemTerm();
		void UpdateLock();
		void UpdateAmount();
		void SetInvalidData();
		void SetName();
		void SetAmountAndNeeds(int32_t Amount);
		void SetEventTermId(const class FString& InEventTermId);
		void ApplyMaterialData();
		void SetMaterialData(const struct FMasterImagineMaterial& Material);
		void ExecuteUbergraph_ImagineMaterialsItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
