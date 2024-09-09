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
	 * WidgetBlueprintGeneratedClass PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C
	 * Size -> 0x0038 (FullSize[0x02B0] - InheritedSize[0x0278])
	 */
	class UPurchaseTypeSwitchingTab_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      Box_Tab;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPurchaseTypeTabItem_C*                              RoseOrb_Gasha;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPurchaseTypeTabItem_C*                              Ticket_Gasha;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SelectedBtn;                                             // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A62F[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetSelectBtn(int32_t* OutSelectBtnId);
		void SetBtnSelected(int32_t SelectedBtnID);
		void SetBtnVisivility(ESlateVisibility IsVisibility);
		void CommonBtnClicked(int32_t BtnId);
		void BndEvt__PurchaseTypeSwitchingTab_RoseOrb_Gasha_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature(int32_t BtnId);
		void BndEvt__PurchaseTypeSwitchingTab_Ticket_Gasha_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature(int32_t BtnId);
		void Construct();
		void ExecuteUbergraph_PurchaseTypeSwitchingTab(int32_t EntryPoint);
		void OnClicked__DelegateSignature(int32_t BtnId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
