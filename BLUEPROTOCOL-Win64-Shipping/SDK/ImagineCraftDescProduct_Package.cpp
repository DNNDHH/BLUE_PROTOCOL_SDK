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
	 * 		Name   -> Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.UpdateBoost
	 * 		Flags  -> ()
	 */
	void UImagineCraftDescProduct_C::UpdateBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.UpdateBoost");
		
		UImagineCraftDescProduct_C_UpdateBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.IsLiquidMemoryActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraftDescProduct_C::IsLiquidMemoryActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.IsLiquidMemoryActive");
		
		UImagineCraftDescProduct_C_IsLiquidMemoryActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.SetRecepiData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterImagineRecepi                        RecepiData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineCraftDescProduct_C::SetRecepiData(const struct FMasterImagineRecepi& RecepiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.SetRecepiData");
		
		UImagineCraftDescProduct_C_SetRecepiData_Params params {};
		params.RecepiData = RecepiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.Construct
	 * 		Flags  -> ()
	 */
	void UImagineCraftDescProduct_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.Construct");
		
		UImagineCraftDescProduct_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.Destruct
	 * 		Flags  -> ()
	 */
	void UImagineCraftDescProduct_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.Destruct");
		
		UImagineCraftDescProduct_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.OnComplete_RewardBoostInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraftDescProduct_C::OnComplete_RewardBoostInfo(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.OnComplete_RewardBoostInfo");
		
		UImagineCraftDescProduct_C_OnComplete_RewardBoostInfo_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.BndEvt__ImagineCraftDescProduct_RateDisplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineCraftDescProduct_C::BndEvt__ImagineCraftDescProduct_RateDisplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.BndEvt__ImagineCraftDescProduct_RateDisplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UImagineCraftDescProduct_C_BndEvt__ImagineCraftDescProduct_RateDisplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.ExecuteUbergraph_ImagineCraftDescProduct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraftDescProduct_C::ExecuteUbergraph_ImagineCraftDescProduct(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.ExecuteUbergraph_ImagineCraftDescProduct");
		
		UImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineCraftDescProduct_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineCraftDescProduct_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineCraftDescProduct.ImagineCraftDescProduct_C");
		return ptr;
	}

}


