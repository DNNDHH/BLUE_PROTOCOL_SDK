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
	 * WidgetBlueprintGeneratedClass BattleCordeList.BattleCordeList_C
	 * Size -> 0x00A8 (FullSize[0x0320] - InheritedSize[0x0278])
	 */
	class UBattleCordeList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBattleCordeListItem_C*                              CurrEquippedCordeInfoItem;                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DeleteBtn;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBoxForListItemDeleteOrRenameBtn;                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBoxForListItemReplaceUpDownBtn;                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         RenameBtn;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         ReplaceDownBtn;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         ReplaceUpBtn;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollCordeList;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCordeListItemPresssed;                                 // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SelectedCordeId;                                         // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DefaultEquippedCordeId;                                  // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBattleCordeListItem_C*                              SelectedCordeListItem;                                   // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCordeReplaceBtnPressed;                                // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCordeDeleteBtnPressed;                                 // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCordeRenameBtnPressed;                                 // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCordeDataLoaded;                                       // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void CalculatorBattleScore(const struct FSBPlayerPresetEquipList& InCordeData, int32_t* OutBattleScore);
		void RequestLoadCordeData(bool* OutRequestSuccessed);
		void GetCordeListItemOneDownByCordeId(int32_t InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem);
		void GetCordeListItemOneUpByCordeId(int32_t InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem);
		void SetCordeListItemEditBtnsEnable(bool InIsEnabled);
		void SetCordeListItemReplaceBtnsEnable(bool InIsEnabled);
		void SetCordeListItemReplaceDownBtnEnable(bool InIsEnabled);
		void SetCordeListItemReplaceUpBtnEnable(bool InIsEnabled);
		void ResetSelectedCordeToDefault();
		void GetCordeListItemByCordeId(int32_t InCordeId, bool* OutIsValid, class UBattleCordeListItem_C** OutCordeListItem);
		void GetDefaultEquippedCordeId(int32_t* OutCordeId);
		void UpdateCordeListSelectedItem(class UBattleCordeListItem_C* InSelectedCordeListItem);
		void GetCurrEquippedCordeData(struct FSBPlayerPresetEquipList* OutCordeData);
		void GetCurrEquippedBattleCordeName(class FString* OutCordeName);
		void SetupCurrEquippedBattleSetInfo();
		void AddCordeListItem(const struct FSBPlayerPresetEquipList& InCordeData);
		void CreateCordeList();
		void Init();
		void Construct();
		void OnLoadPresetEquipmentList(int32_t RetCode);
		void Destruct();
		void OnCordeListItemClickedEvent(class UBattleCordeListItem_C* InSelf);
		void BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UBattleCordeListItem_C* InSelf);
		void BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_BattleCordeList(int32_t EntryPoint);
		void OnCordeDataLoaded__DelegateSignature(bool InIsDataLoadSuccessed);
		void OnCordeRenameBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem);
		void OnCordeDeleteBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem);
		void OnCordeReplaceBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSrcCordeListItem, class UBattleCordeListItem_C* InDstCordListItem);
		void OnCordeListItemPresssed__DelegateSignature(class UBattleCordeListItem_C* InListItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
