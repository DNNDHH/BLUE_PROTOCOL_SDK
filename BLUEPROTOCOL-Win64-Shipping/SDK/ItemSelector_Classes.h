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
	 * WidgetBlueprintGeneratedClass ItemSelector.ItemSelector_C
	 * Size -> 0x0028 (FullSize[0x0308] - InheritedSize[0x02E0])
	 */
	class UItemSelector_C : public USBItemSelector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UShortcutCoolTime_C*                                 CoolTime;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextKeyIcon_C*                                    TextLeft;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextKeyIcon_C*                                    TextRight;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextKeyIcon_C*                                    TextUse;                                                 // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnUseItem();
		bool IsRegistItemForInventoryData(const struct FOwnItemInfo& InItemInfo);
		void OnPlaySECanNotUse(ESBItemUseStatus InUseStatus);
		void OnPlaySESelect();
		void SetupKeyTextRight();
		void SetupKeyTextLeft();
		void SetupKeyTextUse();
		void OnHiddenCoolTime();
		void OnShowCoolTime();
		void OnTerminate();
		void OnInitialize();
		void OnUnbind();
		void OnBind();
		void DebugPrint(const class FString& InStr, float Duration);
		void OnSaveItemLock(bool Result, TArray<struct FSBLockItemData> LockItemData, int32_t InRetCode);
		void BindSaveItemLock();
		void UnbindSaveItemLock();
		void BindSaveItemStorage();
		void UnbindSaveItemStorage();
		void OnSaveItemStorage(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void OnOwnItemChangeAmount(const struct FSBChangeItemAmountParam& InParam);
		void BindOwnItemChangeAmount();
		void UnbindOwnItemChangeAmount();
		void EventOnUseSupply(bool Result);
		void BindUseSupply();
		void UnbindUseSupply();
		void BindClassLevelUp();
		void UnbindClassLevelUp();
		void CustomEvent_2(class UObject* Sender, class UObject* Param);
		void BindPlayerClassChange();
		void UnbindPlayerClassChange();
		void CustomEvent_4(class UObject* Sender, class UObject* Param);
		void BindUpdateShortcut();
		void UnbindUpdateShortcut();
		void CustomEvent_5(class UObject* Sender, class UObject* Param);
		void BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature();
		void BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature();
		void BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature();
		void BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature();
		void BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature();
		void BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature();
		void BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature();
		void BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature();
		void BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature();
		void BindEndCoolTime(class UShortcutCoolTime_C* CoolTimeWidget);
		void UnbindEndCoolTime(class UShortcutCoolTime_C* CoolTimeWidget);
		void EventSetupList();
		void ExecuteUbergraph_ItemSelector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
