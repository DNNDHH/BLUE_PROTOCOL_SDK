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
	 * WidgetBlueprintGeneratedClass UseTokenSelector.UseTokenSelector_C
	 * Size -> 0x0138 (FullSize[0x03B0] - InheritedSize[0x0278])
	 */
	class UUseTokenSelector_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButtonCmn08_C*                                    Btn_TicketSelect;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_DialogAnchor;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_234;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_728;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_SelectedTicket;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_TicketSelect;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FString, int32_t>                               RateUpTokens;                                            // 0x02B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CraftCount;                                              // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    UseTokenDemand;                                          // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTokenId;                                          // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XM31[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCraftMasterData                                    Recepi;                                                  // 0x0310(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		class UTokenSelectorListView_C*                            TokenSelector;                                           // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTokenSelectUpdate;                                     // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IfMeetDemand(int32_t Count, bool* MeetDemand);
		void IsMeetDemand(bool* MeetDemand);
		void SetCraftCount(int32_t CraftCount);
		void IsUseToken(TArray<int32_t>* UseToken);
		void SetRecepi(const struct FCraftMasterData& Recepi);
		void BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnSelectToken(int32_t TokenID);
		void OnCloseTokenSelector();
		void Destruct();
		void BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void ResetToken();
		void ExecuteUbergraph_UseTokenSelector(int32_t EntryPoint);
		void OnTokenSelectUpdate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
