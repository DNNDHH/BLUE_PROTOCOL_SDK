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
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.UpdateMoneyAndItemList
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDesc_C::UpdateMoneyAndItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.UpdateMoneyAndItemList");
		
		UCraftRecepiDesc_C_UpdateMoneyAndItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.IsCraftable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsCraftable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftRecepiDesc_C::IsCraftable(bool* bIsCraftable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.IsCraftable");
		
		UCraftRecepiDesc_C_IsCraftable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsCraftable != nullptr)
			*bIsCraftable = params.bIsCraftable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.CalclateMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsDiscount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UCraftRecepiDesc_C::CalclateMoney(bool* bIsDiscount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.CalclateMoney");
		
		UCraftRecepiDesc_C_CalclateMoney_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsDiscount != nullptr)
			*bIsDiscount = params.bIsDiscount;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.LoadImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiDesc_C::LoadImage(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.LoadImage");
		
		UCraftRecepiDesc_C_LoadImage_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.BndEvt__CraftRecepiDesc_CraftRecepiDescProduct_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDesc_C::BndEvt__CraftRecepiDesc_CraftRecepiDescProduct_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.BndEvt__CraftRecepiDesc_CraftRecepiDescProduct_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature");
		
		UCraftRecepiDesc_C_BndEvt__CraftRecepiDesc_CraftRecepiDescProduct_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.BndEvt__CraftRecepiDesc_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDesc_C::BndEvt__CraftRecepiDesc_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.BndEvt__CraftRecepiDesc_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UCraftRecepiDesc_C_BndEvt__CraftRecepiDesc_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.UpdateMoneys
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDesc_C::UpdateMoneys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.UpdateMoneys");
		
		UCraftRecepiDesc_C_UpdateMoneys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.SetRecepiData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterCraftRecepi                       RecepiData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCraftRecepiDesc_C::SetRecepiData(const struct FCharacterCraftRecepi& RecepiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.SetRecepiData");
		
		UCraftRecepiDesc_C_SetRecepiData_Params params {};
		params.RecepiData = RecepiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.Construct
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDesc_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.Construct");
		
		UCraftRecepiDesc_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.ExecuteUbergraph_CraftRecepiDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiDesc_C::ExecuteUbergraph_CraftRecepiDesc(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.ExecuteUbergraph_CraftRecepiDesc");
		
		UCraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDesc.CraftRecepiDesc_C.Request_ShowRate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDesc_C::Request_ShowRate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDesc.CraftRecepiDesc_C.Request_ShowRate__DelegateSignature");
		
		UCraftRecepiDesc_C_Request_ShowRate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftRecepiDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftRecepiDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftRecepiDesc.CraftRecepiDesc_C");
		return ptr;
	}

}


