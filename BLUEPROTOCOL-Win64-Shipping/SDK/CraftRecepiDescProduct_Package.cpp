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
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateCraftNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CraftCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiDescProduct_C::UpdateCraftNum(int32_t CraftCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateCraftNum");
		
		UCraftRecepiDescProduct_C_UpdateCraftNum_Params params {};
		params.CraftCount = CraftCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateLiquidMemory
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDescProduct_C::UpdateLiquidMemory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateLiquidMemory");
		
		UCraftRecepiDescProduct_C_UpdateLiquidMemory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateBoost
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDescProduct_C::UpdateBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateBoost");
		
		UCraftRecepiDescProduct_C_UpdateBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.OnLoaded_29DFB891443B661BA66AFE8D4818F831
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiDescProduct_C::OnLoaded_29DFB891443B661BA66AFE8D4818F831(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.OnLoaded_29DFB891443B661BA66AFE8D4818F831");
		
		UCraftRecepiDescProduct_C_OnLoaded_29DFB891443B661BA66AFE8D4818F831_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.SetRecepiData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterCraftRecepi                       RecepiData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCraftRecepiDescProduct_C::SetRecepiData(const struct FCharacterCraftRecepi& RecepiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.SetRecepiData");
		
		UCraftRecepiDescProduct_C_SetRecepiData_Params params {};
		params.RecepiData = RecepiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.LoadImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiDescProduct_C::LoadImage(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.LoadImage");
		
		UCraftRecepiDescProduct_C_LoadImage_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDescProduct_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Destruct");
		
		UCraftRecepiDescProduct_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.OnUpdateBoost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiDescProduct_C::OnUpdateBoost(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.OnUpdateBoost");
		
		UCraftRecepiDescProduct_C_OnUpdateBoost_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.BndEvt__CraftRecepiDescProduct_CommonItemStatusDescWithImageView_K2Node_ComponentBoundEvent_0_RequestShowRateDialog__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDescProduct_C::BndEvt__CraftRecepiDescProduct_CommonItemStatusDescWithImageView_K2Node_ComponentBoundEvent_0_RequestShowRateDialog__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.BndEvt__CraftRecepiDescProduct_CommonItemStatusDescWithImageView_K2Node_ComponentBoundEvent_0_RequestShowRateDialog__DelegateSignature");
		
		UCraftRecepiDescProduct_C_BndEvt__CraftRecepiDescProduct_CommonItemStatusDescWithImageView_K2Node_ComponentBoundEvent_0_RequestShowRateDialog__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Construct
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDescProduct_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Construct");
		
		UCraftRecepiDescProduct_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftRecepiDescProduct_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.PreConstruct");
		
		UCraftRecepiDescProduct_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.ExecuteUbergraph_CraftRecepiDescProduct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftRecepiDescProduct_C::ExecuteUbergraph_CraftRecepiDescProduct(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.ExecuteUbergraph_CraftRecepiDescProduct");
		
		UCraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Request_ShowRate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraftRecepiDescProduct_C::Request_ShowRate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Request_ShowRate__DelegateSignature");
		
		UCraftRecepiDescProduct_C_Request_ShowRate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftRecepiDescProduct_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftRecepiDescProduct_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftRecepiDescProduct.CraftRecepiDescProduct_C");
		return ptr;
	}

}


