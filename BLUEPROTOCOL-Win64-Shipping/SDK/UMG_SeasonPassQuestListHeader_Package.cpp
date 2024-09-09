/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetDailyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestType                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_SeasonPassQuestList_C*                  InListMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListHeader_C::SetDailyData(ESBSeasonPassQuestType Type, class UUMG_SeasonPassQuestList_C* InListMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetDailyData");
		
		UUMG_SeasonPassQuestListHeader_C_SetDailyData_Params params {};
		params.Type = Type;
		params.InListMenu = InListMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetWeeklyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WeekCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_SeasonPassQuestList_C*                  InListMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListHeader_C::SetWeeklyData(int32_t WeekCount, class UUMG_SeasonPassQuestList_C* InListMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetWeeklyData");
		
		UUMG_SeasonPassQuestListHeader_C_SetWeeklyData_Params params {};
		params.WeekCount = WeekCount;
		params.InListMenu = InListMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetAdditionalQuestData
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListHeader_C::SetAdditionalQuestData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetAdditionalQuestData");
		
		UUMG_SeasonPassQuestListHeader_C_SetAdditionalQuestData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetNowWeekData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_SeasonPassQuestList_C*                  InListMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InWeekCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListHeader_C::SetNowWeekData(class UUMG_SeasonPassQuestList_C* InListMenu, int32_t InWeekCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetNowWeekData");
		
		UUMG_SeasonPassQuestListHeader_C_SetNowWeekData_Params params {};
		params.InListMenu = InListMenu;
		params.InWeekCount = InWeekCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListActiveBtnOff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListHeader_C::BndEvt__ListActiveBtnOff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListActiveBtnOff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListHeader_C_BndEvt__ListActiveBtnOff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListAciveBtnOn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListHeader_C::BndEvt__ListAciveBtnOn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListAciveBtnOn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListHeader_C_BndEvt__ListAciveBtnOn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListActiveBtnOff_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListHeader_C::BndEvt__ListActiveBtnOff_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListActiveBtnOff_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListHeader_C_BndEvt__ListActiveBtnOff_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListAciveBtnOn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListHeader_C::BndEvt__ListAciveBtnOn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListAciveBtnOn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListHeader_C_BndEvt__ListAciveBtnOn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListActiveBtnOff_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListHeader_C::BndEvt__ListActiveBtnOff_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListActiveBtnOff_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListHeader_C_BndEvt__ListActiveBtnOff_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListAciveBtnOn_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListHeader_C::BndEvt__ListAciveBtnOn_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListAciveBtnOn_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListHeader_C_BndEvt__ListAciveBtnOn_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.ExecuteUbergraph_UMG_SeasonPassQuestListHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListHeader_C::ExecuteUbergraph_UMG_SeasonPassQuestListHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.ExecuteUbergraph_UMG_SeasonPassQuestListHeader");
		
		UUMG_SeasonPassQuestListHeader_C_ExecuteUbergraph_UMG_SeasonPassQuestListHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestListHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestListHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C");
		return ptr;
	}

}


