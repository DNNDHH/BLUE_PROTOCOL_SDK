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
	 * WidgetBlueprintGeneratedClass Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C
	 * Size -> 0x00B8 (FullSize[0x0330] - InheritedSize[0x0278])
	 */
	class UFang_expedition_DetailItemList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFang_expedition_DetailItemListItem_C*               Fang_expedition_DetailItemListItem;                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailItemListItem_C*               Fang_expedition_DetailItemListItem_62;                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailItemListItem_C*               Fang_expedition_DetailItemListItem_132;                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailItemListItem_C*               Fang_expedition_DetailItemListItem_251;                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailItemListItem_C*               Fang_expedition_DetailItemListItem_338;                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         LeftButton;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      PageBox;                                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailItemListPagePoint_C*          PagePoint1;                                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailItemListPagePoint_C*          PagePoint2;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailItemListPagePoint_C*          PagePoint3;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DetailItemListPagePoint_C*          PagePoint4;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         RightButton;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FSBMasterReward>                             BaseRewardList;                                          // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    PageIndex;                                               // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PageNum;                                                 // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RandomType;                                              // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_24GT[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFang_expedition_DetailItemListItem_C*>       IconWidgetList;                                          // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UFang_expedition_DetailItemListPagePoint_C*>  PageButtonList;                                          // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FSBFang_expeditionRandomRewardData>          RandomRewardList;                                        // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ResetRewardData();
		void SetupRandomRewardPage(int32_t Page);
		void AddRandomRewardData(TArray<struct FSBFang_expeditionRandomRewardData>* RandomReward);
		void SetupPageButton();
		void ChangePage_RandomItem(int32_t Page);
		void SetRandomRewardData(TArray<struct FSBFang_expeditionRandomRewardData>* RandomReward);
		void UpdatePageButtonVisibility();
		void ChangePage_FixedItem(int32_t Page);
		void ChangePage(int32_t Page);
		void SetRewardData(TArray<struct FSBMasterReward>* RewardList);
		void Construct();
		void BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void CB_OnPageButtonClick(int32_t Index);
		void Destruct();
		void ExecuteUbergraph_Fang_expedition_DetailItemList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
