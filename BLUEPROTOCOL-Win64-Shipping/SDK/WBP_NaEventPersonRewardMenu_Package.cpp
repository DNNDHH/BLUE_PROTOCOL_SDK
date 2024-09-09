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
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.UpdateRewardList
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventPersonRewardMenu_C::UpdateRewardList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.UpdateRewardList");
		
		UWBP_NaEventPersonRewardMenu_C_UpdateRewardList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.RequestAllReceive
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventPersonRewardMenu_C::RequestAllReceive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.RequestAllReceive");
		
		UWBP_NaEventPersonRewardMenu_C_RequestAllReceive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnAllReceiveCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventPersonRewardMenu_C::OnAllReceiveCompleted(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnAllReceiveCompleted");
		
		UWBP_NaEventPersonRewardMenu_C_OnAllReceiveCompleted_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnClickItemIcon_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RewardId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventPersonRewardMenu_C::OnClickItemIcon_Event(const class FName& RewardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnClickItemIcon_Event");
		
		UWBP_NaEventPersonRewardMenu_C_OnClickItemIcon_Event_Params params {};
		params.RewardId = RewardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnClose_DetailMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventPersonRewardMenu_C::OnClose_DetailMenu(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnClose_DetailMenu");
		
		UWBP_NaEventPersonRewardMenu_C_OnClose_DetailMenu_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnPressAllReceiveKey
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventPersonRewardMenu_C::OnPressAllReceiveKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnPressAllReceiveKey");
		
		UWBP_NaEventPersonRewardMenu_C_OnPressAllReceiveKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.BndEvt__WBP_NaEventPersonRewardMenu_SBButton_AllReceive_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventPersonRewardMenu_C::BndEvt__WBP_NaEventPersonRewardMenu_SBButton_AllReceive_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.BndEvt__WBP_NaEventPersonRewardMenu_SBButton_AllReceive_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UWBP_NaEventPersonRewardMenu_C_BndEvt__WBP_NaEventPersonRewardMenu_SBButton_AllReceive_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventPersonRewardMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.Construct");
		
		UWBP_NaEventPersonRewardMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNaEventData*                              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventPersonRewardMenu_C::SetData(class USBNaEventData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.SetData");
		
		UWBP_NaEventPersonRewardMenu_C_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.UpdateAllReveiveButton
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventPersonRewardMenu_C::UpdateAllReveiveButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.UpdateAllReveiveButton");
		
		UWBP_NaEventPersonRewardMenu_C_UpdateAllReveiveButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnAnyUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventPersonRewardMenu_C::OnAnyUpdate(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.OnAnyUpdate");
		
		UWBP_NaEventPersonRewardMenu_C_OnAnyUpdate_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventPersonRewardMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.Destruct");
		
		UWBP_NaEventPersonRewardMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.ExecuteUbergraph_WBP_NaEventPersonRewardMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventPersonRewardMenu_C::ExecuteUbergraph_WBP_NaEventPersonRewardMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C.ExecuteUbergraph_WBP_NaEventPersonRewardMenu");
		
		UWBP_NaEventPersonRewardMenu_C_ExecuteUbergraph_WBP_NaEventPersonRewardMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_NaEventPersonRewardMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_NaEventPersonRewardMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NaEventPersonRewardMenu.WBP_NaEventPersonRewardMenu_C");
		return ptr;
	}

}


