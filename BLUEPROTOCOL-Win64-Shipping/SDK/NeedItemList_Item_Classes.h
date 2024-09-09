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
	 * WidgetBlueprintGeneratedClass NeedItemList_Item.NeedItemList_Item_C
	 * Size -> 0x0054 (FullSize[0x02CC] - InheritedSize[0x0278])
	 */
	class UNeedItemList_Item_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Img_Lock;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UItemDropInfo_C*                                     ItemDropInfo;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemName;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemNum;                                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Num_Inventory;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTimeLimitIcon_C*                                    TimeLimitIcon;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        WidthGrp;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FCraftNeedItems                                     NeedItem;                                                // 0x02B8(0x000C) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
		bool                                                       bIsCraftable;                                            // 0x02C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6Q1Q[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalWidth;                                              // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void InitializeData();
		void GetTokenName(int32_t TokenID, class FText* Name);
		void InitializeItemLock();
		void InitializeAmountNum(int32_t Amount);
		void SetItemNum(int32_t ItemNum);
		void InitializeItem();
		void InitializeEventTerm(const class FString& InEventTerm);
		void SetupToken();
		void InitWidthSize();
		void IsCraftable(bool* Craftable);
		void getStorageItemAmount(int32_t ItemIdx, int32_t* OutIsAmount);
		void getInventoryItemAmount(int32_t ItemIdx, int32_t* OutIsAmount);
		void GetItemName(int32_t ItemIdx, class FText* OutIsItemNameText);
		void Construct();
		void OnOwnItemChangeDelegate(const struct FSBChangeItemAmountParam& InParam);
		void UnbindItemChangeAmountDelegate();
		void Destruct();
		void PreConstruct(bool IsDesignTime);
		void BindItemChangeAmountDelegate();
		void SetNeedItemData(const struct FCraftNeedItems& NeedItem);
		void ExecuteUbergraph_NeedItemList_Item(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
