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
	 * 		Name   -> Function UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C.SetStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_AestheShop_Step                                  InStep                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AestheShopStepInfo_C::SetStep(E_AestheShop_Step InStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C.SetStep");
		
		UUMG_AestheShopStepInfo_C_SetStep_Params params {};
		params.InStep = InStep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_AestheShopStepInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C.PreConstruct");
		
		UUMG_AestheShopStepInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C.ExecuteUbergraph_UMG_AestheShopStepInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AestheShopStepInfo_C::ExecuteUbergraph_UMG_AestheShopStepInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C.ExecuteUbergraph_UMG_AestheShopStepInfo");
		
		UUMG_AestheShopStepInfo_C_ExecuteUbergraph_UMG_AestheShopStepInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_AestheShopStepInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_AestheShopStepInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C");
		return ptr;
	}

}


