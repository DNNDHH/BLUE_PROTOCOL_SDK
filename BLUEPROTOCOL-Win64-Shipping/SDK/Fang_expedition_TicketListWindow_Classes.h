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
	 * WidgetBlueprintGeneratedClass Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C
	 * Size -> 0x00F8 (FullSize[0x0370] - InheritedSize[0x0278])
	 */
	class UFang_expedition_TicketListWindow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnBtn16_C*                                         Btn_OK;                                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose01_C*                                       CmnClose01;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_TicketItem_C*                       Fang_expedition_TicketItem;                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_TicketItem_C*                       Fang_expedition_TicketItem_89;                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_TicketItem_C*                       Fang_expedition_TicketItem_195;                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_TicketItem_C*                       Fang_expedition_TicketItem_262;                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_TicketItem_C*                       Fang_expedition_TicketItem_345;                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_TicketItem_C*                       Fang_expedition_TicketItem_417;                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Arrow;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Arrow_2;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<int32_t>                                            ResetTarget1;                                            // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            ResetTarget2;                                            // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            ResetTarget3;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            ResetTarget4;                                            // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            ResetTarget5;                                            // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            ResetTarget6;                                            // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            CheckboxIDList;                                          // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UFang_expedition_TicketItem_C*>               CheckWidgetList;                                         // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<int32_t>                                            TempTokenIds;                                            // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CheckTicketNum(int32_t InId, bool* OutIsEnable);
		void SetTokenSelect(TArray<int32_t>* SelectTokenId, const struct FSBFang_expeditionAreaData& AreaData);
		void CloseWork();
		void CB_EnableButtonWork();
		void Initialize();
		void CB_OnCheckStateChange(bool State, int32_t ID);
		void Construct();
		void Destruct();
		void BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
		void ExecuteUbergraph_Fang_expedition_TicketListWindow(int32_t EntryPoint);
		void OnClose__DelegateSignature(TArray<int32_t>* SelectTokenIds);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
