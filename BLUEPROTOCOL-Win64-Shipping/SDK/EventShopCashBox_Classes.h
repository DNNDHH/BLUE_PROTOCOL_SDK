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
	 * WidgetBlueprintGeneratedClass EventShopCashBox.EventShopCashBox_C
	 * Size -> 0x0078 (FullSize[0x02F0] - InheritedSize[0x0278])
	 */
	class UEventShopCashBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEventShopCashBox_Item_C*                            Bp_Token_001;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopCashBox_Item_C*                            Bp_Token_002;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopCashBox_Item_C*                            Bp_Token_003;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopCashBox_Item_C*                            Bp_Token_004;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopCashBox_Item_C*                            Bp_Token_005;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEventShopCashBox_Item_C*                            Bp_Token_006;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         Btn_Purchase;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnAnim_ArrowM_C*                                   CmnAnim_ArrowM;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPurchased;                                             // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UEventShopCashBox_Item_C*>                    Bp_Token_List;                                           // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<int32_t>                                            TokenIdList;                                             // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetClickInputState(bool enable);
		void UpdatePurchaseButton(TArray<int32_t>* PriceList);
		void SetShopType(EShopType ShopType);
		void GetAmount(int32_t TokenID, int32_t* Amount);
		void ResetAmount();
		void SetTokenAmount(int32_t TokenID, int32_t Price);
		void SetTokenList(TArray<int32_t>* TokenList);
		void Init();
		void Construct();
		void BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_EventShopCashBox(int32_t EntryPoint);
		void OnPurchased__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
