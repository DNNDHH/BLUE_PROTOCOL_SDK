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
	 * 		Name   -> Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.SetupTokenIcon
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventTokenIcon_C::SetupTokenIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.SetupTokenIcon");
		
		UWBP_NaEventTokenIcon_C_SetupTokenIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventTokenIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.Construct");
		
		UWBP_NaEventTokenIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventTokenIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.Tick");
		
		UWBP_NaEventTokenIcon_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TokenIdList                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_NaEventTokenIcon_C::SetData(TArray<int32_t> TokenIdList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.SetData");
		
		UWBP_NaEventTokenIcon_C_SetData_Params params {};
		params.TokenIdList = TokenIdList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.ExecuteUbergraph_WBP_NaEventTokenIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventTokenIcon_C::ExecuteUbergraph_WBP_NaEventTokenIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.ExecuteUbergraph_WBP_NaEventTokenIcon");
		
		UWBP_NaEventTokenIcon_C_ExecuteUbergraph_WBP_NaEventTokenIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_NaEventTokenIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_NaEventTokenIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C");
		return ptr;
	}

}


