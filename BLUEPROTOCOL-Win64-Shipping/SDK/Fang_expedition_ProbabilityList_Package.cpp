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
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ClearItemDetail 
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ProbabilityList_C::ClearItemDetail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ClearItemDetail ");
		
		UFang_expedition_ProbabilityList_C_ClearItemDetail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.SetPlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_ProbabilityList_C::SetPlayData(const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.SetPlayData");
		
		UFang_expedition_ProbabilityList_C_SetPlayData_Params params {};
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.Close
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ProbabilityList_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.Close");
		
		UFang_expedition_ProbabilityList_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.Open
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ProbabilityList_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.Open");
		
		UFang_expedition_ProbabilityList_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.CB_OnListItemClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             MasterReward                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UFang_expedition_ProbabilityList_C::CB_OnListItemClick(const struct FSBMasterReward& MasterReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.CB_OnListItemClick");
		
		UFang_expedition_ProbabilityList_C_CB_OnListItemClick_Params params {};
		params.MasterReward = MasterReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ClearListData
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ProbabilityList_C::ClearListData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ClearListData");
		
		UFang_expedition_ProbabilityList_C_ClearListData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TimeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FangIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ProbabilityList_C::SetData(const struct FSBFang_expeditionAreaData& AreaData, int32_t TimeIndex, int32_t FangIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.SetData");
		
		UFang_expedition_ProbabilityList_C_SetData_Params params {};
		params.AreaData = AreaData;
		params.TimeIndex = TimeIndex;
		params.FangIndex = FangIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ProbabilityList_C::BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature");
		
		UFang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.OnBoxDetailClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ProbabilityList_C::OnBoxDetailClosed(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.OnBoxDetailClosed");
		
		UFang_expedition_ProbabilityList_C_OnBoxDetailClosed_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBDetailsZoomIn                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ProbabilityList_C::BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");
		
		UFang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ProbabilityList_C::BndEvt__Fang_expedition_ProbabilityList_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature");
		
		UFang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ProbabilityList_C::BndEvt__Fang_expedition_ProbabilityList_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature");
		
		UFang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ProbabilityList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.Destruct");
		
		UFang_expedition_ProbabilityList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.OnUI_Cancel
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ProbabilityList_C::OnUI_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.OnUI_Cancel");
		
		UFang_expedition_ProbabilityList_C_OnUI_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ExecuteUbergraph_Fang_expedition_ProbabilityList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ProbabilityList_C::ExecuteUbergraph_Fang_expedition_ProbabilityList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ExecuteUbergraph_Fang_expedition_ProbabilityList");
		
		UFang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ProbabilityList_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.OnClose__DelegateSignature");
		
		UFang_expedition_ProbabilityList_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_ProbabilityList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_ProbabilityList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C");
		return ptr;
	}

}


