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
	 * 		Name   -> Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.SetTitleTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AestheShopStepInfo_StepIcon_C::SetTitleTextId(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.SetTitleTextId");
		
		UUMG_AestheShopStepInfo_StepIcon_C_SetTitleTextId_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.SetIconSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_AestheShopStepInfo_StepIcon_C::SetIconSelected(bool InIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.SetIconSelected");
		
		UUMG_AestheShopStepInfo_StepIcon_C_SetIconSelected_Params params {};
		params.InIsSelected = InIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_AestheShopStepInfo_StepIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.PreConstruct");
		
		UUMG_AestheShopStepInfo_StepIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.ExecuteUbergraph_UMG_AestheShopStepInfo_StepIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AestheShopStepInfo_StepIcon_C::ExecuteUbergraph_UMG_AestheShopStepInfo_StepIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.ExecuteUbergraph_UMG_AestheShopStepInfo_StepIcon");
		
		UUMG_AestheShopStepInfo_StepIcon_C_ExecuteUbergraph_UMG_AestheShopStepInfo_StepIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_AestheShopStepInfo_StepIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_AestheShopStepInfo_StepIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C");
		return ptr;
	}

}


