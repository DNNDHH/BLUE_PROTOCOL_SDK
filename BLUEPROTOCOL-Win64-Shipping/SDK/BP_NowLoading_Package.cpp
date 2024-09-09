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
	 * 		Name   -> Function BP_NowLoading.BP_NowLoading_C.StartAnim
	 * 		Flags  -> ()
	 */
	void UBP_NowLoading_C::StartAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NowLoading.BP_NowLoading_C.StartAnim");
		
		UBP_NowLoading_C_StartAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NowLoading.BP_NowLoading_C.StopAnim
	 * 		Flags  -> ()
	 */
	void UBP_NowLoading_C::StopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NowLoading.BP_NowLoading_C.StopAnim");
		
		UBP_NowLoading_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NowLoading.BP_NowLoading_C.ExecuteUbergraph_BP_NowLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_NowLoading_C::ExecuteUbergraph_BP_NowLoading(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NowLoading.BP_NowLoading_C.ExecuteUbergraph_BP_NowLoading");
		
		UBP_NowLoading_C_ExecuteUbergraph_BP_NowLoading_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_NowLoading_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_NowLoading_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_NowLoading.BP_NowLoading_C");
		return ptr;
	}

}


